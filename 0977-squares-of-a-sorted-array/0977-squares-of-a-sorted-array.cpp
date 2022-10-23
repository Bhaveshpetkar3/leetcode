class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> ans;
        if(nums.size()==1)
        {
            ans.push_back(pow(nums[0],2));
            return ans;
        }
        int ptr=-1,i=0;
        if(nums[0]<0)
        {
            ptr++;
            while(ptr<nums.size() && nums[ptr]<0 )ptr++;  
            i=ptr;
            ptr-=1;
        }
        while(ptr>=0 && i<nums.size())
        {
            if(nums[i]<abs(nums[ptr]))
            {
                ans.push_back(pow(nums[i],2));
                i++;
            }
            else
            {
                ans.push_back(pow(nums[ptr],2));
                ptr--;
            }
        }
        if(i<nums.size() || ptr>=0)
        {
            if(i<nums.size())
            {
                while(i<nums.size())
                {
                    ans.push_back(pow(nums[i],2));
                    i++;
                }
            }
            else
            {
                while(ptr>=0)
                {
                     ans.push_back(pow(nums[ptr],2));
                     ptr--;
                }
            }
        }
        return ans;
    }
};