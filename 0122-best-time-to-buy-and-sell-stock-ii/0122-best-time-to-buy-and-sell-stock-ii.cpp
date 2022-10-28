class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,profit=0;
        int mini=INT_MAX;
        while(i<prices.size()-1)
        {
            mini=min(mini,prices[i]);
            if(prices[i+1]>mini)
            {
                profit+=(prices[i+1]-mini);
                mini=prices[i+1];//i++;
            }
            i++;
        }
        return profit;
    }
};