//to find kth smallest element in a matrix


//using binary search to find the kth element in the matrix
int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
     int m=mat.size();
     int n=mat[0].size();
     int maxi=mat[n-1][n-1];
     int mini=mat[0][0];
     
        
    while(mini<=maxi)
    {
        int mid=mini+(maxi-mini)/2;
        int freq=0;
        for(int i=0;i<m;i++)
        {
             freq+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
             
           
        }
        if(freq<k)
            {
                mini=mid+1;
             
                 
            }
       else{
          maxi=mid-1;
       }
            
       
    }
    return mini;
    }
