class Solution {
public:
    int titleToNumber(string s) {
        int n=s.size()-1;
        int ans=0;
        for(auto i:s)
        {
            ans+=pow(26,n--)*(i-'A'+1);
        }
        return ans;
    }
};