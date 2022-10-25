class Solution {
public:
    
    int binarySearch(vector <int> arr, int l, int r, int x,int u)
{
        //cout<<u;
    if(u==1)
    {
       
        int j=-1;
    while (r >= l) 
   {
        int mid = (l+r)/ 2;
        //cout<<"Hiiiii";
         if(arr[mid]==x)   
        {
            j=mid;
            r=mid-1;
        }
        else if (arr[mid] > x)
            r=mid-1;
        else l=mid+1;
    }
        return j;
    }
        
       else if(u==0)
    {
        int k=-1;
    while (r >= l)
     {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            
        {
            k=mid;
            l=mid+1;
        }
        else if (arr[mid] > x)
            r=mid-1;
        else l=mid+1;
    }
        return k;
    }
        return -1;
}
vector<int> searchRange(vector<int>& nums, int target) 
{
        vector <int> ans;
        int ans1=binarySearch(nums,0,nums.size()-1,target,1) ;
        int ans2=binarySearch(nums,0,nums.size()-1,target,0) ;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }

};