//to find the maximum value of mat(c, d)- mat(a, b) over all choices of indexes such that both c > a and d > b.
    int findMaxValue(vector<vector<int>>& mat, int N) {
        // Write your code here
        int n=mat.size();
      
     //creating a new matrix and initilising the last n-1 element with n-1th element of the original matrix    
      vector<vector<int>>maxmat(n,vector<int>(n));
        maxmat[n-1][n-1]=mat[n-1][n-1];
      //initialising last row with largest element in last row
        for(int j=n-2;j>=0;j--)
        {
            maxmat[n-1][j]=max(maxmat[n-1][j+1],mat[n-1][j]);
        }
       //initialising last col with largest element in last col by countinously comparing
        for(int i=n-2;i>=0;i--)
        {
            maxmat[i][n-1]=max(maxmat[i+1][n-1],mat[i][n-1]);
        }

      //now starting for n-2 row and column filling the reference matrix as per mat[c][d]-mat[a][b] where c>a and d>b
        for(int i=n-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                maxmat[i][j]=max(maxmat[i+1][j],max(maxmat[i][j+1],mat[i][j]));
            }
        }
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                maxi=max((maxmat[i+1][j+1]-mat[i][j]),maxi);
            }
        }
        return maxi;
    }
