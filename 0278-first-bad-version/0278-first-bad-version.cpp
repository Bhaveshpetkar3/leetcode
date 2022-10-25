// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int l=1,r=n;
        long long int ans;
        while(r>=l)
        {
            long long int mid=(l+r)/2;
            if(isBadVersion(mid))
            {
                cout<<"hiii";
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
       
        return ans;
    }
};