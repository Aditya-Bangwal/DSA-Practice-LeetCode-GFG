// to find the minimum and maximum elements in the array.
//Note: Return a Pair that contains two elements the first one will be a minimum element and the second will be a maximum.

//solution:-continously compare each element of the array for maximum and minimum.
pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
            
            if(arr[i]<mini)
            {
                mini=arr[i];
            }
        }
        pair<int ,int>p;
        p=make_pair(mini,maxi);
        return p;
    }
