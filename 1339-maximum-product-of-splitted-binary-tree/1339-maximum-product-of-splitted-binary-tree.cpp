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
    int modd=1e9+7;
    long int tsum=0,ans,abc=INT_MIN;
    int postorder(TreeNode* root)
    {
        if(!root)return 0;
        ans=postorder(root->left)+postorder(root->right)+root->val;
        abc=max(abc,ans*(tsum-ans));
        // postorder(root->left);
        // postorder(root->right);
        return ans;
    }
    int maxProduct(TreeNode* root) {
        tsum=postorder(root);
        postorder(root);
        return abc%modd;
    }
};