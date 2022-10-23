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
            if(i.second>=2)
            {
                ans+=((i.second-1)*(i.second))/2;
            }
        }
        return ans;
    }
};