class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> ans(n);
        //ans[0]="0";
        int i=1;
        for(int j=0;j<n;j++)
        {
            if(i%3==0)
            {
                if(i%5==0)ans[j]="FizzBuzz";
                else ans[j]="Fizz";
            }
            else if(i%5==0)ans[j]="Buzz";
            else ans[j]=to_string(i);
            i++;
        }
        return ans;
    }
};