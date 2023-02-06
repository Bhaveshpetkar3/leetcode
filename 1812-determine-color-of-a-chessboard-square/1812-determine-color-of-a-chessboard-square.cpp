class Solution {
public:
    bool squareIsWhite(string c) {
        if((c[0]+c[1])%2)return true;
        return false;
    }
};