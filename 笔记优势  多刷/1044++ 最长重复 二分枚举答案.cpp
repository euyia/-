#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。

// 下面这种是主流。。

const int P = 50003, N = 30010;
const int M = 30010;
typedef unsigned long long ll;

//  这种定义成常数变量 在这种多次使用数字。。确实很方便。
class Solution
{
public:
    ll p[N], sum[N];
    string res;
    int h[P], ne[M], idx;
    ll e[M];
    int n;
    void insert(ll a)
    {
        int k = a % P;
        e[idx] = a;
        ne[idx] = h[k];
        h[k] = idx++;
        // 这也太繁琐了。。。刷个100次都不好使吧。
    }
    bool find(ll a)
    {
        int k = a % P;
        for (int i = h[k]; i != -1; i = ne[i])
            if (e[i] == a)
                return true;
        return false;
    }
    inline bool check(int mid, string &s)
    {
        memset(h, -1, sizeof(h));
        idx = 0;
        for (int i = 1; i <= n - mid + 1; i++)
        {
            ll temp = sum[i + mid - 1] - sum[i - 1] * p[mid];
            if (find(temp))
            {
                res = s.substr(i - 1, mid);
                return true;
            }
            insert(temp);
        }
        return false;
    }
    string longestDupSubstring(string s)
    {
        res = "";
        n = s.size();
        p[0] = 1;
        sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] * P + s[i - 1];
            p[i] = p[i - 1] * P;
        }
        int l = 0, r = n - 1;
        while (l < r)
        {
            int mid = l + r + 1 >> 1;
            if (check(mid, s))
                l = mid;
            else
                r = mid - 1;
        }
        return res;
    }
};
// 这题他是二分的方式去枚举一个固定长度的答案。他是直接去枚举答案的可能最大值。。
// 也也就是计算机能做的事情了。
// 比如3 长度。那么就按顺序去取长度为长的子串。。然后用set存。如果遍历的过程中碰到有一样的。说明ok
// 这过程中用到一种节省统计时间的一种类似滑动串窗口的key值的计算方式。。减少时间浮渣度量级。。