class Solution {
public:
    string longestPalindrome(string s) {
        // Brute Force 
        // Time Complexity O(n3)
        int k;
        bool p;
        string ans;
        for(int i=0; i<s.size(); i++ ){
            for(int j=i; j<s.size(); j++){
                p = 1;
                for(k=i; k<=(i+j)/2; k++){
                    if(s[k]!=s[j+i-k]){
                        p=0;
                        break;  
                    } 
                }
                if(p){
                    if(j-i+1>ans.size()){
                        ans=s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans;
    }
};