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
        int sumL=max(0,solve(root->left,ans));
        int sumR=max(0,solve(root->right,ans));
        ans=max(ans,sumL+sumR+root->val);
        return max(sumL,sumR)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int ans=root->val;
        solve(root,ans);
        return ans;
    }
};