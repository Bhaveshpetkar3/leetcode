class Solution {
public:
    int sol(int n,vector<int> &dp)
    {
        if(n<=1)return n;
        if(dp[n]!=-1)return dp[n];
        dp[n]=sol(n-1,dp)+sol(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector <int> dp(n+3,-1);
        return sol(n+1,dp);
    }
};