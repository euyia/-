#include <all.h>
using namespace std;
// 有点像希尔排序。=分组+插入排序
// 后缀和 预计算
// 避免重复计算
// 根号n是为界限 是分块常用的界限。。

// 干起来  刷到够本。。
class Solution
{
public:
    vector<int> solve(vector<int> &nums, vector<vector<int>> &a)
    {
        //  这是自己写的爆掉。。
        vector<int> dp(a.size(), 0);
        for (int i = 0; i < a.size(); ++i)
        {
            for (int j = a[i][0]; j < nums.size(); j += a[i][1])
            {
                dp[i] += nums[j];
            }
        }
        return dp;
    }
};
class Solution
{
public:
    vector<int> solve(vector<int> &nums, vector<vector<int>> &queries)
    {
        int mod = 1e9 + 7;
        int n = nums.size();

        int j = floor(sqrt(n));
        // floor 向下取整。。我感觉没有也可以 不过既然人家也写了。。肯定有某种必要性。

        int dp[j + 1][n + 1];
        memset(dp, 0, sizeof(dp));
        // 他这样写 有两个好处 可以用变量声明数组。而且能初始化为0 。。
        // 这样 能获得两个好处1 静态数组的速度 2 大小能确定下来。3又能初始化
        for (int i = 1; i < j + 1; i++) //步长
        {
            for (int k = n - 1; k >= n - i; k--) //起点
                dp[i][k] = nums[k] % mod;

            for (int k = n - 1 - i; k >= 0; k--)
                dp[i][k] = (dp[i][k + i] + nums[k]) % mod;
        }
        // 这个k 就是到时候x1的起始点把。。然后这个i 就是对应的y1.。
        // 确实是这样。。
        // 其实还是dp的思想 就是做预处理。。然后一部分查表直接。。一部分暴力。。
        vector<int> res;
        for (auto &q : queries)
        {
            int xi = q[0], yi = q[1];
            if (yi <= j)
            {
                res.push_back(dp[yi][xi]);
            }
            else
            {
                int cursum = 0;
                for (int j = xi; j < n; j += yi)
                    cursum = (cursum + nums[j]) % mod;
                res.push_back(cursum);
            }
        }

        return res;
    }
};

class Solution
{
public:
    vector<int> solve(vector<int> &nums, vector<vector<int>> &a)
    {
        int mod = 1e9 + 7;
        int n = nums.size();
        int k = floor(sqrt(n));
        int dp[k + 1][n + 1];
        // 然后这里为什么要多留一个位置。？？
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < k + 1; ++i)
        {
            // 这两个分段是衔接的。。
            // 一个从n到 n-i 一段是从n-i-1到0.。。。。。
            for (int j = n - 1; j >= n - i; j--)
                // 因为起始的就是从xi开始累加的。。所以后缀和也是到这里终止。
                // 这边为什么是边界为n-i
                dp[i][j] = nums[k] % mod;
            for (int j = n - i - 1; j >= 0; --j)
                // 这边取的第一个j一定确保是跳过最后一个了。。
                // 然后下面的i+j 才能取到最后一个。。
                // 也就是这里是从倒数第二个开始处理。

                dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
        }

        vector<int> res;
        for (auto q : a)
        {
            int xi = q[0], yi = q[1];
            if (yi <= k)
                res.push_back(dp[yi][xi]);
            else
            {
                int curmax = 0;
                for (int i = xi; i < n; i += yi)
                    curmax = (curmax + nums[i]) % mod;
                res.push_back(curmax);
            }
        }
        return res;
    }
};
// 磕磕碰碰算是写下来了。
// 这里主要是前缀和的处理的时候的方式。。
// 分块思想比较特别。。
// 其他也没别的。
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int n = nums.size();
    int mod = 1e9 + 7;
    int k = floor(sqrt(n));
    int dp[k + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k + 1; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - i - 1; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int xi = a[i][0], yi = a[i][1];
        if (yi <= k)
            res.push_back(dp[yi][xi]);
        else
        {
            int maxt = 0;
            for (int i = xi; i < n; i += yi)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
// 前期的理解铺垫 就是为了这一刻的刷。。。
// 干起来。。刷到够本。。
// 就像你找了个老婆。。不那个啥一样。。
// 。。
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int mod = 1e9 + 7;
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - i - 1; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int x = a[i][0], y = a[i][1];
        if (y < k)
            res.push_back(dp[y][x]);
        else
        {
            int maxt = 0;
            for (int i = x; i < n; i += y)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int mod = 1e9 + 7;
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - 1 - i; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i][0], r = a[i][1];
        if (r < k)
            res.push_back(dp[r][l]);
        else
        {
            int maxt = 0;
            for (int i = l; i < n; i += r)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
const int mod = 1e9 + 7;
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - 1 - i; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i][0], r = a[i][1];
        if (r < k)
            res.push_back(dp[r][l]);
        else
        {
            int maxt = 0;
            for (int i = l; i < n; i += r)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - 1 - i; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i][0], r = a[i][1];
        if (r < k)
            res.push_back(dp[r][l]);
        else
        {
            int maxt = 0;
            for (int i = l; i < n; i += r)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - 1 - i; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i][0], r = a[i][1];
        if (r < k)
            res.push_back(dp[r][l]);
        else
        {
            int maxt = 0;
            for (int i = l; i < n; i += r)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - 1 - i; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i][0], r = a[i][1];
        if (r < k)
            res.push_back(dp[r][l]);
        else
        {
            int maxt = 0;
            for (int i = l; i < n; i += r)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - 1 - i; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[i]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i][0], r = a[i][1];
        if (r < k)
            res.push_back(dp[r][l]);
        else
        {
            int maxt = 0;
            for (int i = l; i < n; i += r)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - 1 - i; j >= 0; --j)
            dp[i][j] = (dp[i][j + i] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i][0], r = a[i][1];
        if (r < k)
            res.push_back(dp[r][l]);
        else
        {
            int maxt = 0;
            for (int i = l; i < n; i += r)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}
vector<int> soso(vector<int> &nums, vector<vector<int>> &a)
{
    int n = nums.size();
    int k = floor(sqrt(n));
    int dp[k][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < k; ++i)
    {
        for (int j = n - 1; j >= n - i; --j)
            dp[i][j] = nums[j] % mod;
        for (int j = n - 1 - i; j >= 0; j--)
            dp[i][j] = (dp[i][j] + nums[j]) % mod;
    }
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i][0], r = a[i][1];
        if (r < k)
            res.push_back(dp[r][l]);
        else
        {
            int maxt = 0;
            for (int i = l; i < n; i += r)
                maxt = (maxt + nums[i]) % mod;
            res.push_back(maxt);
        }
    }
    return res;
}

// 所谓的难题。。其实就是比较有内容的题目。。有机会还是要多多刷。
// 而且我有这个条件。。
// 刷难题的方式非常适合我。。
// 1 我有固定的整段的时间去理解。。+2 我能快的的刷。。能吸收下来。。
// 所以刷所谓的困难题非常适合我。。