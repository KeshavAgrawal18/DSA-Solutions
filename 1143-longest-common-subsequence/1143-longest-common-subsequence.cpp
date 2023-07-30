class Solution {
public:
    int lcsRecursion(vector<vector<int>>& dp, string& a, string& b, int n1, int n2){
        if(n1<0 || n2<0) return 0;
        if(dp[n1][n2] != -1) return dp[n1][n2];
        if(a[n1] == b[n2]) {
            return dp[n1][n2] = 1 + lcsRecursion(dp, a, b, n1-1, n2-1);
        }
        else
            return dp[n1][n2] = max(lcsRecursion(dp, a, b, n1, n2-1), lcsRecursion(dp, a, b, n1-1, n2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size()+1, vector<int>(text2.size()+1, -1));
        // vector<int> temp;
        // for(int i=0;i<text2.size();i++)
        //     temp.push_back(-1);
        // for(int j=0;j<text1.size();j++)
        //     dp.push_back(temp);
        return lcsRecursion(dp, text1, text2, text1.size()-1, text2.size()-1);
    }
};