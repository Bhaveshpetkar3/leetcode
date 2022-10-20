class Solution {
public:
    int maxDepth(string s) {
        int len=s.size(),ctr=0;
        int maxi=0;
        
         for(int i=0;i<len;i++)
         {
             if(s[i]=='(')
             {
                 
                    ctr++;
                     
                     maxi=max(ctr,maxi);
                 
                 
             }
             else if(s[i]==')')
             {
                 
                 ctr--;
             }
             cout<<maxi<<" ";
         }
        //if(ans==0)return 1;
        return maxi;
    }
};