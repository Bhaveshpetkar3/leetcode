class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int j=0;
        vector <int> ans;
        for(auto i:nums)
        {
            if(i>target)break;
            if(i==target)ans.push_back(j);
            j++;
        }
        return ans;
    }
};