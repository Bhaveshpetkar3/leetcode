class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()==1)return true;
        unordered_map <char,char> mpp;
        unordered_map <char,char> mp1;
        mpp[s[0]]=t[0];
        mp1[t[0]]++;
        for(int i=1;i<s.length();i++)
        {
            if(mpp[s[i]])
            {
                if(mpp[s[i]]!=t[i])return false;
                continue;
            }
            if(mp1[t[i]]  )
            {
                return false;
            }
            mpp[s[i]]=t[i];
            mp1[t[i]]++;
        }
        return true;
    }
};