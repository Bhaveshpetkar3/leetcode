class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        if(target<nums[0])return 0;
        else if(target>nums[high])return high+1;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        if(low>mid)return low;
        return mid;
    }
};