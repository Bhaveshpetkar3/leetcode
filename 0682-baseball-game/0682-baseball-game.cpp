class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0,i,j,we;
        //cout<<operations.size();
        stack <int> stk;
        for(int m=0;m<operations.size();m++)
        {
            char x= operations[m][0];
           
            switch(x)
            {
                case '+':
                    i=stk.top();
                    //cout<<i<<" ";
                    stk.pop();
                    j=stk.top();
                    //cout<<j<<" ";
                    stk.push(i);
                    stk.push(i+j);
                    break;
                case 'D':
                    i=stk.top();
                    //cout<<i<<" ";
                    stk.push(2*i);   
                    break;
                case 'C':
                    stk.pop();
                    break;
                default:
                    stk.push(stoi(operations[m]));
            }
        }
        
        
        while(!stk.empty())
        {
            we=stk.top();
            //cout<<we<<" ";
            ans+=we;
            stk.pop();
            
        }
        
        return ans;
    }
};