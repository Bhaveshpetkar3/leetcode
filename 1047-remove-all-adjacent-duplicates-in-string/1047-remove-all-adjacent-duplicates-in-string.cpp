                                                                                                                class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        //cout<<n;
        stack <char> stk;
        string ans="";
        stk.push(s[0]);
        for(int i=1;i<n;i++)
        {
            if(!stk.empty() && s[i]==stk.top())
            {
                stk.pop();
                continue;
            }
            stk.push(s[i]);
        }
        //cout<<stk.size();
        //if(stk.empty())return ans;
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};