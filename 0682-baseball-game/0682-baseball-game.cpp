class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0,i,j,we;
        //cout<<operations.size();
        stack <int> stk;
        for(int m=0;m<operations.size();m++)
        {
            
            
                if(operations[m][0]=='+')
                {
                    i=stk.top();
                    stk.pop();
                    j=stk.top();
                    stk.push(i);
                    stk.push(i+j);
                }
                else if(operations[m][0]=='D')
                {   
                   stk.push(stk.top()*2);   
                }
                else if(operations[m][0]=='C')stk.pop();
                else
                {
                    
                       stk.push(stoi(operations[m]));
                }
                    
            
        }
        
        
        while(!stk.empty())
        {
            ans += stk.top();
            stk.pop();
            
        }
        
        return ans;
    }
};