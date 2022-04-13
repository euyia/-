#include <all.h>
using namespace std;
// 输入：triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
// 输出：11
// 解释：如下面简图所示：
//    2
//   3 4
//  6 5 7
// 4 1 8 3
// 自顶向下的最小路径和为 11（即，2 + 3 + 5 + 1 = 11）。

class Solution
{
public:
    int mint = INT_MAX;
    // 有个编辑边界问题是n
    void dfs(int l, int c, int n, int path, vector<vector<int>> &nums)
    {
        path += nums[c][l];
        if (c == n)
        {
            mint = min(mint, path);
            return;
        }
        dfs(l, c + 1, n, path, nums);
        dfs(l + 1, c + 1, n, path, nums);
    }
    int minimumTotal(vector<vector<int>> &nums)
    {
        // 这不是白给吗，就是回溯，只有相邻的两种。。。。
        dfs(0, 0, nums.size() - 1, 0, nums);
        return mint;
    }
};
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &nums)
    {
        vector<vector<int>> dp(nums);

        for (int i = dp.size() - 2; i >= 0; --i)
            for (int j = 0; j < dp[i].size(); ++j)
                dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]) + dp[i][j];
        return dp[0][0];
    }
};

// 自底向上的优势是①可以规避边界问题，②出口dp[0]就是最终答案。
// 这个自底向上。。简直美如画。。
// dp把普通的遍历。和递归的方式都统一起来。。
// 然后又升级了。。
// 就是查表代替计算重复子问题，dp的精髓是发现那个状态转移方程。。
// dp 框架=树的递归 新的东西 即使重复子问题的处理方式+转移方程的寻找经验而已。。
