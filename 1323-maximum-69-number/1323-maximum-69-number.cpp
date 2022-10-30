class Solution {
public:
    int maximum69Number (int num) {
        int x=num;
        bool flag=false;
        int pos=-1;
        int pos1;
        while(x)
        {
            pos++;
            if(x%10==6)
            {
                pos1=pos;
                flag=true;
            }
            x/=10;
        }
        if(flag)return (num+(3*pow(10,pos1)));
        return num;
    }
};