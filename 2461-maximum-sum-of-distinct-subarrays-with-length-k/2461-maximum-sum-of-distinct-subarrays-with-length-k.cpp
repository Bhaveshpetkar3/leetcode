class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k)
    {
        unordered_map<long long,long long> mp;
        long long sum=0,ans=0;
        int n=nums.size();
        for(int i=0;i<k;i++)
        {
            mp[nums[i]]++;
            sum+=nums[i];
        }
        if(mp.size()==k)ans=sum;
        for(int i=k;i<n;i++)
        {
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0)mp.erase(nums[i-k]);
            mp[nums[i]]++;
            sum-=nums[i-k];
            sum+=nums[i];
            if(mp.size()==k)ans=max(ans,sum);
        }
        return ans;
    }
};