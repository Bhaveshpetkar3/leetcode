class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int y=k;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<=y)
        {
            y+=1;
        }
    }
     return y;   
    }
};