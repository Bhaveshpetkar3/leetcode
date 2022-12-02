class Solution {
public:
    bool closeStrings(string w1, string w2) {
        vector<int> v1(26,0),v2(26,0),v3(26,0),v4(26,0);
        for(auto i:w1)
        {
            v1[i-'a']++;
            v3[i-'a']=1;
        }
        for(auto j :w2)
        {
            v2[j-'a']++;
            v4[j-'a']=1;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2&&v3==v4;
    }
};