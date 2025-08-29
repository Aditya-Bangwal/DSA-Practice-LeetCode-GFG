//Given an array of strings, return all groups of strings that are anagrams

//soln:-
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
      map<string,vector<string>>m;
      
      for(int i=0;i<arr.size();i++)
      {
          string temp=arr[i];
          sort(temp.begin(),temp.end());
          m[temp].push_back(arr[i]);
      }
      
      vector<vector<string>>ans;
      
      for(auto it:m  )
      {
          ans.push_back(it.second);
      }
      return ans;
    }
