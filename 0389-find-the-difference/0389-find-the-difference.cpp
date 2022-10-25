class Solution {
public:
    char findTheDifference(string s, string t) {
        int a=0,o=0;
        for(int i=0;i<s.size();i++)
        {
            a+=s[i];
        }
        for(int i=0;i<t.size();i++)
        {
            o+=t[i];
        }
        char e=o-a;
        return e;
    }
};