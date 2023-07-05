class Solution {
public:
    vector<vector<int>> v;
    int fun(int m,int n){
        if(v[m][n]!=-1) return v[m][n];
        if(m>0 && n>0) return v[m][n]=fun(m,n-1)+fun(m-1,n);
        if(m>0) return v[m][n]=fun(m-1,n);
        return v[m][n]=fun(m,n-1);
    }
    int uniquePaths(int m, int n) {
        vector<int> temp;
        for(int j=0;j<n;j++){
            temp.push_back(-1);
            }
        for(int i=0;i<m;i++){
            v.push_back(temp);
        }
        v[0][0]=1;
        return fun(m-1,n-1);
    }
};