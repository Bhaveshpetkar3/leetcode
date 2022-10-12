class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int len=digits.size();
        int x,flag=0;
        if(digits[len-1]!=9)
        {
            x=digits[len-1];
            digits.pop_back();
            digits.push_back(x+1);
            return digits;
        }
        int i=len-1;
        while(i>=0 && digits[i]==9)
        {
            digits.pop_back();
            if(digits.empty())
            {
                digits.push_back(1);
                flag=1;
                break;
            }
            i--;
        }
        if(flag)
        {
        while(i!=len)
        {
            digits.push_back(0);
            i++;
        }
        return digits;
        }
        x=digits[i]+1;
        digits.pop_back();
        digits.push_back(x);
        while(i!=(len-1))
        {
            digits.push_back(0);
            i++;
        }
    
        return digits;
    }
};