class Solution {
public:
    int solve(int r,int c,vector<vector<int>> &dp,vector<vector<int>> &grid)
	{
	    if(r<0 or c<0)return INT_MAX;
	    if(r==0 and c==0)return grid[r][c];
	    if(dp[r][c]!=-1)return dp[r][c];
	    int up=solve(r-1,c,dp,grid);
	    int down=solve(r,c-1,dp,grid);
	    return dp[r][c]=(min(up,down)+grid[r][c])%1000000007;
	}
    int minPathSum(vector<vector<int>>& grid) {
       int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        //dp[0][0]=grid[0][0];
        return solve(m-1,n-1,dp,grid); 
    }
};