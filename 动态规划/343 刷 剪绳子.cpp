#include <all.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 数字拆分之后乘积最大的拆分方式。。
// 这题还有优化到 线性的时间复杂度 。。不过需要很多推导。。
// 这里比较妙的是。。
// 对之前的计算过的 进行记录。。这就是dp的精髓。。不然是2的n次方的时间复杂度。
class Solution
{
public:
    int integerBreak(int n)
    {
        // 然后这里的dp 0呢。。都没定义吗。
        vector<int> dp(n + 1);
        for (int i = 2; i <= n; ++i)
        {
            int curmax = 0;
            for (int j = 1; j <= i / 2; ++j)
            {
                // 只取前半短。后半段 比如4.6  和6.4 是等价的。
                curmax = max(curmax, max(j * (i - j), j * (dp[i - j])));
            }
            dp[i] = curmax;
        }
        return dp[n];
    }
};
// 这个题可以刷刷。。有助于吸收理解。
// 还是很秒的。。
// dp很多题型 都是秒的。。
// 闪烁着智慧的之光。。。。。。闪烁着睿智。。。
int dfs(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i <= n; ++i)
    {
        int maxt = 0;
        for (int j = 1; j < i / 2; ++i)
            maxt = max(maxt, max(j * (i - j), j * dp[i - j]));
        dp[i] = maxt;
    }
    return dp[n];
}
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i <= n; ++i)
    {
        int maxt = 0;
        for (int j = 1; j < i / 2; ++j)
            maxt = max(maxt, max(j * (i - j), j * dp[i - j]));
        dp[i] = maxt;
    }
    return dp[n];
}
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i <= n; ++i)
    {
        int res = 0;
        for (int j = 1; j < i / 2; ++j)
            res = max(res, max(j * (i - j), j * dp[i - j]));
        dp[i] = res;
    }
    return dp[n];
}
// 刷的时候应该想一个问题。。怎么把这个题 类型化。归类到root里。。
// 不断的思考 这题属于那个类型。。
// 这题的root在哪里。。？？？？？
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i < n + 1; ++i)
    {
        int res = 0;
        for (int j = 1; j < i / 2; ++j)
            res = max(res, max(j * (i - j), j * dp[i - j]));
        dp[i] = res;
    }
    return dp[n];
}
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i < n + 1; ++i)
    {
        int res = 0;
        for (int j = 1; j < i / 2; ++j)
            res = max(res, max(j * (i - j), j * dp[i - j]));
        dp[i] = res;
    }
    return dp[n];
}
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i < n + 1; ++i)
    {
        int res = 0;
        for (int j = 1; j < i / 2; ++j)
            res = max(res, max(j * (i - j), j * dp[i - j]));
        dp[i] = res;
    }
    return dp[n];
}
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i < n + 1; ++i)
    {
        int res = 0;
        for (int j = 1; j < i / 2; ++j)
            res = max(res, max(j * (i - j), j * dp[i - j]));
        dp[i] = res;
    }
    return dp[n];
}
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i < n + 1; ++i)
    {
        int res = 0;
        for (int j = 1; j < i / 2; ++j)
            res = max(res, max(j * (i - j), j * dp[i - j]));
        dp[i] = res;
    }
    return dp[n];
}
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i < n + 1; i++)
    {
        int res = 0;
        for (int j = 1; j < i / 2; ++j)
            res = max(res, max(j * (i - j), j * dp[i - j]));
        dp[i] = res;
    }
    return dp[n];
}
// 值得一刷。。
// i为什么2开始 不是1
// 为什么j两数相乘就可以代表i这个数的所有情况。。？
// 刷就是做拉升。。刷到断。。。要足量的。。
int soso(int n)
{
    vector<int> dp(n + 1);
    for (int i = 2; i < n + 1; i++)
    {
        int res = 0;
        for (int j = 1; j < i / 2; ++j)
            res = max(res, max(j * (i - j), j * dp[i - j]));
        dp[i] = res;
    }
    return dp[n];
}