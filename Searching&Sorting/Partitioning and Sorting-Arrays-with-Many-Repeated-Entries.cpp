//You’re given an array with many repeated values. Your task is to sort this array efficiently.

//soln:-
void partition(vector<int>&arr,int low,int high)
{
  if(low>=high)return;
  int i=low,j=low,k=high;
  while(j<k)
  {
    if(arr[j]<arr[i])
    {
      swap(arr[i],arr[j]);
      i++;
      j++;
    }
    else if(arr[j]>arr[k])
    {
      swap(arr[j],arr[k]);
      k--;
    }
    else{
      j++;
    }
  }
  partition(arr,low,i-1);
  partition(arr,k+1,high);
  
  
  
}
