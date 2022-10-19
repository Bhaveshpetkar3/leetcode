class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length=INT_MAX;
        int common;
        for(int i=0;i<strs.size();i++)
        {
            common=0;
            while(common<strs[i].length() && strs[0][common]==strs[i][common])common++;
            length=min(length,common);
        }
        return strs[0].substr(0,length);
    }
};