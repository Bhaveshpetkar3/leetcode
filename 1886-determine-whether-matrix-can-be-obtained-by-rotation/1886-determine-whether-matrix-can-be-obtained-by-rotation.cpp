class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        //see below problem to understand this solution
        //https://leetcode.com/problems/rotate-image/
        if(mat==target)return true;
        int y=3;
        int n=mat.size();
        while(y--)
        {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
        if(mat==target)return true;
        }
        return false;
    }
};