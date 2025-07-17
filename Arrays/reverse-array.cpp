// to reverse the given array.


//solution using two pointer to continously swapping elements from starting and ending and then increasing starting pointer and decreasing last pointer.
void reverseArray(vector<int> &arr) {
        // code here
        int i=0;
        int n=arr.size()-1;
        while(i<=n)
        {
            swap(arr[i],arr[n]);
            i++;
            n--;
            
        }
    }
