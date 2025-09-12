//Given an array arr[] of integers and another integer target. You have to find all unique quadruples from the given array whose sum is equal to the given target.

//soln1:- (Naive approach)

    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int index=0;
        set<vector<int>>st;
        
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    for(int l=k+1;l<n;l++)
                    {
                        if((arr[i]+arr[j]+arr[k]+arr[l])==target)
                        {
                            vector<int>dummy(4);
                            dummy[0]=arr[i];
                            dummy[1]=arr[j];
                            dummy[2]=arr[k];
                            dummy[3]=arr[l];
                            st.insert(dummy);
                        }
                        
                    }
                    
                }
            }
        }
        for(auto it:st)
        {
            ans.push_back(it);
        }
        return ans;
        
    }

//soln 2:-(using two pointer)

    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int index=0;
        set<vector<int>>st;
        
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && arr[i]==arr[i-1])continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && arr[j]==arr[j-1])continue;
                    
                int k=j+1,l=n-1;
                while(k<l)
                {
                    int sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target)
                    {
                        ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                        k++;
                        l--;
                        while(k<l && arr[k]==arr[k-1])k++;
                    while(k<l && arr[l]==arr[l+1])l--; 
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else{
                        l--;
                    }
                    
                }
            }
        }
        
        return ans;
        
    }
