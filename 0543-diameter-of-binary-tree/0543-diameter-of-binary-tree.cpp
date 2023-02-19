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
            int lefth=solve(root->left,ans);
            int righth=solve(root->right,ans);
            ans=max(ans,lefth+righth);
            return 1+max(lefth,righth);
        }
        int diameterOfBinaryTree(TreeNode* root) {
            int j=0;
        solve(root,j);
        return j;
    }
};