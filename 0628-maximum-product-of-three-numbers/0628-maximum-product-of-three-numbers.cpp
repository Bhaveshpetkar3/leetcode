class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=1;
        ans*=nums[n-1];
        return max(ans*nums[n-2]*nums[n-3],ans*nums[0]*nums[1]);
    }
};