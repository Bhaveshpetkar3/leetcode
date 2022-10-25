class Solution {
public:
    char findTheDifference(string s, string t) {
        int a=0,o=0;
        for(auto i: s)a+=i;
        for(auto j:t)o+=j;
        return char(o-a);
    }
};