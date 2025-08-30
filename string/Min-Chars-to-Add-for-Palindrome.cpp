//Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

//soln :-using kmp
  int minChar(string &s) {
        // code here
        string rev=s;
        reverse(rev.begin(),rev.end());
        string complete=s+'$'+rev;
        int n=complete.size();
        int i=0,j=1;
        vector<int>lps(n,0);
        while(j<n)
        {
            if(complete[i]==complete[j])lps[j++]=++i;
            else if(i!=0)i=lps[i-1];
            else j++;
        }
        
        return s.size()-i;
}
