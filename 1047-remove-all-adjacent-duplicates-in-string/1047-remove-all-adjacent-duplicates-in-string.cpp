                                                                                                                class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack <char> stk;
        string ans;
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
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};