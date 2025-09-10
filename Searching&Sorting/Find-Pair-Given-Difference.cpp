//Given an array, arr[] and an integer x, return true if there exists a pair of elements in the array whose absolute difference is x, otherwise, return false.

//soln:-
    bool binary(vector<int> &arr, int x,int start,int end)
    {
        int s=start;
        int e=end;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==x)
            {
                return true;
            }
            else if(arr[mid]>x)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return false;
    }
    bool findPair(vector<int> &arr, int x) {
        // code here
        if(arr.size()==1)
        {
            return false;
        }
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            int target=arr[i]+x;
            bool ans=binary(arr,target,i+1,n-1);
            if(ans==true)
            {
                return true;
            }
           
        }
        return false;
     
    }
