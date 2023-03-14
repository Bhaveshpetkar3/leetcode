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
    int solve(TreeNode* root,long long &ans,long long temp)
    {
        if(!root)return 0;
        //if(ans.size()==0)ans+=to_string(root->val);
        if(temp==0)temp=root->val;
        else temp=temp*10+root->val;
        int left=solve(root->left,ans,temp);
        int right=solve(root->right,ans,temp);
        if(left==0 && right==0)ans+=temp;
        return 1;
    }
    int sumNumbers(TreeNode* root) {
        long long ans=0;
        long long temp=0;
        solve(root,ans,temp);
        return ans;
    }
};