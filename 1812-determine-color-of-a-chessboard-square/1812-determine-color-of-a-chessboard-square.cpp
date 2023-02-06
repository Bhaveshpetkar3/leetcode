class Solution {
public:
    bool squareIsWhite(string c) {
        if((c[0]%2!=0 && c[1]%2!=0)|| (c[0]%2==0 && c[1]%2==0))return false;
        return true;
    }
};