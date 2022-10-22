class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector <int> prefix;
        prefix.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            prefix.push_back(prefix[i-1]+nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if((prefix[i]-nums[i])==(prefix[n-1]-prefix[i]))return i;
        }
        return -1;
    }
};