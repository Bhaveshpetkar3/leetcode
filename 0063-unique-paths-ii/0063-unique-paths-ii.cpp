class Solution {
public:
    int solve(int m,int n,int r,int c,vector<vector<int>> &dp,vector<vector<int>> &grid)
    {
        if(r<0 or c<0)
            return 0;
        if(dp[r][c]!=-1)return dp[r][c];
        if(grid[r][c]==1)return 0;
        return dp[r][c]=(solve(m,n,r-1,c,dp,grid)+solve(m,n,r,c-1,dp,grid));
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        if(grid[0][0]==1)return 0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        dp[0][0]=1;
        return solve(m,n,m-1,n-1,dp,grid);
    }
};