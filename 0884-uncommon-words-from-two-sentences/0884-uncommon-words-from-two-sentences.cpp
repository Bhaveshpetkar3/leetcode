class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map <string,int> mp1;
        vector <string> ans;
        string a="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
            {
                mp1[a]++;
                a="";
                continue;
            }
            a+=s1[i];
            if(i==s1.size()-1)mp1[a]++;
            
        }
        a="";
        for(char i : s2)
        {
            if(i==' ')
            {
                mp1[a]++;
                a="";
                
            }
            else a+=i;
        }
        mp1[a]++;
        for(auto i:mp1)
        {
           if(i.second==1)ans.push_back(i.first);
        }
        return ans;
    }
};