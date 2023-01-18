//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int start, int end)
    {
        if(start>=end)return;
    int p=partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
    }
    
    public:
    int partition (int arr[], int start, int end)
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
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends