#include <all.h>
using namespace std;
class Solution
{
public:
    string shortestPalindrome(string s)
    {
        // 从字符串中心往左边偏移，如果l还没有到0的时候就不是回文说明break。还要再往左偏移。。。。
        int n = s.size();
        int l = n / 2;
        if (n < 2)
            return s;
        int r = l + 1;
        int i;
        for (i = l; i >= 0; i--)
        {
            l = i, r = i + 1;
            while (l >= 0 && r <= n && s[l] == s[r])
            {
                --l;
                --r;
            }
            if (l < 0)
                break;
        }
        string t = s.substr(i + i + 1, s.size());
        reverse(t.begin(), t.end());
        return t + s;
    }
};
// 就是这样一题一题 一点一点积累的。
// 入弯角度。。思考切入角度。。