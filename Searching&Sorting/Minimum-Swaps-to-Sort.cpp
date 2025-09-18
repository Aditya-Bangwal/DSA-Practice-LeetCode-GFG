//Given an array arr[] of distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.

//soln:-
 int minSwaps(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int>temp;
        temp=arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int>mp;
        int swaping=0;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=i;
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=temp[i])
            {
                int ind=mp[temp[i]];
                swap(arr[i],arr[ind]);
                mp[arr[i]]=i;
                mp[arr[ind]]=ind;
                
                swaping++;
            }
        }
        
        return swaping;
    }
