class Solution {
public:
    int compress(vector<char>& chars) {
        int y=0;
        int i=0;
        int p=0;
        char a=chars[0];
        while(i<chars.size())
        {
            a=chars[i];
            p=0;
            while(i<chars.size() && chars[i]==a)
            {
                p++;
                i++;
            }
            cout<<p;
            if(p==1)chars[y++]=a;
            else
            {
                chars[y++]=a;
                string i=to_string(p);
                for(auto g:i)
                {
                    chars[y++]=g;
                }
                // chars[y]=to_string(p);
                // y++;
            }
            
        }
        return y;
        
    }
};