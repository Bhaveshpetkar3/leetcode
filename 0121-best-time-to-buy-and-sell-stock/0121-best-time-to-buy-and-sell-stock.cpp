class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mino=prices[0];
        int maxo=0,profit=0;
        for(int i=0;i<prices.size();i++)
        {
            mino=min(mino,prices[i]);
            profit=prices[i]-mino;
            maxo=max(maxo,profit);
        }
        return maxo;
       
    }
};