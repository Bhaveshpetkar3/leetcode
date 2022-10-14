class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int plus=0,minus=0,i=0;
        for(auto it=operations.begin();it<operations.end();it++)
        {
            if(*it=="X++" || *it=="++X")plus++;
            else minus++;
            
        }
        return plus-minus;
    }
};