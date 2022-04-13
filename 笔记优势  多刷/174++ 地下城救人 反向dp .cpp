#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
// 多学习好的解题方法。。然后多把时间花在这个上面。这才是学习。。
// 研究也是需要的。。但是目前更多的应该是模仿。。才是。。
// 时间占比大的应该放在模仿上。。。直接形成正确的动作习惯。。这才是聪明的 不造轮子。
// 目前。。但是只是目前。。造轮子是早晚的。。因为造轮子的人才是有灵魂的。
class Solution
{
public:
    int calculateMinimumHP(vector<vector<int>> &nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX / 2));
        for (int i = n - 1; i >= 0; i--)
            for (int j = m - 1; j >= 0; j--)
            {
                int l = max(1, dp[i + 1][j] - nums[i][j]);
                int r = max(1, dp[i][j + 1] - nums[i][j]);
                dp[i][j] = min(l, r);
            }
        return dp[0][0];
    }
};
// 不让发 我就自己记录在这边就可以了。。
// 一样的。。本来就是当做自己的草稿的地方。
// 既然他那边宽容度不行。。
// 那就回到自己能控制的空间。
// 总结下
// 这题

class Solution
{
public:
    int calculateMinimumHP(vector<vector<int>> &nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX / 2));
        dp[0][1] = 1;
        dp[1][0] = 1;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                int cur = min(dp[i + 1][j], dp[i][j + 1]) - nums[i - 1][j - 1];
                // 就是如果小于0 那么就是需要的数量是多余的
                // 这个初始化为1  的理解 是理解这题的核心。
                // 这个初始化为1  的理解 是理解这题的核心。
                // 这个初始化为1  的理解 是理解这题的核心。
                dp[i][j] = max(1, cur);
            }
        return dp[n][m];
    }
};

// 正向的就走不通。。很奇怪。。