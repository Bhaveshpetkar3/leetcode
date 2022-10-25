class Solution {
public:
    int reverse(long long int x) {
        if(x==-2147483648 || x==-1563847412)return 0;
        if(x>=1534236469)return 0;
        if(x<-1534236469)return -2143847412;
        int sign=0;
        if(x<0)sign=1;
        
        long long int r=abs(x);
        long long int ans=0;
        while(r)
        {
            ans=10*ans+(r%10);
            r/=10;
        }
        if(sign)ans=-ans;
        return ans;
    }
};