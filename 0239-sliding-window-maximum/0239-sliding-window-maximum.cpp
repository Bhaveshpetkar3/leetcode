class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        int i=0,j=0;
        for(int j=0;j<n;j++)
        {
            pq.push({arr[j],j});
            if(j-i+1==k)
            {
                // ans.push_back(pq.top().first);
                // vector<pair<int,int>> temp;
                // while(!pq.empty() and pq.top().second!=i)
                // {
                //     temp.push_back(pq.top());
                //     pq.pop();
                // }
                // pq.pop();
                // int l=0;
                // while(l<temp.size())
                // {
                //     pq.push(temp[l++]);
                // }
                while(pq.top().second<i)pq.pop();
                ans.push_back(pq.top().first);
                i++;
            }   
        }
        return ans;
    }
};