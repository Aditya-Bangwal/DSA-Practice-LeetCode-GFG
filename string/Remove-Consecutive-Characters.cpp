//You are given a string s, consisting of lowercase alphabets. Your task is to remove consecutive duplicate characters from the string. 

//soln:-
    string removeConsecutiveCharacter(string& s) {
        // code here.
        int n=s.size();
        string ans="";
        int index=-1;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ans.empty() || ans[index]!=s[i])
            {
                ans+=ch;
                index++;
                
            }
            else if(ans[index]==s[i])
            {
                continue;
            }
            
            
        }
        return ans;
    }
