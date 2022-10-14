class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int prev=nums[0];
        int current,count=0;
        for(int i=1;i<nums.size();i++)
        {
            current=nums[i];
            if(nums[i-1]>=current)
            {
                if(count==1)return false;
                if(i>=2 && nums[i-2]>=current)
                {
                    nums[i]=nums[i-1];
                }
                count++;
            }
           
            if(count>1)return false;
        }
       return true; 
    }
};