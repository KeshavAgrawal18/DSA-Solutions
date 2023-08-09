class Solution {
public:
    vector<vector<int>> permutations;
    vector<int> permutation;

    void recursionFun(vector<int>& nums){
        if(permutation.size() == nums.size()){
            permutations.push_back(permutation);
            return;
        }
        for(int i=0; i<nums.size(); i++ ){
            if( find(permutation.begin(), permutation.end(), nums[i]) != permutation.end() ) continue;
            permutation.push_back(nums[i]);
            recursionFun(nums);
            permutation.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        recursionFun(nums);
        return permutations;
    }
};