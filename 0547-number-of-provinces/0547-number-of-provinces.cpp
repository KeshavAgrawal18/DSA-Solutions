class Solution {
public:
    vector<vector<int>> isConnected;
    void dfs(int i, vector<bool>& visited){
        
        visited[i]=1;
        for(int j=0;j<isConnected.size();j++){
            if(isConnected[i][j] == 1 && visited[j] == 0){
                 dfs(j, visited);
            } 
        }
        
    }
    int findCircleNum(vector<vector<int>>& IsConnected) {
        isConnected = IsConnected;
        int n= isConnected.size(), count = 0;
        vector<bool> visited(n, 0);
        
        for(int i = 0; i<n; i++){
            if(visited[i]==0){
                dfs(i, visited);
                count++;
            }
                
        }
        return count;
    }
};