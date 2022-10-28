class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=1,profit=0;
        int last=prices[0];
        while(i<=prices.size()-1)
        {
            profit+=max(0,prices[i]-last);
            last=prices[i++];
        }
        return profit;
    }
};