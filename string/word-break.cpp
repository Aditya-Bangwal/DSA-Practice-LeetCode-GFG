//Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

//solution : checking each character in string s if exist in dictionary and similarly do this for remaining indexes.
//typing tabulation approach for this method
 unordered_set<string>st;
    int n;
    bool solve1(string&s)
    {
         vector<int>dp(n+1,0);
         dp[n]=true;

         for(int ind=n-1;ind>=0;ind--)
         {
            for(int i=1;i<=n-ind;i++)
        {
            string temp=s.substr(ind,i);
            if(st.find(temp)!=st.end() && dp[ind+i])
            {
                dp[ind]= true;
                break;
            }
        }
         

         }
        return  dp[0];

    }
    bool wordBreak(string s, vector<string>& dictionary) {
          n=s.size();
        for(auto it :dictionary)
        {
            st.insert(it);
        }
        // vector<int>dp(n+1,-1);
        
        return solve1(s);
        
    }
