class Solution
{
public:
    string reverseWords(string s)
    {
        string ans, temp;
        for (int i = s.size() - 1; i >= 0; i--)
        {

            while (s[i] == ' ')
            {
                i--;
                if (i < 0)
                    return ans;
            }
            if (i < 0)
                return ans;
            while (s[i] != ' ')
            {
                temp.push_back(s[i]);
                i--;
                if (i < 0)
                    break;
            }
            if (ans.size() != 0)
                ans.push_back(' ');
            for (int j = temp.size() - 1; j >= 0; j--)
            {
                ans.push_back(temp[j]);
            }
            temp.clear();
        }
        return ans;
    }
};