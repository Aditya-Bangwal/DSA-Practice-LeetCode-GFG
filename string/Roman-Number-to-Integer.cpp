//Given a string s in Roman number format, your task is to convert it to an integer. Various symbols and their values are given below.

//soln:-
int romanToDecimal(string &s) {
        // code here  I 
        int number=0;
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int n=s.size();
        auto it=mp.find(s[n-1]);
        if(it!=mp.end())
        {
            number+=it->second;
        }
        if(s.size()==1)
        {
            return number;
        }
        int prev=it->second;
        for(int i=n-2;i>=0;i--)
        {
              it=mp.find(s[i]);
            if(it != mp.end())
            {
                if(it->second<prev)
                {
                    
                    number-=it->second;;
                }
                else{
                    number+=it->second;
                }
                prev=it->second;
            }
        }
        return number;
        
    }
