#include <all.h>
using namespace std;
class Solution
{
public:
    string shortestPalindrome(string s)
    {
        if (s.size() == 0)
        {
            return "";
        }
        string rev = s;
        reverse(rev.begin(), rev.end());
        string str = s + "#" + rev;
        // 就是这种组合之后 中间加#是怕碰到那种都aaaaa那种。
        // 就是去找这个str的最长公共前后缀。就是kmp
        vector<int> next(str.size());
        int res = GetNext(str, next);
        return rev + s.substr(res + 1, s.size() - res);
    }

    int GetNext(string p, vector<int> &next)
    {
        next[0] = -1;
        int i = 0;
        int j = -1;
        while (i < p.size() - 1)
        {
            if (j == -1 || p[i] == p[j])
            {
                i++;
                j++;
                next[i] = j;
            }
            else
            {
                j = next[j];
            }
        }
        return next[i];
    }
};