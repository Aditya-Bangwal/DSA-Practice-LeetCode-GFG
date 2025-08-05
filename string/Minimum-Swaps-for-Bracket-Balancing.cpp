//You are given a string s of 2*n characters consisting of n ‘[‘ brackets and n ‘]’ brackets. 
//A string is considered balanced if it can be represented in the form a[b] where a and b are balanced strings.
//We can make an unbalanced string balanced by swapping adjacent characters
//Calculate the minimum number of swaps necessary to make a string balanced.
//Note - Strings a and b can be empty.

    int minimumNumberOfSwaps(string& s) {
        // code here
        vector<int>pos;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                pos.push_back(i);
                
            }
            
        }
        
        int count=0;
        int p=0;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                p++;
                count++;
            }
            else if(s[i]==']')
            {
                count--;
                
                if(count<0)
                {
                    sum+=pos[p]-i;
                    swap(s[pos[p]],s[i]);
                    p++;
                    count=1;
                }
                
            }
            
        }
        return sum;
    }
