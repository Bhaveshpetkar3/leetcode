class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long long int> sum(nums.size());
        int n=nums.size();
        if(n==1)return 0;
        sum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sum[i]=sum[i-1]+nums[i];
        }
        // for(auto i :sum)cout<<i<<" ";
        int mabs,j=1,small=INT_MAX,abc;
        for(int i=0;i<n;i++)
        {
            if(i==n-1)mabs=sum[i]/j;
            else mabs=abs((sum[i]/j)-((sum[n-1]-sum[i])/(n-j)));
            //cout<<mabs<<" ";
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