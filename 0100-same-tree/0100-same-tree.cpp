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
    bool inorder(TreeNode* p,TreeNode* q)
    {
       if(!p || !q)return p==NULL && q==NULL;
       if(p->val == q->val)
       {
           bool left=inorder(p->left,q->left);
           bool right=inorder(p->right,q->right);
           return left&&right;
       }
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans=inorder(p,q);
        return ans;
    }
};