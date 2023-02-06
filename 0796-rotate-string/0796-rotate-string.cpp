class Solution {
public:
    bool rotateString(string s, string g) {
        if(s==g)return true;
        if(s.size()!=g.size())return false;
        queue <int> a,b;
        for(int i=0;i<s.size();i++)a.push(s[i]),b.push(g[i]);
        for(int i=0;i<s.size();i++)
        {
            a.push(a.front());
            a.pop();
            if(a==b)return true;
        }
        return false;
    }
};