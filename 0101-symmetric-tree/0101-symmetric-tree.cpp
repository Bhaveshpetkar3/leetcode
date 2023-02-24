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
    bool solve(TreeNode* rootl,TreeNode* rootr)
    {
        if(!rootl || !rootr)return rootl==NULL && rootr==NULL;
        if(rootl->val!=rootr->val)return false;
        return solve(rootl->left,rootr->right)&solve(rootl->right,rootr->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return false;
        return solve(root->left,root->right);
    }
};