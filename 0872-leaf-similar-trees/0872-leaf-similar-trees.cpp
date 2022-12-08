/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void postorder(TreeNode *root,string &s)
    {
        if(root)
        {
            if(root->left==NULL && root->right==NULL)s+=to_string(root->val)+"->";
        postorder(root->left,s);
        postorder(root->right,s);
        
        }
    return;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1="",s2="";
        postorder(root1,s1);
        postorder(root2,s2);
        cout<<s1<<" "<<s2;
        return s1==s2;
    }
};