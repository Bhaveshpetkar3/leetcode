class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> a1(256,0);
        vector<int> a2(256,0);
        for(int i=0; i<s.size();i++)
        {
            if(a1[s[i]]!=a2[t[i]]) 
                return false;
            a1[s[i]]=i+1;
            a2[t[i]]=i+1;
        }
        return true;
    }
};