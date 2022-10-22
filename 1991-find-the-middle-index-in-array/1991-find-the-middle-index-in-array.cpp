class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        
        int pre=0,sum=0;
        for(auto i:nums)pre+=i;
        int j=0;
        for(auto i:nums)
        {
            sum+=i;
            if(sum==pre)return j;
            pre-=i;
            j++;
        }
        return -1;
    }
};