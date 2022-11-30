//without sorting
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector <int> ans;
        int minele=0,targetcount=0;
        for(auto i:nums)
        {
            if(i<target)minele++;
            if(i==target)targetcount++;
        }
        while(targetcount--)
        {
            ans.push_back(minele++);
        }
        return ans;
    }
};