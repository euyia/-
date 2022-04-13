#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
class Solution
{
public:
    bool isOneEditDistance(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        if (m > n)
            return isOneEditDistance(t, s);
        // 这边很妙。取长度大的方法。
        if (n - m > 1)
            return false;
        for (int i = 0; i < m; ++i)
        {
            if (s[i] == t[i])
                continue;
            if (n == m)
                return s.substr(i + 1, n - i - 1) == t.substr(i + 1, m - i - 1);
            // 这边他都不像我insert 他用截取后半段比较的方式。。
            // 关键是它这样写。能把n==m的也统一进来。
            // 我n==m 还分开了一次遍历。而且还遍历完 算cnt==1.。
            // 他这边就用排除法。不用遍历完。。直接碰到如果后面还不一样。那就不用比了。
            else
                return s.substr(i + 1, n - (i + 1)) == t.substr(i, m - i);
        }
        return m != n;
        // 这边是因为出来的话说明m长度的都一样。但是n==m的时候是相等的 不符合条件
    }
};