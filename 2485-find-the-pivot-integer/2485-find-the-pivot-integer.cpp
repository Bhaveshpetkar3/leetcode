class Solution {
public:
    int pivotInteger(int n) {
        int ans = (n * n + n ) /2;
        int sq = sqrt(ans);
        if(sq * sq == ans)return sq;
        else return -1;
    }
};
//https://leetcode.com/problems/find-the-pivot-integer/discuss/2851954/Simple-Maths-proof-with-picture