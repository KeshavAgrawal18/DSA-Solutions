class Solution {
public:
     vector<vector<int>> v;
    int fun(int m,int n,vector<vector<int>>& obstacleGrid){
        if(obstacleGrid[m][n]==1) return 0;
        if(v[m][n]!=-1) return v[m][n];
        if(m>0 && n>0) return v[m][n]=fun(m,n-1,obstacleGrid)+fun(m-1,n,obstacleGrid);
        if(m>0) return v[m][n]=fun(m-1,n,obstacleGrid);
        return v[m][n]=fun(m,n-1,obstacleGrid);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         vector<int> temp;
        
        for(int j=0;j<obstacleGrid[0].size();j++){
            temp.push_back(-1);
            }
        for(int i=0;i<obstacleGrid.size();i++){
            v.push_back(temp);
        }
        v[0][0]=1;
        return fun(obstacleGrid.size()-1,obstacleGrid[0].size()-1,obstacleGrid);
    }
};