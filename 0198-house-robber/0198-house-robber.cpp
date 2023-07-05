class Solution {
public:
  vector<int>dp;
  
int fun(int n,vector<int>& nums){
    if(dp[n]!=-1) return dp[n];
    
    if(n==0 || n==1) return dp[n]=nums[n];
    if(n==2) return dp[n]=fun(n-2,nums)+nums[n];
  
  return dp[n]=max(fun(n-3,nums),fun(n-2,nums))+nums[n];
}
    int rob(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
          dp.push_back(-1);
        }
        if(nums.size()==1) return fun(nums.size()-1,nums);
      return max(fun(nums.size()-1,nums), fun(nums.size()-2,nums));
    }
};