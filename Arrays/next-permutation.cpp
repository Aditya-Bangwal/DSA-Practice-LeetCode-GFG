//implement the next permutation that rearranges the numbers into the lexicographically next greater permutation. 
//If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

//solution: start from right find the first element where the pattern arr[i]>arr[i+1] as after that the array is strictly decreasing and store it in index .
//now just swap the next greater element than arr[index]  with arr[index] and reverse the array from index+1 to the end.


    void nextPermutation(vector<int>& arr) {
        // code here
        
        int index=-1;
        for(int i=arr.size()-1;i>0;i--)
        {
            if(arr[i]>arr[i-1])
            {
                index=i-1;
                break;
            }
       }
       if(index==-1)
        {
          sort(arr.begin(),arr.end());
            return;
        }
        for (int i = arr.size() - 1; i > index; i--) {
        if (arr[i] > arr[index]) {
            swap(arr[i], arr[index]);
            break;
        }
    }
       //reverse(arr.begin()+index+1,arr.end());
        int i=index+1;
        int j=arr.size()-1;
        while(i<=j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
