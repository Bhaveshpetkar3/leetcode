class Solution {
public:
    bool isPalindrome(int x) {
        
        int num=x;
        long reverse =0;
        if (x<0)
            return false;
        while(num>0)
        {
            reverse= (reverse*10)+num%10;
            num=num/10;
        }
        return x==reverse;
        
    }
};