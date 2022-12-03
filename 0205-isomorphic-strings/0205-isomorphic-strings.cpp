class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int h=2;
        string a="1",b="1";
        //int a=0;
        unordered_map<char,int> mp;
        mp[s[0]]=1;
        for(int i=1;i<s.size();i++)
        {
            if(mp[s[i]])a+=to_string(mp[s[i]]);
            else
            {
                mp[s[i]]=h++;
                a+=to_string(mp[s[i]]);
            }
        }
        //cout<<a<<" ";
        mp.clear();
        h=2;
        mp[t[0]]=1;
        for(int i=1;i<t.size();i++)
        {
            //if(a[i]!=b[i])return false;
            if(mp[t[i]])b+=to_string(mp[t[i]]);
            else
            {
                mp[t[i]]=h++;
                b+=to_string(mp[t[i]]);
            }
        }
        // cout<<a<<" "<<b;
        return a==b;
        
    }
};