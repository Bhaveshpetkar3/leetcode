class Solution {
public:
    int solve(vector<int> &nums,int n,vector<int> &dp)
    {
        if(n==0)return nums[0];
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int pick=nums[n]+solve(nums,n-2,dp);
        int notpick=solve(nums,n-1,dp);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> v1(nums.begin(),nums.end()-1);
        vector<int> v2(nums.begin()+1,nums.end());
        
        int n1=v1.size();
        int n2=v2.size();
        vector<int> dp1(n-1,-1);
        vector<int> dp2(n-1,-1);
        return max(solve(v1,n1-1,dp1),solve(v2,n2-1,dp2));
    }
};