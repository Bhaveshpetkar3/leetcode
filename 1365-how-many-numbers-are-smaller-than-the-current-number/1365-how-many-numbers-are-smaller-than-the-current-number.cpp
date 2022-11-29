class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr=nums;
        vector <int> ans;
        sort(arr.begin(),arr.end());
        for(auto i: nums)
        {
            int j=0;
            for(auto h : arr)
            {
                if(i<h)continue;
                if(i>h)j++;
            }
            ans.push_back(j);
        }
        return ans;
    }
};