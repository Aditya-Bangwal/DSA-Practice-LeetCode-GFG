//pattern searching algorithm booyer moore 

//1.using bad character heuristic 

void badheuristic(int mark[], string str ,int size)
{
  for(int i=0;i<256;i++)
    {
      mark[i]=-1;
    }

  for(int i=0;i<size;i++)
    {
      mark[(int)str[i]]=i;
    }
  
}
void search(string pat,string txt)
{
   int mark[256];
  badheuristic(mark,pat,m);
  int m=pat.size();
  int n=txt.size();
  int s=0;
  while(j<n-m)
    {
      int j=m-1;
      while(j>=0 && pat[j]==txt[s+j])
        {
          j--;
        }
      if(j<0)
      {
        cout<<"pattern find at index"<<s;
        s+=(s+m<n)?m-mark[txt[s+m]]:1;
      }
      else
      {
        s+=max(1,j-mark[txt[s+j]]);
        
      }
      
    }
  
}
