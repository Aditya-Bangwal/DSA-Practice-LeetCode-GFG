//Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

//soln:-
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int repeating =-1;
        
        for(int i=0;i<arr.size();i++)
        {
            int value=abs(arr[i]);
            if(arr[value-1]>0)
            {
              arr[value-1]=-arr[value-1];
            }
            else{
                repeating =value;
            }
        }
        
        int missing=-1;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0)
            {
                missing=i+1;
                break;
            }
        }
        
        return {repeating,missing};
        
        
    }
