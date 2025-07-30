//Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.

//soln:-string secFrequent(string arr[], int n) {
     map<string,int>mp;
     if(n==1)
     {
         return arr[0];
     }
     for(int i=0;i<n;i++)
     {
         string temp=arr[i];
         mp[temp]++;
     }
     string fstring="";
     string sstring="";
     int fmax=0;
     int smax=0;
    for(auto it:mp)
    {
        if(it.second>fmax)
        {
            smax=fmax;
            sstring=fstring;
            fmax=it.second;
            fstring=it.first;
        }
        else if(it.second>smax &&  it.second<fmax ){
            smax=it.second;
            sstring=it.first;
            
        }
    }
    return sstring;
    }
