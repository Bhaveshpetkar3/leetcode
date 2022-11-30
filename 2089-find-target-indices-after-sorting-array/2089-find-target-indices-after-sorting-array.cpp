//without sorting
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector <int> ans;
        int minele=0,targetcount=0,q=0;
        for(auto i:nums)
        {
            if(i<target)minele++;
            if(i==target)targetcount++;
        }
        while(q<targetcount)
        {
            ans.push_back(minele+q++);
        }
        return ans;
    }
};