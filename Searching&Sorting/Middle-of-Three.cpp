//Given three distinct numbers a, b and c. Find the number with a value in the middle (Try to do it with minimum comparisons).

//slon:-
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
