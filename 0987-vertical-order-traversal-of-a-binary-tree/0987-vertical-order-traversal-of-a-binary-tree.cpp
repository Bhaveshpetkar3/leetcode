class Solution {
public:
    void solve(TreeNode* root,map<int,map<int,vector<int>>> &jj,int i,int j)
    {
        if(!root)return;
        jj[i][j].push_back(root->val);
        solve(root->left,jj,i-1,j+1);
        solve(root->right,jj,i+1,j+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> jj;
        solve(root,jj,0,0);
        vector<vector<int>> ans(jj.size());
        int l=0;
        for(auto i:jj)
        {
            for(auto j:i.second)
            {
                sort(j.second.begin(),j.second.end());
                for(auto k:j.second)ans[l].push_back(k);
            }
            l++;
        }
        return ans;
    }
};