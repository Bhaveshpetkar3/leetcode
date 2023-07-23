class Solution {
public:
     int dp[51][51][51];
    int cp(int i1,int j1,int j2,int n,vector<vector<int>> &grid)
    {
        int i2=i1+j1-j2;
        if(j1>=n or j2>=n or i1>=n or i2>=n or grid[i1][j1]==-1 or grid[i2][j2]==-1)return -1e9;
        if(i1==n-1 and j1==n-1)return grid[i1][j1];
        if(dp[i1][j1][j2]!=-1)return dp[i1][j1][j2];
        int maxi=0;
        if(i1==i2 and j1==j2)
            maxi+=grid[i1][j1];
         else maxi+=grid[i1][j1]+grid[i2][j2];
        int ans=INT_MIN;
        int a=cp(i1+1,j1,j2+1,n,grid);
        a=max(a,cp(i1+1,j1,j2,n,grid));
        a=max(a,max(cp(i1,j1+1,j2,n,grid),cp(i1,j1+1,j2+1,n,grid)));
        return dp[i1][j1][j2]=a+maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
         memset(dp,-1,sizeof(dp));
        int ans=cp(0,0,0,n,grid);
        return ans>0?ans:0;
    }
};