//Given an integer n, find the smallest positive integer x such that the factorial of x (i.e.,  x! ) contains at least n trailing zeroes.

//soln:-
   bool check(int p,int n)
   {
       int count=0;
       int factor=5;
       
       
       while(factor<=p)
       {
           count+=p/factor;
           factor=factor*5;
           
       }
       
       return (count>=n);
      
   }
    int findNum(int n) {
        // code here
        int low=0;
        int high=5*n;
        while(low<high)
        {
            int mid=(high+low)/2;
            
            if(check(mid,n))
            {
                high=mid;
            }
            else
            {
                low=mid+1;
                
            }
            
        }
        return low;
    }
