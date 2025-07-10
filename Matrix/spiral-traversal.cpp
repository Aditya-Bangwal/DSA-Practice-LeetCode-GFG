
//spiral traversal of a matrix
#include <bits/stdc++.h>
using namespace std;
 
 vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
int m=mat.size();
int n=mat[0].size();
//initialising conditins
int srow=0;
int erow=m-1;
int scol=0;
int ecol=n-1;
vector<int>ans;
while(srow<=erow && scol<=ecol)
{
//starting row left to right
for(int j=scol;j<=ecol;j++)
{
ans.push_back(mat[srow][j]);
}
//endling column top to bottom
for(int i=srow+1;i<=erow;i++)
{
ans.push_back(mat[i][ecol]);
}
//ending row right to left 
for(int j=ecol-1;j>=scol;j--)
{
//condition to check if we are not printing the same row
 if(srow==erow)break;
ans.push_back(mat[erow][j]);
}
for(int i=erow-1;i>=srow+1;i--)
{
  //condition to check if we are not taking the same column
  if(scol==ecol)break;
ans.push_back(mat[i][scol]);

}
  //reducing the parameter
srow++;
scol++;
erow--;
ecol--;



}
return ans;
}
