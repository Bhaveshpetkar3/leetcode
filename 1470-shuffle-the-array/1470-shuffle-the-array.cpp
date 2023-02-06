class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ans;
        int j=0;
        while(j<n)ans.push_back(nums[j++]),ans.push_back(nums[j+n-1]);
        return ans;
    }
};