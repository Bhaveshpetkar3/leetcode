class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         vector<int>:: iterator i;
        for(i=nums.begin();i!=nums.end();i++){
           
            if(val==(*i)){
                nums.erase(i);
                
              i--;
            
                
            }
        }
    return nums.size() ;
        
    }
};