class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,cnt=0;
        for(auto &i:nums)
        {
            if(i==0)cnt++;
            else cnt=0;
            ans+=cnt;
        }
        return ans;
    }
};