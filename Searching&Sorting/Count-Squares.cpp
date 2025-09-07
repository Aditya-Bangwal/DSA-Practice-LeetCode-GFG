//Given a positive integer n, find the number of perfect squares that are less than n in the sample space of perfect squares

//soln:- int countSquares(int n) {
        int root=sqrt(n);
        int ans=0;
        for(int i=1;i<=root;i++)
        {
            if((i*i)<n)
            {
                ans++;
            }
            
        }
        
        return ans;
        // code here
        
    }
