#include <all.h>
using namespace std;
// 主要是下标
// 一种是直接去序列。这样取值 dp的下标会和nums 是吻合的
// 另外一种是dp+1； 下标表示的是个数。。
// 这种也可行。。。只要可行 就行。。

// 官方也是和nums同步的序列号。。
// 如下
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        int size = nums.size();
        if (size == 1)
        {
            return nums[0];
        }
        vector<int> dp = vector<int>(size, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < size; i++)
        {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[size - 1];
    }
};

int rob(vector<int> &nums)

{
    int n = nums.size();
    if (n = 0)
        return 0;
    if (n = 1)
        return nums[0];
    vector<int> res(n);
    res[0] = nums[0];
    res[1] = max(nums[1], nums[0]);
    for (int i = 1; i < n; ++i)
    {
        res[i] = max(res[i - 1], nums[i] + i - 2 >= 0 ? nums[i - 2] : 0);
    }
    return res[n - 1];
}
// 或者写死01 从2 开始遍历。
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    int res[100]{0};
    res[0] = nums[0];
    res[1] = max(nums[1], nums[0]);
    for (int i = 2; i < n; ++i)
        res[i] = max(res[i - 1], res[i - 2] + nums[i]);
    return res[n - 1];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    if (n == 0)
        return 0;
    int dp[100]{0};
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    int dp[100]{0};
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    int dp[100]{0};
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    if (n == 0)
        return 0;
    int dp[100]{0};
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    int dp[100]{0};
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    int dp[100]{0};
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
}
// 就是刷。。就是做没有感情的刷题机器 锻炼思维的肌肉记忆。。
// 这是最快的 最笨的。也是最靠谱的。
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    int dp[100]{0};
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    int dp[100]{0};
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
}
// 多刷代码。。才会成为你的思路。。你的思维才会真的宽广。。

int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[101][2]{0};
    dp[0][0] = 0;
    dp[0][1] = nums[0];
    for (int i = 1; i < n; ++i)
    {
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
        dp[i][1] = dp[i - 1][0] + nums[i];
    }
    return max(dp[n - 1][0], dp[n - 1][1]);
}
// 这样写感觉是更容易理解的。