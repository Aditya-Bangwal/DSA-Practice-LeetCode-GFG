// to find the maximum area of a rectangle formed only of 1s in the given matrix


//area histogram function
int areahistogram(vector<int>&arr)
  {
      int n=arr.size();
      stack<int>s;
      int top;
      int maxarea=INT_MIN;
      for(int i=0;i<n;i++)
      {
          while(!s.empty() && arr[s.top()]>=arr[i] )
          {
              top=s.top();
              s.pop();
              
              int width=s.empty() ?i:i-s.top()-1;
              int area=arr[top]*width;
              maxarea=max(maxarea,area);
              
              
              
          }
          s.push(i);
          
      }
      //for remaining elements in a stack who dont have a next smaller element
      while(!s.empty())
      {
          int top=s.top();
          s.pop();
          int width=s.empty()?n:n-s.top()-1;
          int area=arr[top]*width;
          maxarea=max(maxarea,area);
      }
      
      return maxarea;
  }
    int maxArea(vector<vector<int>> &mat) {
       int m=mat.size();
       int n=mat[0].size();
       vector<int>ans(n,0);
       int result=INT_MIN;
      //adding values row by row and checking for the largest areahistogram function for every row
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(mat[i][j]==1)
               {
                   ans[j]++;
               }
               else{
                   ans[j]=0;
               }
               
           }
         //storing maximum result we get
           int area=areahistogram(ans);
           result=max(result , area);
           
       }
       return result;
        
    }
