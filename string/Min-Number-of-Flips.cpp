//Given a binary string s of lenght n. We need to make this string a sequence of alternate characters by flipping some of the bits, 
//our goal is to minimize the number of bits to be flipped.

soln:-    int minFlips(string& s) {
        // code here
        int c1=0;
        int c2=0;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0 && s[i]=='1')c1++;
            if(i&1 && s[i]=='0')c1++;
            if(i%2==0 && s[i]=='0')c2++;
            if(i&1 && s[i]=='1')c2++;
            
        }
        return min(c2,c1);
    }
