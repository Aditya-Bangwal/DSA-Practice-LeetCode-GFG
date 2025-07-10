//to find the row with maximum one in a matrix
  int rowWithMax1s(vector<vector<int>> &arr) {
        
          int m=arr.size();
          int index=-1;
        int n=arr[0].size();
        int row=0,col=n-1;
        while(row<m && col>=0)
        {
            if(arr[row][col]==0)
            {
                row++;
            }
            else{
                index=row;
                col--;
            }
            
        }
        return index;
        
        }
