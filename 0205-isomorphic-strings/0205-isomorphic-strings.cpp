class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> a1(256,0);
        vector<int> a2(256,0);
        int h=1;
        for(int i=0; i<s.size();i++)
        {
            if(a1[s[i]]!=a2[t[i]]) 
                return false;
            a1[s[i]]=h;
            a2[t[i]]=h;
            h++;
        }
        return true;
    }
};