//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int partition(vector <int> &arr,int start,int end)
{
    int pivot=arr[start];
    int pivotidx,cnt=0;
    for(int i=start+1;i<=end;i++)
        if(arr[i]<=pivot)
            cnt++;
    pivotidx=start+cnt;
    swap(arr[pivotidx],arr[start]);
    int i=start,j=end;
    while(i<pivotidx && j>pivotidx)
    {
        while(arr[i]<=pivot && i<pivotidx)
            i++;
        while(arr[j]>pivot && j>pivotidx)
            j--;
        if(i<pivotidx && j>pivotidx)swap(arr[i++],arr[j--]);
    }
    return pivotidx;
}
    void quicksort(vector <int> &arr,int start,int end)
{
    if(start>=end)return;
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}
    vector<int> sortArr(vector<int>arr, int n){
    quicksort(arr,0,n-1);
    return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends