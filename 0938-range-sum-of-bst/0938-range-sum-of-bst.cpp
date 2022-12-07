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
    int ans=0;
    int postorder(TreeNode *root,int l,int h)
    {
        if(root)
        {
        postorder(root->left,l,h);
        postorder(root->right,l,h);
        int j=root->val;
        if(j<=h && j>=l)ans+=j;
        }
        return ans;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=postorder(root,low,high);
        return ans;
    }
};