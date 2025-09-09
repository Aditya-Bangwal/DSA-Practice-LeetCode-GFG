//Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

//soln:-
 int binary(int s,int e,vector<int>& nums, int target)
    {
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
                
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int pivot=-1;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
           if(nums[i]>nums[i+1])
           {
            pivot=i;
            break;
           }
        }
        if(pivot==-1)
        {
            return binary(0,n-1,nums,target);
        }

        int choice1 =binary(0,pivot,nums,target);
        int choice2=binary(pivot+1,n-1,nums,target);
        if(choice1!=-1)
        {
            return choice1;
        }
        else{
            return choice2;
        }

        
        
    }
