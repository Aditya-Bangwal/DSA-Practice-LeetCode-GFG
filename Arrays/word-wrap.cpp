// Given an array arr[], where arr[i] denotes the number of characters in one word. Let k be the limit on the number of characters that can be put in one line (line width). 
//Put line breaks in the given sequence such that the lines are printed neatly.
//Assume that the length of each word is smaller than the line width. When line breaks are inserted there is a possibility that extra spaces are present in each line. 
//The extra spaces include spaces put at the end of every line except the last one. 
//You have to minimize the following total cost where total cost = Sum of cost of all lines, where cost of line is = (Number of extra spaces in the line)2.

//solution we are gonna use recursion+memoization

int solve(int i,int spaces,vector<int> arr, int k , vector<vector<int>>&dp)
{
  if( i==arr.size() )
  {
    return 0;
  }
  if(dp[i][spaces]!=-1)
  {
    return dp[i][spaces];
  }
  
  int a=INT_MAX;
  int newspaces=spaces+1+arr[i]; //checking if the ith element can fit in same line
  if(newspaces<=k)
  {
    a=solve(i+1,newspaces,arr,k,dp);//can put in same line
  }
  int  b=solve(i+1,arr[i],arr,k,dp) + (k-spaces)*(k-spaces) ;  //cannot put in the same line
  return dp[i][spaces]=min(a,b); //returning the minimum of both option only where we can put in same line or else it is INT_MAX
}

int solveWordWrap(vector<int> arr, int k) {
  int n=arr.size();
  vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
  return solve(1,arr[0],arr,k,dp);
       
        
    }
