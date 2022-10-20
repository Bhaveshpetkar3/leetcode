class Solution {
public:
    string removeOuterParentheses(string s) {
        int len=s.size(),ctr=0;
        string str;
         for(int i=0;i<len;i++)
         {
             if(s[i]=='(')
             {
                 if(ctr>0)
                 {
                     str+='(';
                 }
                 ctr++;
             }
             else
             {
                 if(ctr>=2)
                 {
                     str+=')';
                 }
                 ctr--;
             }
         }
        return str;
    }
};