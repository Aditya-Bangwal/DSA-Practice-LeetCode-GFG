//Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.

//soln:- using two pointers approach.(flying dutchman approach)  

void sort012(vector<int>& arr) {
        // code here
        int i=0;
        int j=0;
        int k=arr.size()-1;
        while(j<=k)
        {
            if(arr[j]==0)
            {
                swap(arr[i],arr[j]);
                i++;
                j++;
                
            }
            else if(arr[j]==2)
            {
                swap(arr[j],arr[k]);
                k--;
            }
            else{
                j++;
                
            }
            
        }
    }
