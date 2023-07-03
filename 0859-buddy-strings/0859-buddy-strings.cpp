class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return 0;
        if(s==goal){
            sort(s.begin(),s.end());
            for(int i=0;i<s.size()-1;i++){
                if(s[i]==s[i+1]) return 1;
            }
            return 0;
        }
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]) v.push_back(i);
        }
        if(v.size()!=2) return 0;
        if(s[v[0]]==goal[v[1]] && s[v[1]]==goal[v[0]]) return 1;
        return 0;
    }
};