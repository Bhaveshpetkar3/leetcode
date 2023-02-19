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
    int solve(TreeNode* root,int &ans)
    {
        if(!root)return 0;
        int sumL=solve(root->left,ans);
        int sumR=solve(root->right,ans);
        ans=max(ans,max(max((sumL+sumR+root->val),max(sumR+root->val,sumL+root->val)),root->val));
        // ans=max(ans,max(max(sumR+root->val,sumL+root->val),root->val));
        cout<<ans<<" ";
        return max(root->val,max(sumR+root->val,sumL+root->val));
    }
    int maxPathSum(TreeNode* root) {
        int ans=root->val;
        solve(root,ans);
        return ans;
    }
};