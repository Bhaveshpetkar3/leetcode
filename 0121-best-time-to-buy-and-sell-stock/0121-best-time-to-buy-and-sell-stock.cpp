class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,ans=0;
        for(auto i: prices)
        {
            mini=min(mini,i);
            ans=max(ans,i-mini);
        }
        return ans;
    }
};