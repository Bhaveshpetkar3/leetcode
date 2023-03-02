class Solution {
public:
    int compress(vector<char>& chars) {
        int y=0,i=0,p=0;
        char a;
        while(i<chars.size())
        {
            a=chars[i];
            p=0;
            while(i<chars.size() && chars[i]==a)
            {
                p++;
                i++;
            }
            if(p==1)chars[y++]=a;
            else
            {
                chars[y++]=a;
                string i=to_string(p);
                for(auto g:i)chars[y++]=g;
            }
        }
        return y;
        
    }
};