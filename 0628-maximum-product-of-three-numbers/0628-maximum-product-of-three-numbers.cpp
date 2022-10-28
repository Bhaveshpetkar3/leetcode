class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==3)return nums[0]*nums[1]*nums[2];
        int ans=1;
        ans*=nums[n-1];
        if(nums[0]*nums[1]>nums[n-2]*nums[n-3] && ans>0)
        {
            return ans*nums[0]*nums[1];
        }
        else return ans*nums[n-2]*nums[n-3];
    }
};