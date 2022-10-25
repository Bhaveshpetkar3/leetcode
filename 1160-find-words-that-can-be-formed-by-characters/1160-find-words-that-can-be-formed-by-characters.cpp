class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map <char,int> mp;
        string ans="";
        int j;
        for(int i=0;i<chars.size();i++)
        {
            mp[chars[i]]++;
        }
        for(int i=0;i<words.size();i++)
        {
            map <char,int> mp1(mp);
            for(j=0;j<words[i].size();j++)
            {
                if(mp1[words[i][j]]!=0)
                   {
                       mp1[words[i][j]]--;
                   }
                else break;
            }
            if(j==words[i].size())ans+=words[i];
        }
        return ans.size();
    }
};