//to Given a string s, of lowercase english alphabets, find the length of the longest prefix which is also a suffix.
//Note: Prefix and suffix can be overlapping but they should not be equal to the entire string.


//soln:- using two pointer to traverse the whole string and increase count.
int getLPSLength(string &s) {
        // code here
        int prefix=0;
        int pos=1; //position memoization to memorize position
        int suffix=1;
        int count=0;
        int n=s.size();
        while(prefix<n && suffix<n )
        {
            if(s[prefix]==s[suffix])
            {
                suffix++;
                count++;
                prefix++;
            }
            else{
                prefix=0;
                count=0;
                pos++;
                suffix=pos;
            }
        }
        return count;
        
    }
