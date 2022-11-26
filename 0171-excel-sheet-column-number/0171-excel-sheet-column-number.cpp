class Solution {
public:
    int titleToNumber(string s) {
        int n=s.size();
        n--;
        //cout<<n;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i]-'A'+1<<" ";
            ans+=(int)(pow(26,n)*(s[i]-'A'+1));
                //ans+=(int)(pow((s[i]-'A'+1),n));
            cout<<ans<<" ";
                n--;
        }
        return ans;
    }
};