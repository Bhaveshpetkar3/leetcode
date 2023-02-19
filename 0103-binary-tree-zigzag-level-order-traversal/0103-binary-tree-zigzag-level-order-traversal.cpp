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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*> q;
        bool flag=0;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;
            int n=q.size();
            //TreeNode* node;
            for(int i=0;i<n;i++)
            {
                TreeNode *node=q.front();
                q.pop();
                if(node -> left)q.push(node->left);
                if(node -> right)q.push(node->right);
                level.push_back(node->val);
            }
            if(flag)
            {
                flag=false;
                reverse(level.begin(),level.end());
            }
            else flag=true;
            ans.push_back(level);
        }
        return ans;
    }
};