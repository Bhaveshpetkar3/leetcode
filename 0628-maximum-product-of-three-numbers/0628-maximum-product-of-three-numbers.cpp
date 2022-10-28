class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        long int max1=INT_MIN;
        long int max2;
        max2=max1;
        long int max3;
        max3=max2;
        long int min1=INT_MAX;
        long int min2;
        min2=min1;
        for(int i: nums)
        {
            //cout<<i;
            if(i>=max1)
            {
                max3=max2;
                max2=max1;
                max1=i;
            }
            else if(i>=max2)
            {
                max3=max2;
                max2=i;
            }
            else if(i>=max3)max3=i;
            if(i<=min1)
            {
                min2=min1;
                min1=i;
            }
            else if(i<=min2)min2=i;
        }
        //int ans=max((min1*min2*max1),(max1*max2*max3));
        return max((min1*min2*max1),(max1*max2*max3));
    }
};