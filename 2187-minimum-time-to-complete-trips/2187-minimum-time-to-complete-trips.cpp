class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long ans=0,low=1,high=1e14,mid,i=1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            ans=0;
            for(auto j:time)ans+=(mid/j);
            if(ans>=totalTrips)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};