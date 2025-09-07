//Given three distinct numbers a, b and c. Find the number with a value in the middle (Try to do it with minimum comparisons).
//soln (1):-
 void findmaxi(int a,int b,int c,int& maxi)
    {
        if(a>b)
        {
            if(a>c)
            {
                maxi=a;
            }
            else{
                maxi=c;
            }
        }
        else{
            if(b>c)
            {
                maxi=b;
            }
            else{
                maxi=c;
            }
        }
    }
    void findmini(int a,int b,int c,int& mini)
    {
        if(a<b)
        {
            if(a<c)
            {
                mini=a;
            }
            else{
                mini=c;
            }
        }
        else{
            if(b<c)
            {
                mini=b;
            }
            else{
                mini=c;
            }
        }
    }
  public:
    int middle(int a, int b, int c) {
        // code here
     int mini=INT_MAX;
     int maxi=INT_MIN;
     findmini(a,b,c,mini);
     findmaxi(a,b,c,maxi);
     int sum=(a+b+c)-(maxi+mini);
     return sum;
     
      
        
    }
//////////////////////////////////////////////////////////////////

//soln (2):-
   int middle(int a, int b, int c) {
        // code here
      if(a<b)
      {
          if(a>c)
          {
              return a;
          }
          else if(b<c)
          {
              return b;
          }
          else{
              return c;
          }
      }
      else{
          if(b>c)
          {
              return b;
          }
          else if(a<c)
          {
              return a;
          }
          else
          {
              return c;
          }
      }
      
        
    }
