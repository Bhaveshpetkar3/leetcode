class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1=s1.length();
        int l2=s2.length();
        if(l1>l2)return false;
        vector<int> g1(26,0);
        vector<int> g2=g1;
        for(int i=0;i<l1;i++)
        {
            g1[s1[i]-'a']++;
            g2[s2[i]-'a']++;
        }
        if(g1==g2)return true;
        for(int i=l1;i<l2;i++)
        {
            g2[s2[i-l1]-'a']--;
            g2[s2[i]-'a']++;
            if(g1==g2)return true;
        }
        return false;
    }
};