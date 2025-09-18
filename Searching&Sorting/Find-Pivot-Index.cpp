//Given an array of integers nums, calculate the pivot index of this array.
//The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

//soln:-
   int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i:nums)
        {
            total+=i;
        }
        int pivot=-1;
        int leftsum=0;
        for(int i=0;i<nums.size();i++)
        {
            int rightsum=total-nums[i]-leftsum;
            if(rightsum==leftsum)
            {
                return i;
            }
            leftsum+=nums[i];

        }
        return pivot;
        
    }
