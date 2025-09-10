//Given a step array arr[], its step value k, and a key x, we need to find the index of key x in the array arr[]. If multiple occurrences of key x exist, return the first occurrence of the key. In case of no occurrence of key x exists return -1.

//soln:-
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        // code here
        int ansindex=-1;
        
        int i=0;
        while(i<arr.size())
        {
             if(arr[i]==x)
            {
                ansindex=i;
                break;
            }
            
            i=i+max(1,abs(arr[i]-x)/k);
        }
        return ansindex;
    }
