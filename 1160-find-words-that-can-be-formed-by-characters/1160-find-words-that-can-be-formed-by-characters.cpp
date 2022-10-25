class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map <char,int> mp;
        int ans=0;
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
                if(mp1[words[i][j]])
                   {
                       mp1[words[i][j]]--;
                   }
                else break;
            }
            if(j==words[i].size())ans+=words[i].size();
        }
        return ans;
    }
};