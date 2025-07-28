//Find the number of occurrences of a given search word in a 2d-Array of characters where the word can go up, down, left, right, and around 90-degree bends.

//soln:-  int solve(vector<vector<char> > &mat , int i , int j , string target , int targetindex)
   {
       if(i<0||j<0||i>=mat.size()||j>=mat[0].size())
       {
           return 0;
           
       }
       
       char original=mat[i][j];
       if( original != target[targetindex] )return 0;
       if(targetindex == target.size()-1)return 1;
       
       int count=0;
       mat[i][j]='\0';
       count+=solve(mat,i+1,j,target,targetindex+1);
       count+=solve(mat,i-1,j,target,targetindex+1);
       count+=solve(mat,i,j-1,target,targetindex+1);
       count+=solve(mat,i,j+1,target,targetindex+1);
       
       mat[i][j]=original;
       return count;
       
       
       
       
       
   }
    int findOccurrence(vector<vector<char> > &mat, string target) {
        int count=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                count+=solve(mat,i,j,target,0);
                
            }
        }
        return count;
    }
