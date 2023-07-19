class Solution {
public:
    void DFS(vector<vector<int>>& isConnected, vector<int>& visit, int n){
        if(visit[n] == 1) return;
        visit[n] = 1;
        for(int i=0; i<isConnected.size();i++){
            if(isConnected[n][i]==1 && visit[i] == 0) DFS(isConnected, visit, i);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visit(n, 0);
        int count = 0;
        for(int i = 0; i < n; i++){
            if(visit[i] == 0){
                DFS(isConnected, visit, i);
                count++;
            }
        }
        return count;
    }
};