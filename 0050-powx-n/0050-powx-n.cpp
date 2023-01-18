class Solution {
public:
    double power(double k,int n)
{
    if(n==0)
        return 1;
    double ans=power(k,n/2);
    ans=ans*ans;
    if(n%2==0)return ans;
    return k*ans;
}
    double myPow(double k, int n) {
        double ans=power(k,n);
      if(n<0)return (1/ans);
    return ans;
    }
};