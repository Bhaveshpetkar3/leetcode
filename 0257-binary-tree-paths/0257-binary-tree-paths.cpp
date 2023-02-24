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
    int solve(TreeNode* root,string ans,vector<string> &soln)
    {
        if(!root)return 0;
        if(ans.size()==0)ans+=to_string(root->val);
        else ans+="->"+to_string(root->val);
        int left=solve(root->left,ans,soln);
        int right=solve(root->right,ans,soln);
        if(left==0 && right==0)soln.push_back(ans);
        return 1;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string abe="";
        solve(root,abe,ans);
        return ans;
    }
    
};