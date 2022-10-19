class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=INT_MIN;
        int ctr=0;
        for(int i=0;i<sentences.size();i++)
        {
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')ctr++;
            }
            if(ctr>max)max=ctr;
            ctr=0;
        }
        return max+1;
    }
};