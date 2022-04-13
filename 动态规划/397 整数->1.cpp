#include <all.h>
using namespace std;
// 这个题目。。也是一样。。就是套路。
// 就是懂就是懂 不懂就是不懂。。。。
// 有个红狗。鸿沟。。

// 本来我是想不通 这个dp 大小要怎么定。。他这里用哈希表 解决了
// 这里最大int的最大。。所以要n/2 再+1 。。而不能n+1/2 。会越界。
// 这也是很关键的细节。。技巧。
// mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
// // 这是这题的精髓。。
// 比如7 n + 1 / 2 和n - 1 / 2 分别是3 和4 就是等于7 / 2 和7 / 2 + 1；
// 两个是等价的。。。。但是证明？？   = = 先感性的理解。能用 先这样足够了。
class Solution
{
private:
    unordered_map<int, int> mp;

public:
    int dfs(int n)
    {
        if (n == 1)
            return 0;

        if (mp.count(n))
            return mp[n];

        if (n % 2 == 0)
            mp[n] = 1 + dfs(n / 2);
        // 听赖皮的 这种写法。。
        // 有点像root->left=dfs(root->left);
        // 前面又加return。。。
        else
            mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
        // 这是这题的精髓。。
        //
        return mp[n];
    }
};

unordered_map<int, int> mp;
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = dfs(n / 2) + 1;
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}
int dfs(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    if (n % 2 == 0)
        return mp[n] = 1 + dfs(n / 2);
    return mp[n] = 2 + min(dfs(n / 2), dfs(n / 2 + 1));
}

// 1000 未到。。。我是没有感情的刷套路机器。。
// 有效的。