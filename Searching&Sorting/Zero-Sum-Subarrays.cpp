//You are given an array arr[] of integers. Find the total count of subarrays with their sum equal to 0.

//soln:-
 int findSubarray(vector<int> &arr) {
        unordered_map<int,int>help;
        int presum=0;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            presum+=arr[i];
            if(presum==0)ans++;
            
            if(help.find(presum)!=help.end())
            {
                ans+=help[presum];
            }
            
            help[presum]++;
        }
     return ans;  
    }
