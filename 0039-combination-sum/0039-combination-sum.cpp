class Solution {
public:
    vector<vector<int>> ans;
    void fun(vector<int> temp, vector<int>& candidates, int& target, int sum){
        if(sum == target){
            ans.push_back(temp);
            return;
        }
        if(sum > target) return;
        for(auto i:candidates){
            if(temp.size()>0 && i < temp[temp.size()-1]) continue;
            temp.push_back(i);
            fun(temp, candidates, target, sum + i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        fun({}, candidates, target, 0);
        return ans;
    }
};