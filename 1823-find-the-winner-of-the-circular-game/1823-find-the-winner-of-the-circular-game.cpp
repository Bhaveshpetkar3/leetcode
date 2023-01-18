class Solution {
public:
    int solve(vector<int> arr,int k,int s)
    {
        if(arr.size()==1)return arr[0];
        int idx=(s+k-1)%arr.size();
        arr.erase(arr.begin()+idx);
        return solve(arr,k,idx);
    }
    int findTheWinner(int n, int k) {
        vector<int> arr(n);
        for(int i=0;i<n;i++)arr[i]=i+1;
        return solve(arr,k,0);
    }
};