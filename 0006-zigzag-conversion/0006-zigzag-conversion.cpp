class Solution {
public:
    string convert(string s, int n) {
        int i=0;
        if(n==1)return s;
        string ans="";
        while(i<n && ans.size()!=s.size())
        {
            int j=i;
            int distance=n+(n-2);
            int firstdiff=distance-2*i;
            int secondiff=2*i;
            ans+=s[i];
            while(j<s.size())
            {
                if(j+firstdiff>=s.size())break;
                if(i!=n-1)ans+=s[j+firstdiff];
                j=j+firstdiff;
                if(j+secondiff>=s.size())break;
                if(i!=0)ans+=s[j+secondiff];
                j=j+secondiff;
            }
            i++;
        }
        return ans;
    }
};