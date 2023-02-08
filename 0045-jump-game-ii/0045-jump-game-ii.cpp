class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=1;
        int i=0,mx=INT_MIN;
        int n=nums.size();
        if(n==1)return 0;
        if(nums[0]>=n-1)return 1;
        int mx_idx=0;
        while(i<n-1)
        {
            if(i+nums[i]>=n-1)return jump+1;
            int k=1,l=nums[i];
            while(k<=l)
           {
               //mx=max(mx,k+nums[k+]+i);
                if(mx<k+nums[k+i]+i)
                {
                    mx=k+nums[k+i]+i;
                    mx_idx=k+i;
                }
               if(mx>=n-1)return jump+1;
               k++;
           }
           jump++;
           i=mx_idx;
           mx=INT_MIN;
           }
        return jump;
    }
};