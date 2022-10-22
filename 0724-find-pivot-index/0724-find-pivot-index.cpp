class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        //vector <int> prefix;
        int pre=0;
        for(auto i:nums)pre=pre+i;
        int sum=0;
        //prefix.push_back(nums[0]);
        // for(int i=1;i<n;i++)
        // {
        //     prefix.push_back(prefix[i-1]+nums[i]);
        // }
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==pre)return i;
            pre-=nums[i];
        }
        return -1;
    }
};