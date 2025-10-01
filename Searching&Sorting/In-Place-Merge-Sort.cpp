//implement Merge Sort i.e. standard implementation keeping the sorting algorithm as in-place. 
//In-place means it does not occupy extra memory for merge operation as in the standard case.


//soln:-
void merge(vector<int>&arr,int start,int mid,int end)
{
  int start2=mid+1;
  if(arr[mid]<=arr[start2])
  {
    return;
  }
  while(start<=mid && start2<=right)
    {
      if(arr[start]<=arr[start2])
      {
        start++;
      }
      else{
        int value=arr[start2];
        int index=start2;
        while(index!=start)
          {
            arr[index]=arr[index-1];
            index--;
            
          }
        arr[start]=value;
        start++;
        mid++;
        start2++;
      }
    }
}

void mergesort(vector<int>&arr,int left,int right)
{
  if(left<right)
  {
    int mid=left+(right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
  }
}

//left=0 and right=n-1; (initial values)
