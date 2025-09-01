//A cafe has N computers. Several customers come to the cafe to use these computers. 
//A customer will be serviced only if there is any unoccupied computer at the moment the customer visits the cafe. 
//If there is no unoccupied computer, the customer leaves the cafe. 
//You are given an integer N representing the number of computers in the cafe and a sequence of uppercase letters S. 
//Every letter in S occurs exactly two times. The first occurrence denotes the arrival of a customer and the second occurrence denotes the departure of the same customer if he gets allocated the computer. 
//You have to find the number of customers that walked away without using a computer.

//soln:-int solve(int n, string s) {
        // code here
  vector<int>seen(26,0);
  int res=0;
  int occupied=0;
  for(int i=0;i<s.size();i++)
  {
      int ind=s[i]-'A';
      if(seen[ind]==0)
      {
          seen[ind]=1;
          if(occupied<n)
          {
              seen[ind]=2;
              occupied++;
          }
          else{
              res++;
          }
      }
      else{
          if(seen[ind]==2)
          {
              occupied--;
              
          }
          
          seen[ind]=0;
      }
  }
  return res;
    }
