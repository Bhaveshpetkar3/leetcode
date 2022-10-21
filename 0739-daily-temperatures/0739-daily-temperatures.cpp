class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack <int> stk;
        vector <int> ans (temp.size());
        for(int i=temp.size()-1;i>=0;i--)
        {
            while(!stk.empty() && temp[i]>=temp[stk.top()])stk.pop();
            if(stk.empty())
            {
                ans[i]=0;
            }
            else ans[i]=stk.top()-i;
            stk.push(i);
        }
        return ans;
    }
};