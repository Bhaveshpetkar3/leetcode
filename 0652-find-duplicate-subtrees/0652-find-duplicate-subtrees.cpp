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
    string solve(TreeNode* root,vector <TreeNode*> &ans,map<string,int> &mpp)
    {
        if(!root)return "";
      string l=solve(root->left,ans,mpp);
      string r=solve(root->right,ans,mpp);
        string gg="hehe"+l + to_string(root->val) + r +"haha";
        if(mpp[gg]==1)ans.push_back(root);
        mpp[gg]++;
return gg;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector <TreeNode*> ans;
        map <string,int> mpp;
        solve(root,ans,mpp);
        return ans;
    }
};