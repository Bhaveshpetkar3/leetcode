class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size(),k,j,m,l;
        for(int i=0;i<n;i++)
        {
            k=0,j=n-1;
            while(k<=j)
            {
                l=image[i][j],m=image[i][k];
                image[i][k]=!m,image[i][j]=!l;
                swap(image[i][j--],image[i][k++]);
            }
        }
        return image;
    }
};