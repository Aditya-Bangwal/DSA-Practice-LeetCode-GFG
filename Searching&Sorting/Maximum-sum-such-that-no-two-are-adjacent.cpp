//Given an array of positive numbers, find the maximum sum of a subsequence such that no two numbers in the subsequence should be adjacent in the array.

//soln:-(Memoization approach)
 int solve(vector<int>& arr,int n,vector<int>&dp)
       {
           if(n<=0)
           {
               return 0;
           }
           if(n==1)
           {
               return arr[0];
           }
           if(dp[n]!=-1)
           {
               return dp[n];
           }
            int take=arr[n-1]+solve(arr,n-2,dp);
            int nottake=solve(arr,n-1,dp);
            return dp[n]=max(take,nottake);
       }
       
    int findMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>dp(n+1,-1);
       
        return solve(arr,n,dp);
    }


soln2:-(tabulation approach)
         int solve(vector<int>& arr,int n)
       {
           vector<int>dp(n+1,0);
           dp[0]=0;
           dp[1]=arr[0];
           
           for(int i=2;i<=n;i++)
           {
               int take=arr[i-1]+dp[i-2];
            int nottake=dp[i-1];
            dp[i]=max(take,nottake);
               
           }
          
            
            return  dp[n];
       }
       
    int findMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        
       
        return solve(arr,n);
    }
