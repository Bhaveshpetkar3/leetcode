class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k)
    {
        unordered_map<long long,long long> mp;
        long long sum=0,ans=0;
        int n=nums.size();
        int i=0,j=0;//i for denoting the starting index of sliding window and j for the ending index of sliding window
        while(j<n)
        {
            sum+=nums[j];
            mp[nums[j]]++;
            if(j-i+1==k)
            {
                if(mp.size()==k)ans=max(ans,sum);
                sum-=nums[i];
                mp[nums[i]]--;
                if(!mp[nums[i]])mp.erase(nums[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};