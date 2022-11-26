class Solution {
public:
    string convertToTitle(int n) {
        map <int,char> mpp;
        int y;
        string ans="";
        char a='A';
        for(int i=0;i<26;i++)
        {
            mpp[i]=a++;
        }
        while(n)
        {
            ans+=mpp[(n-1)%26];
            n=(n-1)/26;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};