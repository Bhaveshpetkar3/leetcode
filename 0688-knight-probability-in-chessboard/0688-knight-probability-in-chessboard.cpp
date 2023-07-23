class Solution {
public:
    double solve(int n,int k, int r,int c,vector<vector<vector<double>>> &dp)
    {
        if(r<0 or c<0 or r>=n or c>=n)return 0;
        if(k==0)return 1;
        if(dp[r][c][k]!=-1)return dp[r][c][k];
        double prob=solve(n,k-1,r-2,c-1,dp)+solve(n,k-1,r-1,c-2,dp)+
                    solve(n,k-1,r+1,c-2,dp)+solve(n,k-1,r+2,c-1,dp)+
                    solve(n,k-1,r+2,c+1,dp)+solve(n,k-1,r+1,c+2,dp)+
                    solve(n,k-1,r-1,c+2,dp)+solve(n,k-1,r-2,c+1,dp);
       return dp[r][c][k]=prob/8;
    }
    double knightProbability(int n, int k, int r, int c) {
        vector<vector<vector<double>>> dp(n,vector<vector<double>>(n,vector<double>(k+1,-1)));
        return solve(n,k,r,c,dp);
    }
};