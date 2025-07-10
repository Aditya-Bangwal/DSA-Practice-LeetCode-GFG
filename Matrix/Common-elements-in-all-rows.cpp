//to find Common elements in all rows

//using set and unordered map to keep count and prevent from duplicate
#include<unordered_map>
#include<unordered_set>
#include<vector>
vector<int> findCommonElements(vector<vector<int>> &mat)
{
    unordered_set<int>s;
   
    unordered_map<int,int>mp;
    vector<int>ans;
    int m=mat.size();
    int n=mat[0].size();
    for(int i=0;i<m;i++)
    {
         
        for(int j=0;j<n;j++)
        {
            
             s.insert(mat[i][j]);
             

        }
        for(int x:s)
             {
                 mp[x]++;
             }
             s.clear();
    }
    for(auto it:mp)
    {
        if(it.second==m)
        {
            ans.push_back(it.first);
        }
    }
    return ans;

}
