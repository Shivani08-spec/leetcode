// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>>& grid,int x,int y,int row,int col){
        if(x<0 || x>=row||y<0 ||y>=col || grid[x][y]!='1'){
            return;
        }
        
         grid[x][y]='2';
        dfs(grid,x,y-1,row,col);
        dfs(grid,x,y+1,row,col);
        dfs(grid,x-1,y,row,col);
        dfs(grid,x+1,y,row,col);
        dfs(grid,x-1,y-1,row,col);
        dfs(grid,x+1,y+1,row,col);
        dfs(grid,x-1,y+1,row,col);
        dfs(grid,x+1,y-1,row,col);
        
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int res =0;
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(grid[i][j] =='1'){
                    dfs(grid,i,j,row,col);
                   res++;
                    
                }
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends