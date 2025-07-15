//to reverse a string.

//solution : using two pointer and swapping.
   void reverseString(vector<char>& s) {
        int i=0;
        int n=s.size()-1;
        while(i<=n)
        {
            swap(s[i],s[n]);
            i++;
            n--;
        }
        
    }
