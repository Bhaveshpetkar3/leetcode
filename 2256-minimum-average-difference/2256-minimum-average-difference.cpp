class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        if(n==1)return 0;
        for(auto i:nums)sum+=i;
        int mabs,j=1,small=INT_MAX,abc;
        long long sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1+=nums[i];
            if(i==n-1)mabs=sum1/j;
            else mabs=abs((sum1/j)-((sum-sum1)/(n-j)));
            if(mabs<small)
            {
                small=mabs;
                abc=i;
            }
            j++;
        }
        return abc;
    }
};