class Solution {
public:
    int lcsRecursion(vector<vector<int>>& dp, string& a, string& b, int n1, int n2){
        // Top Down Approach
        // Remember If the length of String is more Don't make it's copy again and again in recursion
        // Instead Use reference to original string 
        //It optimizes the code to large extent upto 2.92s to 0.04s
        
        if(n1<0 || n2<0) return 0;
        if(dp[n1][n2] != -1) return dp[n1][n2];
        
        if(a[n1] == b[n2]) {
            return dp[n1][n2] = 1 + lcsRecursion(dp, a, b, n1-1, n2-1);
        }
        else return dp[n1][n2] = max(lcsRecursion(dp, a, b, n1, n2-1), lcsRecursion(dp, a, b, n1-1, n2));
   
    }
    
    int longestCommonSubsequence(string text1, string text2) {
    
        int n1 = text1.size(), n2 = text2.size();
        vector<vector<int>> dp(n1, vector<int>(n2, -1));
        
        return lcsRecursion(dp, text1, text2, n1-1, n2-1);
    }
};