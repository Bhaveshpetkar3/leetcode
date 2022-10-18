class Solution {
public:
    bool isValid(string s) 
    {
        if(s.length()%2)return false;
        stack <char> stack;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{')stack.push('{');
            if(s[i]=='(')stack.push('(');
            if(s[i]=='[')stack.push('[');
            if(s[i]=='}')
            {
                if(stack.empty() || stack.top()!='{'  )return false;
                 stack.pop();
            }
            if(s[i]==')')
            {
                if(stack.empty() || stack.top()!='(')return false;
                 stack.pop();
            }
            if(s[i]==']')
            {
                if(stack.empty() || stack.top()!='[')return false;
                 stack.pop();
            }
        }
        if(stack.empty())return true;
        else return false;
    }
    
};