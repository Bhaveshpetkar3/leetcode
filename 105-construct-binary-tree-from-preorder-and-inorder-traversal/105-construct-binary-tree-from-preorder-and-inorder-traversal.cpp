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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int key=0;
        return constructtree(preorder,inorder,0,inorder.size()-1,key);
    }
    TreeNode* constructtree(vector <int>& preorder,vector <int>& inorder,int left,int right,int& keypre)
    {
        if(left>right)
        {
            return NULL;
        }
        int key=left;
        while(inorder[key]!=preorder[keypre])
        {
            key++;
        }
        keypre++;
        TreeNode* root=new TreeNode(inorder[key]);
        root->left=constructtree(preorder,inorder,left,key-1,keypre);
        root->right=constructtree(preorder,inorder,key+1,right,keypre);
        return root;
    }
};