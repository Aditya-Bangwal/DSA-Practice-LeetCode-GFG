//Given an array, arr[] construct a product array, res[] where each element in res[i] is the product of all elements in arr[] except arr[i]. Return this resultant array, res[].
Note: Each element is res[] lies inside the 32-bit integer range.

//soln:-
    vector<int> productExceptSelf(vector<int>& arr) {
        
      int product=1;
      int countz=0;
      int n=arr.size();
      for(int i=0;i<arr.size();i++)
      {
          if(arr[i]==0)
          {
              countz++;
          }
      }
      //more than one zero
      if(countz>1)
      {
          vector<int>ans(n,0);
          return ans;
      }
      
      //product of all non zero elements
      for(int i=0;i<arr.size();i++)
      {
          if(arr[i]!=0)
          product=product*arr[i];
      }
    //if there is exactly one zero
    if(countz==1)
    {
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                ans[i]=product;
                return ans;
            }
        }
    }
    
    //if there are no zeroes
      vector<int>ans(n,1);
      for(int i=0;i<n;i++)
      {
          ans[i]=product;
      }
      for(int i=0;i<n;i++)
      {
          ans[i]=ans[i]/arr[i];
      }
      
      return ans;
        
    }
