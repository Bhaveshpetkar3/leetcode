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
    TreeNode* solve(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(!root)return NULL;
        if(root->val == p->val || root->val == q->val) return root; 
        TreeNode* left=solve(root->left,p,q);
        TreeNode* right=solve(root->right,p,q);
        if(left && right)return root;
        if(left)return left;
        return right;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=solve(root,p,q);
        return ans;
    }
};