//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".

//soln:-comparing each character continously and if does not match return.
 string longestCommonPrefix(vector<string>& strs) {
        int minsize=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<minsize)
            minsize= strs[i].size();

        }
        string ans="";
        for(int i=0;i<minsize;i++)
        {
            bool match=true;
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=ch)
                {
                    match=false;
                    break;
                }
            }
            if(match)
            {
                ans+=ch;
            }
            else{
                break;
            }

        }

        return ans;
        
    }

