class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp, candidates;
    void fun(int& target, int sum, int start){
        if(sum == target){
            ans.push_back(temp);
            return;
        }
        if(sum > target) return;
        for(auto i = start; i<candidates.size();i++){
            // if(temp.size()>0 && i < temp[temp.size()-1]) continue;   
            if(sum + candidates[i] > target) break;
            temp.push_back(candidates[i]);
            fun(target, sum + candidates[i], i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidate, int target) {
        candidates = candidate;
        sort(candidates.begin(), candidates.end());
        fun(target, 0, 0);
        return ans;
    }
};