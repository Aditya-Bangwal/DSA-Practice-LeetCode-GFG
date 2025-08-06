//Given a string s containing only digits, your task is to restore it by returning all possible valid IP address combinations. You can return your answer in any order.
//A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255(inclusive).


//soln:-
   bool isvalid(string &s)
    {
      
        if(s.size()==1)
        {
            return true;
        }
        
        int temp=stoi(s);
        
        if(s[0]=='0' || temp>255)
        {
            return false;
        }
        return true;
    }
    void solve(string &s,vector<string>&rec,int index,int count,string curr)
    {
        string temp="";
        if(index>=s.size())
        {
            return;
        }
        
        
        if(count==3)
        {
            temp=s.substr(index);
            
            if(temp.size()<=3 && isvalid(temp))
            {
                rec.push_back(curr+temp);
            }
            
            return;
        }
        
        for(int i=index;i < min(index + 3, (int)s.size());i++)
        {
            temp+=s[i];
            if(isvalid(temp))
            {
                solve(s,rec,i+1,count+1,curr+temp+'.');
            }
            
            
        }
        }
    vector<string> generateIp(string s) {
        // code here
        vector<string>rec;
        solve(s,rec,0,0,"");
        return rec;
    }
