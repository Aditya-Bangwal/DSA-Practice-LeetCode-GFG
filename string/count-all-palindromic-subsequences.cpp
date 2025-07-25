//Given a string s, you have to find the number of palindromic subsequences (need not necessarily be distinct) present in the string s. 

//soln:-
  int solve(string &s,int i,int j,vector<vector<int>>&dp)
    {
        if(i>j)return 0;
        
        if(i==j)return 1;
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        if(s[i]==s[j])
        {
             return dp[i][j]=solve(s,i+1,j,dp)+solve(s,i,j-1,dp)+1;
            
        }
        else{
             return dp[i][j]=solve(s,i+1,j,dp)+solve(s,i,j-1,dp)-solve(s,i+1,j-1,dp);
           
        }
    }
    int countPS(string &s) {
        
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int i=0;
        int j=n-1;
       return solve(s,i,j,dp);
    }
