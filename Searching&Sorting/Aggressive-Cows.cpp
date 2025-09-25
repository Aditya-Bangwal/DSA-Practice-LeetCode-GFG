//You are given an array with unique elements of stalls[], which denote the positions of stalls. You are also given an integer k which denotes the number of aggressive cows. The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

//soln:-
    bool ispossible(int mid,int k,vector<int> &stalls)
    {
        int last=stalls[0];
        int count=1;
        for(int i=1;i<stalls.size();i++)
        {
            if(stalls[i]-last>=mid)
            {
                count++;
                last=stalls[i];
            }
            if(count>=k)return true;
        }
        return false;
        
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int low=1;
        int n=stalls.size();
        int high=stalls[n-1]-stalls[0];
        int ans;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(ispossible(mid,k,stalls)==true)
            {
               
                low=mid+1;
                
            }
            else{
                high=mid-1;
           
           }
        }
        return high;
        
    }
