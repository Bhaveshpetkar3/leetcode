class Solution {
public:
    string thousandSeparator(int n) {
          stringstream ss; 
        ss<<n;
        string s;
        ss>>s;
        if(s.length()<=3)return s;
        int noofdots;
        string ans="";
        int dotsdone=0;
        string dot=".";
        if(s.length()%3)noofdots=s.length()/3;
        
        else noofdots=(s.length()/3)-1;
        int firstdot;
        if(s.length()%3)firstdot=s.length()%3;
        else firstdot=3;
        int ctr=0;
        for(int i=0;i<s.length();i++)
        {
            if(i==firstdot)
            {
               
                    ans+='.';
                ctr=0;
             }
             if(ctr==3)
             {
                 ans.append(dot);
                 ans+=s[i];
                 ctr=0;
             }
            else
            ans+=s[i];
            ctr++;
        }
        return ans;
        
    }
    
};