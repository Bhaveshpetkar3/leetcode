class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0,cnt=0,ans;
        while(i<s.length())
        {
            if(s[i]==' ')cnt=0;
            else 
            {cnt++;
             ans=cnt;
            }
            i++;
        }
        return ans;
    }
};