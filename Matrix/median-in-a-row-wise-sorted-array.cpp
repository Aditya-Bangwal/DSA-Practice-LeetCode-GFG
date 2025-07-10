//TO find median in a row wise sorted array
   int median(vector<vector<int>> &mat) 
    
    {
        int m=mat.size();
        int n=mat[0].size();
        int ans;
        int mini=INT_MAX;
        int maxi=INT_MIN;
      //to find maximum and minimum element
        for(int i=0;i<m;i++)
        {
            if(mat[i][0]<mini)
            {
                mini=mat[i][0];
            }
             if(mat[i][n-1]>maxi)
            {
                maxi=mat[i][n-1];
            }
            // mini=min(mini,mat[i][0]);
            // maxi=max(maxi,mat[i][n-1]);
            
        }
        //binary search to find median
        while(mini<=maxi)
        {
            int mid=mini+(maxi-mini)/2;
            int freq=0;
            for(int i=0;i<m;i++){
                freq+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
                
            }
            
            //condition to find the median
            if(freq >= (m*n+1)/2)
            {
                ans=mid;
                maxi=mid-1;
            }
            else
            {
                mini=mid+1;
            }
        }
        return ans;
        
    }
