class Solution {
public:
    int romanToInt(string s) {
        int ans=0,sub=0,i;
        map <char,int> mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        for(i=0;i<s.length()-1;i++)
        {
            if(mp[s[i]]<mp[s[i+1]])
                sub+=mp[s[i]];
            else
                ans+=mp[s[i]];
        }
        ans+=mp[s[i]];
        return ans-sub;
    }
};