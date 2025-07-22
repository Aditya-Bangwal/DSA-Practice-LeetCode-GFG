//Given an array arr, rotate the array by one position in clockwise direction.

//soln:- 
    void rotate(vector<int> &arr) {
        // code here
        vector<int>temp(arr.size());
        int i=0;
        int n=arr.size();
        int item=arr[0];
        int item2;    
        while(i<n-1)
        {
            item2=arr[i+1];
             arr[i+1]=item;
            item=item2;
            i++;
        }
        
        arr[0]=item;
        
    }
