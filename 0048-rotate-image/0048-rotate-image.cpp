class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size(),temp;
        for(int i=0;i<n/2;i++)
        {
            for(int j=i;j<(n-i-1);j++)
            {
                temp=mat[i][j];
                mat[i][j]=mat[n-1-j][i];
                mat[n-1-j][i]=mat[n-1-i][n-1-j];
                mat[n-1-i][n-1-j]=mat[j][n-1-i];
                mat[j][n-1-i]=temp;
            }
        }
    }
};
//https://leetcode.com/problems/rotate-image/discuss/2502730/LeetCode-The-Hard-Way-Visualising-rotation