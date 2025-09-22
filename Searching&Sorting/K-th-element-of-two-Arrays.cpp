//Given two sorted arrays a[] and b[] and an element k, the task is to find the element that would be at the kth position of the combined sorted array.

//soln(1) :-without using extra space .Expected approach
int solve(vector<int> &a, vector<int> &b,int n,int m, int k)
   {
       if(n>m)
       {
           return solve(b,a,m,n,k);
        }
        int low = max(0,k-m),high=min(n,k);
        while(low<=high)
        {
            int cut1 = (low+high)>>1;
            int cut2 = k-cut1;
            int l1 = cut1 == 0 ? INT_MIN : a[cut1-1];
            int l2 = cut2 == 0 ? INT_MIN : b[cut2-1];
            int r1 = cut1 == n ? INT_MAX : a[cut1];
            int r2 = cut2 == m ? INT_MAX : b[cut2];
            
            if(l1<=r2 && l2<=r1)
            {
                return max(l1,l2);
            }
            else if(l1>r2)
            {
                high=cut1-1;
                
            }
            else{
                low=cut1+1;
                
            }
        }
        return -1;
        
   }
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int n=a.size();
        int m=b.size();
        return solve(a,b,n,m,k);
        
    }


//soln( 2 ):- Using extra space
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int>temp;
        for(int i=0;i<a.size();i++)
        {
          temp.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            temp.push_back(b[i]);
        }
        sort(temp.begin(),temp.end());
        
        return temp[k-1];
    }
