/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root,vector <TreeNode*> &ans,TreeNode* x)
    {
        if(!root)return 0;
        ans.push_back(root);
        if(root->val==x->val)return true;
        bool left=solve(root->left,ans,x);
        bool right=solve(root->right,ans,x);
        if(left||right)return true;
        ans.pop_back();
        return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> ans;
        solve(root,ans,p);
        //for(auto i: ans)cout<<i->val<<" ";
        vector <TreeNode*> right;
        solve(root,right,q);
        for(int i=ans.size()-1;i>=0;i--)
        {
            for(int j=right.size()-1;j>=0;j--)
            {
                if(ans[i]->val==right[j]->val)return ans[i];
            }
        }
        return root;
    }
};