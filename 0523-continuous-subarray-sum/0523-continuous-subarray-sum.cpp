class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int psum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==0 && nums[i-1]==0)return 1;
            psum+=nums[i];
            if(!(psum%k))return true;
            int temp=psum;
            int j=0;
            while(i-j>=2 && temp>k)
            {
                temp-=nums[j];
                if(!(temp%k))return true;
                j++;
            }
        }
        return false;
    }
};