/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,map<int,map<int,vector<int>>> &jj,int i,int j)
    {
        if(!root)return;
        //cout<<j<<" ";
        jj[i][j].push_back(root->val);
        solve(root->left,jj,i-1,j+1);
        solve(root->right,jj,i+1,j+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> jj;
        solve(root,jj,0,0);
        vector<vector<int>> ans(jj.size());
        int l=0;
        //cout<<jj[2][2][0];
//         for(auto i:jj)
//         {
//             cout<<i.second.size()<<" ";
// //             for(int k=0;k<i.second.size();k++)
// //             {
                
// //                 int b=i.second[k].size();
// //                 while(b--)
// //                 {
// //                 int l=0;
// //                 int n=i.second[k][l].size();
// //                 sort(i.second[k][l].begin(),i.second[k][l].end());
// //                 for(auto v:i.second[k][l])ans[j].push_back(v);
// //                 }
//                 j++;
//             }
//         for(int k=0;k<jj.size();k++)
//         {
            
//         }
        for(auto i:jj)
        {
            for(auto j:i.second)
            {
                sort(j.second.begin(),j.second.end());
                for(auto k:j.second)
                {
                    ans[l].push_back(k);
                }
            }
            l++;
        }
       
        return ans;
    }
};