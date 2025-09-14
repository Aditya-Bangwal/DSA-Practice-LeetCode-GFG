//Given an array arr[] of distinct integers of size n and a value sum, the task is to find the count of triplets (i, j, k), having (i<j<k) with the sum of (arr[i] + arr[j] + arr[k]) smaller than the given value sum.

//soln:-
  long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        long long ans=0;
        vector<long long>nums;
        for(long long i=0;i<n;i++)
        {
            nums.push_back(arr[i]);
            
        }
        
        
        sort(nums.begin(),nums.end());
       
        for(long long i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                long long add=nums[i]+nums[j]+nums[k];
                if(add<sum)
                {
                    ans+=k-j;
                    j++;
                    
                }
                else{
                    k--;
                    
                }
            }
           
        }
        return ans;
    }
