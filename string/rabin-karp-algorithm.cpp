//Given two strings text and pattern string, your task is to find all starting positions where the pattern appears as a substring within the text.
//The strings will only contain lowercase English alphabets.

solution:- 
  class Solution {
  public:
    int d=26;
    int q=101;
    void solve(string &pat, string &txt,vector<int>&ans)
    {
        int m=pat.size();
        int n=txt.size();
        int h=1;
        int p=0;
        int t=0;
        for(int i=0;i<m-1;i++)
        {
            h=(h*d)%q;
        }
        
        for(int i=0;i<m;i++)
        {
            p= (d*p+pat[i]-'a')%q;
            t=(d*t+txt[i]-'a')%q;
        }
        
        for(int i=0;i<=n-m;i++)
        {
            if(p==t)
            {
                bool match =true;
                for(int j=0;j<m;j++)
                {
                    if(txt[i+j]!=pat[j])
                    {
                        match =false;
                        break;
                    }
                }
                
                if(match)
                {
                    ans.push_back(i+1);
                }
            }
            
            if(i<n-m)
            {
                t=(d*(t-(txt[i]-'a')*h) +(txt[i+m]-'a'))%q;
            }
            
            if(t<0)
            {
                t=(t+q);
            }
        }
    }
    
    vector<int> search(string &pat, string &txt) {
         
         vector<int>ans;
         solve(pat,txt,ans);
         return ans;
        
        
        
    }
};  
