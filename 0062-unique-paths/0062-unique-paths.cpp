class Solution {
public:
    int dp[100][100];
    //vector<vector<int>> dp(100,vector<int>(100,-1));
    int solve(int i,int j,int m,int n)
    {
        if(i==m-1||j==n-1)return 1;
        if(dp[i][j]!=0) return dp[i][j];
        dp[i][j]=solve(i+1,j,m,n)+solve(i,j+1,m,n);
        return  dp[i][j];
    }
    int uniquePaths(int m, int n) {
        int j=solve(0,0,m,n);
            return j;
    }
};