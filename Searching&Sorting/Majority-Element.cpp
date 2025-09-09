//Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1.

//soln:-
    int majorityElement(vector<int>& arr) {
        // code here
        int count=0;
        int match=-1;
        for(auto nums:arr)
        {
            if(count==0)
            {
                match=nums;
                count=1;
            }
            else if(nums==match)
            {
                count++;
            }
            else{
                count--;
            }
        }
        
        count=0;
        
        for(auto nums:arr)
        {
            if(match==nums)
            {
                count++;
                
            }
        }
        
        if(count>(arr.size())/2)
        {
            return match;
        }
        else{
            return -1;
        }
    }
