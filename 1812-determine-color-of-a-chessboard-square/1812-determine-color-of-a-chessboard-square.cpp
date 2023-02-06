class Solution {
public:
    bool squareIsWhite(string c) {
        int a=c[0];
        int b=c[1];
        if((a%2!=0 && b%2!=0)|| (a%2==0 && b%2==0))return false;
        return true;
    }
};