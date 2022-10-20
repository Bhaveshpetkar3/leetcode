class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mino=INT_MAX;
        int maxo=0;
        for(auto i:prices)
        {
            mino=min(mino,i);
            maxo=max(maxo,i-mino);
        }
        return maxo;
       }
};