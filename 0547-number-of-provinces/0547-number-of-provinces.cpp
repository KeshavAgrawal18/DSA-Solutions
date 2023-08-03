class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, int i, vector<int>& visited){
        visited[i]=1;
        for(int j=0;j<isConnected.size();j++){
            if(isConnected[i][j] == 1 && visited[j] == 0){
                 dfs(isConnected, j, visited);
            }
            
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size(), count = 0;
        vector<int> visited(n, 0);
        for(int i = 0; i<n; i++){
            if(visited[i]==0){
                dfs(isConnected, i, visited);
                count++;
            }
                
        }
        return count;
    }
};