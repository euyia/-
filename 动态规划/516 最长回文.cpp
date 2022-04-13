#include <all.h>
using namespace std;

// 输入：s = "bbbab"
// 输出：4
// 解释：一个可能的最长回文子序列为 "bbbb" 。

// 这里的dp定义很牛。。这个非常重要。
// i j 他不是具体的ij字符。。而是 i到j长度的。。
// 我感觉从前往后滑也是可以的。？？？？？？？？？回头尝试下。因为只要是范围从小到大的。就行
// 然后 他这里。。i 表示的是列~~！！！！！！！！
// 行和列是本质上一样的。。但是你心理要把他当做行还是列就就可以了。。
// 就像下标和长度 一样。你只要在使用过程中去知道它是什么就可以了。。
// 只有你自己知道。。只要你自己清晰知道就可以了。。没有规定。
class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {
        int n = s.size();
        if (n < 2)
            return n;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
            dp[i][i] = 1;
        // 但是这个一个有意义吗。
        // 有意义。。。他确实就是那样能加上去。。很神奇。。
        // 不然按理说 1个是没有意义的。。因为回文对 这边是不包括单数的那种
        // 中间夹一个的那个情况的。。
        // 但是这里就是看可以用到。。所以说 这个框架就是牛。。

        for (int i = n - 2; i >= 0; i--)
            for (int j = i + 1; j < n; j++)
                if (s[i] == s[j])
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
        return dp[0][n - 1];
    }
};
// 这个不知道是哪个高手的。。。优化了。
// 速度快了5倍。。。
// 后来发现。。是这个静态数组。。造成了一倍的速度差。。
// 差距就不是他别大。。

// 这题本质上是滑动窗口。
// 因为ij的定义就是一段距离。
// 但是这里又需要用到之前的数据。。所以。。又是dp拿手的。。
// 不然滑动窗口 可以用一维的就行了。。
// 下面这个就是了。

class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {
        int l = s.length(), dp[1001] = {1};

        for (int i = 1; i < l; i++)
        {
            int last = dp[i];
            dp[i] = 1;
            for (int j = i - 1; j >= 0; j--)
            {
                int new_last = dp[j];
                if (s[i] == s[j])
                {
                    dp[j] = 2 + last;
                }
                else
                {
                    dp[j] = max(dp[j], dp[j + 1]);
                }
                last = new_last;
                // 这个last 有两个地方在迭代他的值。
                // 一个是每次外层的for 。。
                // 二是 每次的内层for 但是内层第一次的时候使用的是外层的。
            }
        }
        return dp[0];
    }
};
class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {
        int n = s.size();
        if (n < 2)
            return n;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i)
            dp[i][i] = 1;
        // 主要是这个dp的定义。。非常牛逼。。。
        // i-j的最长。。还有这样的定义方式
        for (int i = n - 2; i > 0; --i)
            for (int j = i + 1; j < n; ++j)
                if (s[i] == s[j])
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                else
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        return dp[0][n - 1];
    }
};
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {0};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; i--)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {0};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; i--)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {0};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; i--)
        for (int j = i + 1; i < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {0};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; i--)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
        {
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; i--)
        for (int j = i + 1; j < n; ++j)
        {
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
        {
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1001][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
    return dp[0][n - 1];
}
int soso(string s)
{
    int n = s.size();
    if (n < 2)
        return n;
    int dp[1010][1001] = {};
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
    for (int i = n - 2; i >= 0; --i)
        for (int j = i + 1; j < n; ++j)
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    return dp[0][n - 1];
}
// 其实就是填表。。用到之前的。。
// 调表的路线。就根据转移方程的便利性。。
// 这里因为状态转移。。他需要i+1;所以 i要反向遍历。。