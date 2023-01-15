class Solution {
public:

    void merge(vector <pair<int,int>> &arr1,int low,int high,int mid,vector<int> &ans)
{
    vector <pair<int,int>> temp(high-low+1);
    int i=low,j=mid+1,k=0;
    while(i<=mid && j<=high)
    {
        if(arr1[i].first<=arr1[j].first)
        {
            //ans[arr1[i].second]+=high-j+1;
            temp[k++]=arr1[j++];
        }
        else
        {
            ans[arr1[i].second]+=(high-j+1);
            temp[k++]=arr1[i++];
        }
    }
    while(i<=mid)temp[k++]=arr1[i++];
    while(j<=high)temp[k++]=arr1[j++];
    for(int i=low;i<=high;i++)arr1[i]=temp[i-low];
}
void mergesort(int low, int high,vector <pair<int,int>> &arr1,vector<int> &ans)
{
    if(low>=high)return;
    int mid=low+(high-low)/2;
    mergesort(low,mid,arr1,ans);
    mergesort(mid+1,high,arr1,ans);
    merge(arr1,low,high,mid,ans);
}
    
	vector<int> countSmaller(vector<int>& nums) 
    {
	    vector<int> arr=nums;
        int n=arr.size();
        vector <pair<int,int>> arr1;
        for(int i=0;i<n;i++)
        {
        arr1.push_back({arr[i],i});
        }
        vector<int> ans(n,0);
        mergesort(0,n-1,arr1,ans);
        return ans;
    }
  
};