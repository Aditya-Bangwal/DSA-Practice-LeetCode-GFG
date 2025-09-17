//Given an array of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements. 

//soln:-
   int setcount(int a)
   {
       int count=0;
       while(a)
       {
           if(a%2 != 0)
           {
               count+=1;
           }
           a=a/2;
           
       }
       return count;
       
   }
    void solve(int arr[],int n)
    {
        vector<vector<int>>help(32);
        
        for(int i=0;i<n;i++)
        {
            int count=setcount(arr[i]);
            help[count].push_back(arr[i]);
        }
        
        int j=0;
        
        for(int i=31;i>=0;i--)
        {
            
            for(int k=0;k<help[i].size();k++)
            {
                arr[j++]=help[i][k];
            }
            
        }
        
    }
    void sortBySetBitCount(int arr[], int n) {
        // Your code goes here
        
        solve(arr,n);
        
    }
