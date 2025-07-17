//to find the kth smallest element in an array.

//solution 1:- to first sort the array and then return (k-1)th element.
   int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }

//solution 2:-using max heap
  int kthSmallest(vector<int> &arr, int k) {
        // code here
        // 
        priority_queue<int>pq;
        
        for(int i=0;i<arr.size();i++)
        {
            pq.push(arr[i]);
              if(pq.size()>k)
              {
                     pq.pop();
                    
              }
        }
        return pq.top();
        
    }
