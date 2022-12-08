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
void postorder(TreeNode *root,vector<int> &qwe)
    {
        if(root)
        {
            if(root->left==NULL && root->right==NULL)qwe.push_back(root->val);
        postorder(root->left,qwe);
        postorder(root->right,qwe);
        
        }
    return;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> ans1;
        vector <int> ans2;
        postorder(root1,ans1);
        postorder(root2,ans2);
        return ans1==ans2;
    }
};