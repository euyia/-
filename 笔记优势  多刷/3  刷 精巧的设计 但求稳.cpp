#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
int soso(string s)
{
    int n = s.size();
    int res = 0;
    int start, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > start)
        {
            res = max(res, i - start);
            start = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - start ? res : n - start;
}
int soso(string s)
{
    int n = s.size();
    int start, res, index[128]{};
    start = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > start)
        {
            res = max(res, i - start);
            start = index[s[i]] + 1;
        }
        index[s[i]] = i;
    }
    return res > n - start ? res : n - start;
}
int soso(string s)
{
    int n = s.size();
    int start, res, index[128]{};
    start = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > start)
        {
            res = max(res, i - start);
            start = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - start ? res : n - start;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, index[128]{};
    int res = l = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int sos(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int sosos(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int res, l, index[128]{};
    res = l = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int res, l, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)

{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int sosos(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
int soso(string s)
{
    int n = s.size();
    int l, res, index[128]{};
    l = res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (index[s[i]] > l)
        {
            res = max(res, i - l);
            l = index[s[i]];
        }
        index[s[i]] = i + 1;
    }
    return res > n - l ? res : n - l;
}
// 废话少说 就是干。让时间说话

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // 尽量把那种巧解的题目。能用稳定的解法 来实现。。也通过。
        // 不然你下次还是不稳定能会。。
        unordered_map<char, int> mp;

        int n = s.size();
        if (n == 0)
            return 0;
        int start = 0;
        int maxt = 1;
        for (int i = 0; i < n; ++i)
        {
            if (mp[s[i]] > start)
            {
                // 这边不单单要有值 还要大于start
                // 因为有写值保留下来。但是已经被start越过了。
                maxt = max(maxt, i - start);
                start = mp[s[i]];
            }
            mp[s[i]] = i + 1;
        }
        return maxt > n - start ? maxt : n - start;
    }
};
// 可以刷到1000
// 但是这种迭代的套路。。。像reverse链表那个。。
// 本质上应该是dp
// 本质上应该是dp
// 本质上应该是dp
// 只不过缩减了维度。所以用变量来表示迭代
