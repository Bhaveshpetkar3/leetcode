class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        map<char,int> mp;
        int ans=INT_MIN;
        while(j<n)
        {
            if(!mp[s[j]])
            {
                ans=max(ans,j-i+1);
                
            }
            else
            {
                //int b=0;
                while(i<n and s[i]!=s[j])
                {
                    mp.erase(s[i]);
                    i++;
                }
                if(mp.size())mp.erase(s[i]);
                i++;
            }
            mp[s[j]]++;
            j++;
        }
        return ans==INT_MIN?0:ans;
    }
};