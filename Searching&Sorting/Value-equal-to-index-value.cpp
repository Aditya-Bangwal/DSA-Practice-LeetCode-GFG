// Given a sorted array arr[] with possibly some duplicates, the task is to find the first and last occurrences of an element x in the given array.

//soln:-
vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==i+1)
            {
                ans.push_back(i+1);
            }
            
        }
        return ans;
    }
