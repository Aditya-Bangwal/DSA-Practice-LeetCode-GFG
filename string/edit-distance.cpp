// Given two strings s1 and s2. Return the minimum number of operations required to convert s1 to s2.
//The possible operations are permitted:
//1. Insert a character at any position of the string.
//2. Remove any character from the string.
//3. Replace any character from the string with any other character.


int solve(int i,int j, string& s1, string& s2 ,vector<vector<int>>&dp)
   {
       if(i==s1.length())
       {
           return s2.length()-j; //if one string end return the count of remaining string
       }
       
        if(j==s2.length())
       {
           return s1.length()-i; //if one string end return the count of remaining string
           
       }
       
       if(dp[i][j]!=-1)
       {
           return dp[i][j];
       }
       
       
       if(s1[i]==s2[j])
       {
         return  solve(i+1,j+1,s1,s2,dp); //string at i and j is equal so just compare the next string
       }
       else{
           int a=1+solve(i,j+1,s1,s2,dp); //insert
           int b=1+solve(i+1,j, s1,s2,dp); //delete
           int c=1+solve(i+1,j+1,s1,s2,dp); //replace
           
             return dp[i][j]= min(a,min(b,c)); //returning the minimum of the three options
       }
       
      
   }
    // Function to compute the edit distance between two strings
    int editDistance(string& s1, string& s2) {
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1)); //adding memoization
       
        return solve(0,0,s1,s2,dp);
        
        
    }
