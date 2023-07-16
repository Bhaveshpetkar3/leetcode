class Solution {
public:
    int solve(vector<int> &dp,vector<int> &nums,int n)
    {
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int left=INT_MIN,right=INT_MIN;
        if(n-2>=0)
            left=nums[n]+solve(dp,nums,n-2);
        if(n-3>=0)
            right=nums[n]+solve(dp,nums,n-3);
        return dp[n]=max(left,right);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        dp[1]=nums[1];
        return max(solve(dp,nums,n-1),solve(dp,nums,n-2));
    }
};