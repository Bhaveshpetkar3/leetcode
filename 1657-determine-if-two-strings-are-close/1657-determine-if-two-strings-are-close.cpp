class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size()!=w2.size())return false;
        map<char,int> mp1;
        map<char,int> mp2;
        for(int i=0;i<w1.size();i++)
        {
            mp1[w1[i]]++;
            mp2[w2[i]]++;
        }
        if(mp1.size()!=mp2.size())return false;
        for(auto i:mp1)
        {
            if(mp2.find(i.first)!=mp2.end())continue;
            else return false;
            
        }
        map<int,int> mp3;
        map<int,int> mp4;
        for(auto i:mp1)mp3[i.second]++;
        for(auto i:mp2)mp4[i.second]++;
        if(mp3==mp4)return true;
        return false;
    }
};