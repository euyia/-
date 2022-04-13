#include <all.h>
using namespace std;
class Solution
{
public:
    int numWays(int n, int k)
    {
        // 我能努力的就是尽量的拉伸
        // 希望自己能建立起来的思路。。应该要有的思路。。就去刷。
        // 把一些关闭在自己的生活之外。禁止。既然都是外人。。自己全神贯注。。
        //     这题绝对动态，不能用回溯。
        //     Dp i有多少种，还要另外一个信息，就是他是什么颜色，还有他是第一根还是第二根。。但是k太大了。。要怎么去概括？？？？抽象？？？
    }
};

class Solution
{
public:
    int numWays(int n, int k)
    {
        // k种颜色 n个位置。
        int dp[n][2];
        dp[0][0] = k;
        dp[0][1] = k;
        // 0 位置 他是第一个 不和前面的一样  1位置他是第二个同色的。和前面的一样。
        for (int i = 1; i < n; ++i)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]) * (k - 1);
            dp[i][1] = dp[i - 1][0];
        }
        return max(dp[n - 1][0], dp[n - 1][1]);
    }
};

class Solution
{
public:
    int numWays(int n, int k)
    {
        int dp[n + 1];
        for (int i = 1; i <= n; ++i)
        {
            if (i == 1)
                dp[i] = k;
            else if (i == 2)
                dp[i] = k * k;
            else
                dp[i] = dp[i - 1] * (k - 1) + dp[i - 2] * (k - 1);
        }
        return dp[n];
    }
};
// 主要是dp转移方程不好理解。。
// 他是说 如果和前面的一样。那么结果就依赖i-2的*k-1;
// 如果和前面不一样 那么久依赖i-1的 *k-1;
//
// 但是我觉得 如果颜色和i-1一样 那么不应该就是等于i-1
// 然后和i-1不一样。。就是i-1*k-1吗。。
// 那相加不是dp[i]=dp[i-1]*k........??????