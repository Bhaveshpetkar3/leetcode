class Solution {
public:
    int maxDepth(string s) {
        int len=s.size(),ctr=0;
        int maxi=0;
        
         for(int i=0;i<len;i++)
         {
             if(s[i]=='(')ctr++;
             else if(s[i]==')')ctr--;
             maxi=max(ctr,maxi);
         }
     return maxi;
    }
};