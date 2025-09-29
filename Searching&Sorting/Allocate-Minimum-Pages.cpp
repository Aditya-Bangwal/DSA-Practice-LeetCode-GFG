//https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

//soln:-
  int ispossible(vector<int> &arr, int k,int mid)
  {
      int count=1;
      long long last=0;
      for(int i=0;i<arr.size();i++)
      {
          if(last+arr[i]>mid)
          {
              count++;
              last=arr[i];
          }
          else{
              last+=arr[i];
          }
          
      }
      return count;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size())
        {
            return -1;
        }
        int n=arr.size();
        
        int low=*max_element(arr.begin(),arr.end());
        int high=0;
        for(int i=0;i<arr.size();i++)
        {
            high+=arr[i];
        }
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            int student=ispossible(arr,k,mid);
            if(student>k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            
        }
        
        return low;
        
    }
