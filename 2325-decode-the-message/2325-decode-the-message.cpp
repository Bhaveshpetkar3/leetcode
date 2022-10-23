class Solution {
public:
    string decodeMessage(string key, string message) {
        char x='a';
        string ans="";
        map<char,char> mp;
        mp[' ']=' ';
        for(auto i: key)
        {
            if(i==' ' || mp[i]!=0)continue;
            mp[i]=x++;
        }
        for(auto j: message)
        {
            ans+=mp[j];
        }
        return ans;
    }
};