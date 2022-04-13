#include <all.h>
// #include <水的一批>
// #include <bits/stdc++.h>
// https://leetcode-cn.com/problems/maximum-value-of-k-coins-from-piles/
using namespace std;
class Solution
{
public:
    int maxValueOfCoins(vector<vector<int>> &nums, int k)
    {
        vector<int> f(k + 1);
        int sumN = 0;
        for (auto &num : nums)
        {
            int n = num.size();
            for (int i = 1; i < n; ++i)
                num[i] += num[i - 1]; // pile 前缀和
            sumN = min(sumN + n, k);  // 优化：j 从前 i 个栈的大小之和开始枚举（不超过 k）
            for (int j = sumN; j; --j)
                for (int w = 0; w < min(n, j); ++w)
                    f[j] = max(f[j], f[j - w - 1] + num[w]); // w 从 0 开始，物品体积为 w+1
        }
        return f[k];
    }
};
// 背包问题。。
#define ll long long
class Solution
{
public:
    int maxValueOfCoins(vector<vector<int>> &nums, int k)
    {
        //dp
        const int n = nums.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, INT_MIN));

        dp[0][0] = 0;
        //当前取的栈
        for (int i = 1; i <= n; ++i)
        {
            //当前栈取到第c个时的分数
            vector<int> cur{0};
            for (auto p : nums[i - 1])
                cur.push_back(cur.back() + p);
            //动态规划，遍历全部k次选择
            for (int j = 0; j <= k; ++j)
            {
                //其中cMax次是可以从当前栈中拿的
                for (int c = 0, cMax = min((int)cur.size(), j + 1); c < cMax; ++c)
                {
                    //状态转移方程
                    //我们从前i-1个栈中取出j-c个的最大得分，加上这里取出c个最大得分，即为我们取出j个时的最大得分
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - c] + cur[c]);
                }
            }
        }
        return dp[n][k];
    }
};
// 其实就是二维数组。。
// 对于1到n个桶作为横坐标
// 然后纵坐标就是 对于每个桶 1-k次 进行递增。。

// 这题并不难。

// 发现一个可以看周赛题大量题解的地方。。
// 就是比赛那个地方。。。