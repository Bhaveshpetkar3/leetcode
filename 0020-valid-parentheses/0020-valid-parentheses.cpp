class Solution {
public:
    bool isValid(string s) 
    {
        if(s.length()%2)return false;
        stack <char> stack;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')stack.push(s[i]);
            else
            {
            if(stack.empty() || (s[i]==')' && stack.top()!='(') || (s[i]=='}' && stack.top()!='{') || (s[i]==']' && stack.top()!='['))return false;
            stack.pop();
            }
        }
        if(stack.empty())return true;
        else return false;
    }
    
};