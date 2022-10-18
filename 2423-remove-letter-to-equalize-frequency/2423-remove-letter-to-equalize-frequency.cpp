class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map <char,int> mp;
        for(int i=0;i<word.length();i++)
        {
            mp[word[i]]++;
        }
        int u=0;
        if(mp.size()==1)return true;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second!=1)
            {
                u=1;
                break;
            }
             
        }
        if(u==0)return true;
        unordered_map <char,int> mp1;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            mp1[i->second]++;
        }
        if(mp1.size()>2 || mp1.size()==1)return false;
        auto itr=mp1.begin();
        auto itr2=mp1.begin();
        advance(itr2, 1);
        if((itr->first==1 && itr->second==1) || (itr2->first==1 && itr2->second==1))return true;
        if((abs(itr->first-itr2->first)>1) || (itr->second!=1 && itr2->second!=1))return false;
        if(itr->second==1 && itr2->second==1)return true;
        if(itr->first>itr2->first && itr->second>1)return false;
        if(itr->first<itr2->first && itr2->second>1)return false;
        return true;
        
    }
};