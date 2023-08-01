class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cur = 0, mx = 0;
        string temp;
        for(int i = 0; i < s.size(); i++){
            if(temp.find(s[i]) == string::npos ){
                temp.push_back(s[i]);
                cur++;
                
            }
            else{
                int found = temp.find(s[i]);
                mx = max(cur, mx);
                cur-=found;
                temp.erase(0, found +1);
                    temp.push_back(s[i]);
                
            }
        }
        mx = max(cur, mx);
        temp.clear();
        cur = 0;
        return mx;    
    }
};