class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)dp[0][i]=grid[0][i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int up=grid[i][j]+dp[i-1][j];
                int leftdiag=grid[i][j];
                if(j>0)leftdiag+=dp[i-1][j-1];
                    else leftdiag+=99999999;
                int rightdiag=grid[i][j];
                if(j<n-1)rightdiag+=dp[i-1][j+1];
                    else rightdiag+=99999999;
                dp[i][j]=min(up,min(leftdiag,rightdiag));
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini=min(dp[n-1][i],mini);
        }
        return mini;
    }
};