class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int r;
        for(int i=0;i<=num;i++)
        {
            r=0;
            int s=i;
            while(s)
            {
                r*=10;
                r+=s%10;
                s/=10;
                
            }
            if(r+i==num)return true;
        }return false;
    }
};