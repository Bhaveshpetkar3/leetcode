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
    bool solve(TreeNode* p,TreeNode* q)
    {
       if(!p || !q)return p==NULL && q==NULL;
       if(p->val == q->val)
       {
           bool left=solve(p->left,q->left);
           bool right=solve(p->right,q->right);
           return left&&right;
       }
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans=solve(p,q);
        return ans;
    }
};