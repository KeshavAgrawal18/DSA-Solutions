class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    int k, n;
    void fun(int start){
        if(n-start+1+temp.size() < k) return;
        if(temp.size() == k){
          ans.push_back(temp);
            return;
        } 
        for(int i = start; i<=n; i++){
            temp.push_back(i);
            fun(i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int N, int K) {
        k = K;
        n = N;
        fun(1);
        return ans;
    }
};