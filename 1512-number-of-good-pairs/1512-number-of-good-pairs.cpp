class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map <int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            ans+=i.second>=2 ? ((i.second-1)*(i.second))/2 : 0;
        }
        return ans;
    }
};