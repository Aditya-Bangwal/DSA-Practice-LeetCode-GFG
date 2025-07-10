//to sort the whole matrix 
vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        vector<int>ans;
        // code here
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                ans.push_back(mat[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int index=0;
        for(int i=0;i<N;i++)
        {
            
            for(int j=0;j<N;j++)
            {
              mat[i][j]=ans[index++];
            }
        }
        return mat;
    }
