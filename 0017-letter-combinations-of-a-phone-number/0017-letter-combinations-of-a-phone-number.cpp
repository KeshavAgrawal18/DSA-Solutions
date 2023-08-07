class Solution {
private:
vector<string> ans;
vector<string> map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string word;
void fun(int i, string digits){
    if(i == digits.size()){
        ans.push_back(word);
        return;
    }
    int digit = digits[i]-'0';
    for(int j=0; j<map[digit].size(); j++){
        word.push_back(map[digit][j]);
        fun(i+1, digits);
        word.pop_back();
    }
}
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        fun(0, digits);
        return ans;
    }
};