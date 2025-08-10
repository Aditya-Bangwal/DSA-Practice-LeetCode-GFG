//Given a string s with repeated characters, the task is to rearrange characters in a string such that no two adjacent characters are the same.

//soln :-
    string rearrangeString(string s) {
        // code here
        int n=s.size();
         unordered_map<char,int>mp;
         for(int i=0;i<s.size();i++)
         {
             mp[s[i]]++;
         }
         
         priority_queue<pair<int,char>>pq;
         for(auto it:mp)
         {
             pq.push({it.second,it.first});
            
         }
         
         pair<int,char>prev=make_pair(0,'#');
         
         string ans="";
         
         while(!pq.empty())
         {
             pair<int,char>p=pq.top();
             pq.pop();
             
             ans.push_back(p.second);
             
             if(prev.first>0)
             {
                 pq.push(prev);
             }
             
             p.first--;
             prev=p;
             
         }
          if (ans.size() != n)
        return "";
    
    // Valid String
    return ans;
         
       
    }   
