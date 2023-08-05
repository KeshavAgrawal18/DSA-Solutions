class Solution {
public:
    
    int n,m;
    void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<int>>& visited){
        visited[i][j] = 1;
        if(i > 0) {
           if(grid[i-1][j] == '1' && visited[i-1][j]==0){
                    dfs(grid, i-1, j, visited);
                }
            else visited[i-1][j]=1;
        }
        if(j > 0) {
           if(grid[i][j-1] == '1' && visited[i][j-1]==0){
                    dfs(grid, i, j-1, visited);
                }
            else visited[i][j-1]=1;
        }
        if(i < n-1) {
           if(grid[i+1][j] == '1' && visited[i+1][j]==0){
                    dfs(grid, i+1, j, visited);
                }
            else visited[i+1][j]=1;
        }
        if(j < m-1) {
           if(grid[i][j+1] == '1' && visited[i][j+1]==0){
                    dfs(grid, i, j+1, visited);
                }
            else visited[i][j+1]=1;
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int  count = 0;
        vector<vector<int>> visited(n, vector<int> (m,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if( grid[i][j] == '1' && visited[i][j] == 0){
                    dfs(grid, i, j, visited);
                    count ++;
                }
            }
        }
        return count;
    }
};