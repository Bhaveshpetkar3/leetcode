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
    int ans = 0;
    void preorder(TreeNode* head,int mini,int maxi){
        if(head==NULL) return;
        mini = min(mini,head->val); 
        maxi = max(maxi,head->val);
        //cout<<maxi;
        int a=abs(maxi-mini);
        ans = max(ans,a);
        //cout<<ans;
        preorder(head->left,mini,maxi);
        preorder(head->right,mini,maxi);
    }
    int maxAncestorDiff(TreeNode* root) {
        preorder(root,999999,0);
        return ans;
    }
};