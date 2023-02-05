class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int> ans;
        int l1=s1.length();
        int l2=s2.length();
        if(l1>l2)return ans;
        vector<int> g1(26,0);
        vector<int> g2=g1;
        for(int i=0;i<l1;i++)
        {
            g1[s1[i]-'a']++;
            g2[s2[i]-'a']++;
        }
        if(g1==g2)ans.push_back(0);
        for(int i=l1;i<l2;i++)
        {
            g2[s2[i-l1]-'a']--;
            g2[s2[i]-'a']++;
            if(g1==g2)ans.push_back(i-l1+1);
        }
        return ans;
    }
};