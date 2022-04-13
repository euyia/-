#include <all.h>
using namespace std;
// 那这个就可以随便套用到有vector的 400ms直接编程200ms。。
static int x = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

https : //leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/solution/c2chong-fen-zhi-jie-fa-er-fen-jie-fa-by-a58u1/

        //  这种写法的思路是最清晰的。。

        //  这种写法的思路是最清晰的。。

        //  这种写法的思路是最清晰的。。

        // 先有暴力的思路 然后再优化。。
        // 虽然暴力不是最终解。。但是它的底子。。你底子都理解不了 理解什么优化

        // 设：n = 9，那么就有：
        // x * x * x * x * x * x * x * x * x // 也就是 x 自乘 9 次
        // 根据乘法结合律，可以自由组合，如下：
        // x * (x * x * x * x) * (x * x * x * x)
        // 可以观察到 左括号内，和 右括号内 的内容是完全一样的，那意味着，
        // 只需要其中一个括号内值，就可以知道另一个括号内的值。继续拆解其中一个括号：
        // (x * x * x * x) = (x * x) * (x * x)
        //                   一个大括号内又被拆成2个完全相同的部分，同理只用求其中一个。

        // 算法思路的起点都是暴力解法上做优化！
        // 算法思路的起点都是暴力解法上做优化！
        // 算法思路的起点都是暴力解法上做优化！
        class Solution
{
public:
    double myPow(double x, int n)
    {
        double result = 1;
        if (n < 0)
            x = 1 / x, n = -n;
        for (int i = 0; i < n; ++i)
            result *= x;
        return result;
    }
};
// 优化的逻辑是上面那个例子。
// 去观察发现 如果n是偶数 就可以递归式的拆解下去
// 如果是奇数 要拿出来一个然后再做偶数递归下去。。
// 这个思路是子容易理解的。。最容易走过去的。。走通的。。快速幂。
class Solution
{
public:
    double myPow(double x, long n)
    {
        if (n == 0)
            return 1;
        if (n < 0)
            x = 1 / x, n = -n;
        return (n & 1) > 0 ? x * myPow(x, n - 1) : myPow(x * x, n >> 1);
    }
};

// 但是我想先刷下暴力的。
// 暴力是基础
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
    {
        res *= x;
    }
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 0;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n *= -1;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int soso(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int res = 1;
    while (n--)
        res *= x;
    return res;
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n / 2);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) > 0 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int k = (n & 1) == 1 ? x : 1;
    return k * dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int k = (n & 1) == 1 ? x : 1;
    return k * dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    int k = (n & 1) == 1 ? x : 1;
    return k * dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x * x, n >> 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x * x, n >> 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
int dfs(int x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        x = 1 / x, n = -n;
    return (n & 1) == 1 ? x * dfs(x, n - 1) : dfs(x * x, n >> 1);
}
// 不用理由 就是1000行先敲完 再说话 1000是肌肉记忆
// 就像跑跑 你没有量。根本没有谈其他的必要性。