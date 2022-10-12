class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len= nums.size(),j=0,i=1;
        while(i<len)
        {
        if(nums[i]!=nums[j])
        {
            j+=1;
            nums[j]=nums[i];
        }
            i++;
        }
        return j+1;
    }
};