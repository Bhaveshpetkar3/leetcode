class Solution {
public:
    string convertToTitle(int n) {
        map <int,char> mpp;
        int y;
        string ans="";
        while(n)
        {
            ans+=(n-1)%26+'A';
            n=(n-1)/26;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};