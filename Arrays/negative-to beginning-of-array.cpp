//You are given an array 'ARR' consisting of 'N' integers. You need to rearrange the array elements such that all negative numbers appear before all positive numbers.

//soln:- using two pointers approach
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    
   int i=0;
   int j=0;
   int n=nums.size();
    while(j<n)
    {
       if(nums[j]<0)
       {
           swap(nums[i],nums[j]);
           i++;
           j++;
       }
       else{
           j++;
       }
    }
    return nums;
}
