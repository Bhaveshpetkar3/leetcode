class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int> mp1;
        for(auto i: s)mp1[i]++;
        vector<pair<int,char>> q;
        for(auto i: mp1)q.push_back(make_pair(i.second,i.first));
        sort(q.begin(),q.end(),greater<>());
        for(auto i:q)while(i.first--)ans+=i.second;
        return ans;
        
    }
};