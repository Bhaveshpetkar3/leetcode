class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> m;
        unordered_set <int> ans;
        for(auto i: arr)
        {
            m[i]++;
        }
        for(auto i:m)ans.insert(i.second);
       if(m.size()==ans.size())return true;
        return false;
    }
};