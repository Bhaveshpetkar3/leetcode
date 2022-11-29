class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr=nums;
        vector <int> ans;
        unordered_map <int,int> mpp;
        sort(arr.begin(),arr.end());
        for(int i=nums.size()-1;i>=0;i--)
            mpp[arr[i]]=i;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=mpp[nums[i]];
        }
        return nums;
    }
};
// for(int i=nums.size()-1;i>=0;i--)
// Why you used the dec. loop ?
//ANS: Because if he didnt run the loop in decreasing order, for same elements, while storing in hashmap, it will update to a higher index instead of first occurrence of the elements.