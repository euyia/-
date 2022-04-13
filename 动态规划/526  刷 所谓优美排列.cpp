#include <all.h>
using namespace std;

class Solution
{
public:
    bool visit[16];
    int count;
    int countArrangement(int n)
    {
        dfs(1, n);
        return count;
    }
    void dfs(int l, int n)
    {
        if (l > n)
        {
            count++;
            return;
        }
        for (int i = 1; i <= n; ++i)
        {
            if (!visit[i] && (l % i == 0 || i % l == 0))
            {
                visit[i] = 1;
                dfs(l + 1, n);
            }
            visit[i] = 0;
        }
    }
};
// 所谓状态压缩。。看裂开了。
class Solution
{
public:
    int countArrangement(int n)
    {
        const int m = 1 << n; //m表示状态数
        int dp[16][m];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n; ++i)             //遍历数字位置
            for (int j = 0; j < m; ++j)         //遍历每一个状态
                if (__builtin_popcount(j) == i) //如果当前状态所取个数与数字位置一致
                    // 这个是放回j 二进制状态 1的个数
                    for (int k = 0; k < n; ++k)                                                    //遍历每一个数字，查看哪个符合题目要求
                        if (((k + 1) % (i + 1) == 0 || (i + 1) % (k + 1) == 0) && ((1 << k) & ~j)) //如果满足题目条件,更新（i << k) | j中的方法数
                            dp[i][(1 << k) | j] += i == 0 ? 1 : dp[i - 1][j];
        return dp[n - 1][m - 1];
    }
};
// 参考了大佬提交的代码自己理解的。
// 思路：用一个n位的二进制数表示二进制中为1的数字已任意顺序放在数组的前m位（m为该二进制数中1的个数）。
// 例子：二进制数010101，第1,3,5位是1，一共3个1，所以表示1,3,5以任意顺序放在数组前3位。
// 状态：dp[n]表示二进制数n代表的所有排列中有效情况的数量。
// 更新状态：对于二进制中为0的位，判断是否可以作为下一个放入数组中的数，若是则更新dp[n | (1 << j)] += dp[n]
// 例子：010101中，第2位为0，判断其是否可放在数组第4位（因为数组已有3个数），显然可以（4%2==0），更新dp[010101 | (1 << (2-1))] += dp[010101];
// 即dp[010111] += dp[010101];

// 例如： 3 << 2，则是将数字3左移2位
int countArrangement(int N)
{
    vector<int> dp(1 << N, 0);
    //每个数都能放在第1位
    for (int i = 0; i < N; ++i)
    {
        dp[1 << i] = 1;
    }
    for (int i = 0; i < (1 << N); ++i)
    {
        int index = 1;
        int temp = i;
        //计算1的个数
        while (temp)
        {
            temp &= temp - 1;
            ++index;
        }
        for (int j = 0; j < N; ++j)
        {
            //二进制位为0（未被选取）,且能放在第index位
            if (!(i & (1 << j)) && ((j + 1) % index == 0 || index % (j + 1) == 0))
            {
                dp[1 << j | i] += dp[i];
            }
        }
    }
    return dp[(1 << N) - 1];
}

int soso(int n)
{
    int m = 1 << n;
    vector<int> dp(m, 0);

    for (int i = 0; i < n; ++i)
        dp[1 << i] = 1;
    for (int i = 0; i < (m); ++i)
    {
        int index = 1;
        int tmp = i;
        while (tmp)
        {
            tmp &= tmp - 1;
            ++index;
        }
        for (int j = 0; j < n; ++j)
        {
            if (!(i & (1 << j)) && ((j + 1) % index == 0) || index % (j + 1) == 0)
                dp[1 << j | i] + dp[i];
        }
    }
    return dp[(m)-1];
}
// 用到了太多不认识很陌生的符号。。比如<< & | 这种。。
// 一时吃不下来。。
// 先去看下暴力的。

// vis把。。好些。。改掉之前的visited
class Solution
{
public:
    int countArrangement(int n)
    {
        int vis[16]{0};
        return dfs(1, n, vis);
    }
    int dfs(int i, int n, int vis[])
    {
        if (i > n)
            return 1;
        int res = 0;
        for (int j = 1; j <= n; j++)
        {
            if (!vis[j] && (i % j == 0 || j % i == 0))
            {
                vis[j] = true;
                res += dfs(i + 1, n, vis);
                vis[j] = false;
            }
        }
        return res;
    }
};
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        if (!vis[i] && (l % i == 0 || i % l == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    }
    return res;
}
// 看似轻描淡写。。但是这个结构很经典的。。
// 他能解决几乎所有的回溯问题。
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; i++)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (l % i == 0 || i % l == 0))
        {
            vis[i] = 1;
            dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (l % i == 0 || i % l == 0))
        {
            vis[i] = 1;
            dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = 1; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
// 刷套路只是锻炼思维而已。。
// 即使忘了也没事。。
// 就像你不需要记住你做了打了多少场比赛。。都在你的肌肉记忆力。。
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; i++)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; i++)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res + dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res + dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res + dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res + dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res + dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; i++)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
int dfs(int l, int n, int vis[])
{
    if (l > n)
        return 1;
    int res = 0;
    for (int i = l; i < n + 1; ++i)
        if (!vis[i] && (i % l == 0 || l % i == 0))
        {
            vis[i] = 1;
            res += dfs(l + 1, n, vis);
            vis[i] = 0;
        }
    return res;
}
// ...要量和别人区别 ，，就做足。。不然等于没有。。
// 你刷个10遍和那些没刷过的 没啥区别。。
// 一定是一个完美二叉树。。也不对 有其他条件的。
