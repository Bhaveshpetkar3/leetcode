class Solution {
public:
    string removeOuterParentheses(string s) {
        int len=0,ctr=0;
        string str;
         for(int i=0;i<s.size();i++)
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