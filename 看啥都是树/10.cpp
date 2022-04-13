#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    bool isMatch(string s, string p)
    {
        bool first_match = !s.empty() && (s[0] == p[0] || p[0] == '.');
        if (p.empty())
            return s.empty();
        if (p.size() >= 2 && p[1] == '*')
            return (isMatch(s, p.substr(2)) || first_match && isMatch(s.substr(1), p));
        else
            return first_match && isMatch(s.substr(1), p.substr(1));
    }
};
class Solution
{
public:
    bool first_match(string s, string p, int i, int j)
    {
        return s[i] == p[j] || p[j] == '.';
    }

    bool isMatch(string s, string p)
    {
        vector<vector<bool>> dp(s.size() + 1, vector<bool>(p.size() + 1));
        dp[0][0] = true;

        for (int j = 2; j <= p.size(); j++)
        {
            dp[0][j] = p[j - 1] == '*' && dp[0][j - 2];
        }
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < p.size(); j++)
            {

                if (p[j] == '*')
                {
                    dp[i + 1][j + 1] = dp[i + 1][j - 1] || first_match(s, p, i, j - 1) && dp[i][j + 1];
                }
                else
                {
                    dp[i + 1][j + 1] = first_match(s, p, i, j) && dp[i][j];
                }
            }
        }
        return dp[s.size()][p.size()];
    }
};