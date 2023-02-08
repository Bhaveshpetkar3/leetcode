class Solution {
public:
    int jump(vector<int>& n) {
        if(n.size()==1) return 0;
        int ct=1, maxi=0,curr=0,in=0;
        cout<<n.size()-1<<endl;
        if(n[0]>=n.size()-1)return 1;
        int mx_idx=0;
        while(curr<n.size()-1){
           
            if(curr+n[curr]>=n.size()-1) {
              
                return ++ct;
            }
            
            int frd=curr+1;
            //ct++;
            
            while(in<n[curr]){
                int x=frd+n[frd];
                if(x>maxi){
                    maxi=x;
                    mx_idx=frd;
                }
                    if(x>=n.size()-1){
                        ct++;
                     
                          return ct;
                    } 
                    
                    
                    
             
                
                frd++;
                in++;
                  
            }
            ct++;
            curr=mx_idx;
             in=0;
            maxi=0;
        
        }
        return ct;
    }
};