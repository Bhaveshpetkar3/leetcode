class Solution {
public:
int balancedStringSplit(string s) {

    int maxCount =0;
    int i=0;
    int cntL =0;
    int cntR =0;
    
    while(i<s.length( )){
       if(s[i]=='L')
           cntL++;
        
        else if(s[i]=='R')
            cntR++;
        
        if(cntL==cntR){
            maxCount++;
            cntL = 0;
            cntR = 0;
        }
        
        i++;
    }
    
    return maxCount;
    
}
};