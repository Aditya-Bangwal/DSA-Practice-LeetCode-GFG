//Given a 2D grid of n*m of characters and a word, find all occurrences of given word in grid. A word can be matched in all 8 directions at any point.
//Word is said to be found in a direction if all characters match in this direction (not in zig-zag form). The 8 directions are, horizontally left, horizontally right, vertically up, vertically down, and 4 diagonal directions.

//soln:-
class Solution {
  public:
   int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

bool solve(vector<vector<char>>& grid,int i,int j, int xdir , int ydir ,string& word,int wordindex)
{

int m=grid.size();
int n=grid[0].size();
if(wordindex==word.size())return true;

if(i<0||j<0||i>=m ||j>=n)
{
return false;
}



if(grid[i][j]==word[wordindex])
{
return solve(grid,i+xdir,j+ydir,xdir,ydir,word,wordindex+1);

}
else{
return false;
}



}
    vector<vector<int>> searchWord(vector<vector<char>> grid, string word) {
       vector<vector<int>> ans;
        int n = grid.size(), m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == word[0]) {
                    for (int k = 0; k < 8; k++) {
                        if (solve(grid, i, j, dx[k], dy[k], word, 0)) {
                            ans.push_back({i, j});
                            break;
                        }
                    }
                }
            }
        }
        return ans;
        
    }
};
