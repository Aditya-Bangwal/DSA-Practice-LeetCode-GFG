//Given a sorted array arr with possibly some duplicates, the task is to find the first and last occurrences of an element x in the given array.

//soln(2):-O(logn)
   int binary(vector<int>& arr, int x,bool flag)
   {
       int i=-1;
       int l=0;
       int r=arr.size()-1;
       while(l<=r)
       {
           int mid=l+(r-l)/2;
           if(arr[mid]<x)
           {
               l=mid+1;
               
           }
           else if(arr[mid]>x)
           {
               r=mid-1;
           }
           else{
               i=mid;
               
               if(flag)
               {
                   r=mid-1;
                   
               }
               else{
                   l=mid+1;
               }
           }
       }
       return i;
   }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int left=binary(arr,x,true);
        int right=binary(arr,x,false);
        vector<int>ans(2);
        ans[0]=left;
        ans[1]=right;
        return ans;
        
    }



// soln(1) :-O(n)
     vector<int> find(vector<int>& arr, int x) {
        // code here
        int first=-1;
        int last=-1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]!=x && arr[i+1]==x)
            {
                first=i+1;
            }
            else if(arr[i]==x && arr[i+1]!=x)
            {
                last=i;
            }
            
        }
        int n=arr.size();
         if(arr[0]==x)
        {
            first=0;
        }
        if(arr[n-1]==x)
        {
            last=n-1;
        }
        vector<int>ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
