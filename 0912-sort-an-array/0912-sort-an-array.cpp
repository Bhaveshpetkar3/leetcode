class Solution {
public:
    void merge(vector<int> &arr,int low,int high,int mid)
{
    int n1=mid-low+1;
    int n2=high-mid;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i=0;i<n1;i++)arr1[i]=arr[low+i];
    for(int j=0;j<n2;j++)arr2[j]=arr[mid+1+j];
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])arr[low++]=arr1[i++];
        else arr[low++]=arr2[j++];
    }
    while(i<n1)arr[low++]=arr1[i++];
    while(j<n2)arr[low++]=arr2[j++];
    //  cout<<"The sorted array is : ";
    // for(auto i: arr)cout<<i<<" ";
    arr1.clear();
    arr2.clear();
}
    void mergeort(vector <int> &arr,int low, int high)
{
    if(low>=high)return;
    int mid=(high+low)/2;
    mergeort(arr,low,mid);
    mergeort(arr,mid+1,high);
    merge(arr,low,high,mid);
}
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
         mergeort(nums,0,n-1);
        return nums;
    }
};