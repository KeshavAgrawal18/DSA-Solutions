class Solution {
private:
    string ans, word;
    vector<int> wrd;
    int ct=0;
    void fun(int i, int k, int n){
        if(wrd.size() == n){
            ct++;
            if(ct == k){
                for(auto it: wrd) ans+= '0'+it;
                return;
            }
        }
        for(int j=1; j<=n; j++){
            if(find(wrd.begin(), wrd.end(), j) != wrd.end()) continue;
            if(ans.size() != 0) return;
            // word.push_back(j);
            wrd.push_back(j);
            fun(j, k, n);
            // word.pop_back();
            wrd.pop_back();
        }
        
    }
public:
    string getPermutation(int n, int k) {
         fun(1, k, n);
        return ans;
    }
};