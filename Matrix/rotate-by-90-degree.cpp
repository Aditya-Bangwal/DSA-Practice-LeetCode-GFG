//to rotate it by 90 degrees in clockwise direction without using any extra space.

//90 degree rotation is equals to transverse of matrix and then reverse each row 
//transverse is to swap row with column and column with row
void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int m=mat.size();
    int n=mat[0].size();
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           swap(mat[i][j],mat[j][i]);
           
       }
   }
   for(int i=0;i<m;i++)
   {
       reverse(mat[i].begin(),mat[i].end());
   }
}
