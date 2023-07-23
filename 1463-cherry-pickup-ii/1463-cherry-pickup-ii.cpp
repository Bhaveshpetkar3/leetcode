class Solution {
public:
    int solve(int i,int j1,int j2,int m,int n,vector<vector<vector<int>>> &dp,vector<vector<int>> &grid)
    {
        if(j1<0 or j1>=n or j2<0 or j2>=n)return -1e9;
        if(i==m-1)
        {
            if(j1==j2)return grid[i][j1];
            return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1)return dp[i][j1][j2];
        int maxi=INT_MIN;
        for(int dx=-1;dx<2;dx++)
        {
            for(int dy=-1;dy<2;dy++)
            {
                int ans;
                if(j1==j2)ans=grid[i][j1]+solve(i+1,j1+dx,j2+dy,m,n,dp,grid);
                else
                    ans=grid[i][j1]+grid[i][j2]+solve(i+1,j1+dx,j2+dy,m,n,dp,grid);
                maxi=max(ans,maxi);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(n,-1)));
        return solve(0,0,n-1,m,n,dp,grid);
    }
};