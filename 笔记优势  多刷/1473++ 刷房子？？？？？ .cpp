#include <all.h>
using namespace std;
//我的思考是在第2条题目的基础上设置一个交易次数的判断 X
class Bank
{
public:
    Bank(vector<long long> &balance)
    {
    }

    bool transfer(int account1, int account2, long long money)
    {
    }

    bool deposit(int account, long long money)
    {
    }

    bool withdraw(int account, long long money)
    {
    }
};
class Solution
{
public:
    int minCostII(vector<vector<int>> &nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        for (int i = 1; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                int mint = INT_MAX;
                for (int k = 0; k < m; ++k)
                {
                    if (k = j)
                        continue;
                    mint = min(mint, nums[i - 1][k]);
                }
                nums[i][j] = mint + nums[i][j];
            }
        return *min_element(nums[n - 1].begin(), nums[n - 1].end());
    }
};
class Solution
{
public:
    int minCost(vector<int> &houses, vector<vector<int>> &cost, int n, int m, int t)
    {
        for (auto &h : houses)
            h -= 1;
        // 找不到下手的角度。。。
        //前i个房子 分成j个街区。第i个房子染成第k个颜色的最小花费。
        int dp[101][101][21]{0};
        for (int i = 0; i < n; ++i)
            // 如果已经图了颜色。那么怎么处理。
            for (int j = 1; j <= t; ++j)
                for (int k = 0; k < m; ++k)
                {
                    // 如果颜色和前一个一样。他就是花费就是i-1 j k再加上这个这栋这个颜色的花费
                    // 如果颜色不和前面的一样。那么
                }
        // 给你1个小时了 。可以了。
        // 给你1个小时了 。可以了。
        // 给你1个小时了 。可以了。
        // 主要是不知道怎么去分类。有那么多特殊情况。他们之间存在怎么样的联系》》
    }
};

class Solution
{
public:
    int minCost(vector<int> &houses, vector<vector<int>> &cost, int m, int n, int target)
    {
        this->houses = houses;
        this->m = m;
        this->n = n;
        this->target = target;
        this->cost = cost;
    }
    vector<int> houses;
    vector<vector<int>> cost;
    int m, n, target;
    int dfs(int i, int target, int color)
    {
        if (target == -1 || i + target > m)
            return INT_MAX;
        if (i == m)
            return 0;
        if (houses[i] != 0)
            return dfs(i + 1, houses[i] == color ? target - 1 : target, houses[i]);
        else
            return min(dfs(i + 1, ))
    }
};
// 上面本来要转一个python的用记忆搜索的可惜他那语法太诡异了 猜不出来。。
class Solution
{
private:
    // 极大值
    // 选择 INT_MAX / 2 的原因是防止整数相加溢出
    static constexpr int INFTY = INT_MAX / 2;

public:
    int minCost(vector<int> &houses, vector<vector<int>> &cost, int m, int n, int target)
    {
        // 将颜色调整为从 0 开始编号，没有被涂色标记为 -1
        for (int &c : houses)
        {
            --c;
        }

        // dp 所有元素初始化为极大值
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(target, INFTY)));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (houses[i] != -1 && houses[i] != j)
                {
                    continue;
                }

                for (int k = 0; k < target; ++k)
                {
                    for (int j0 = 0; j0 < n; ++j0)
                    {
                        if (j == j0)
                        {
                            if (i == 0)
                            {
                                if (k == 0)
                                {
                                    dp[i][j][k] = 0;
                                }
                            }
                            else
                            {
                                dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j][k]);
                            }
                        }
                        else if (i > 0 && k > 0)
                        {
                            dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j0][k - 1]);
                        }
                    }

                    if (dp[i][j][k] != INFTY && houses[i] == -1)
                    {
                        dp[i][j][k] += cost[i][j];
                    }
                }
            }
        }

        int ans = INFTY;
        for (int j = 0; j < n; ++j)
        {
            ans = min(ans, dp[m - 1][j][target - 1]);
        }
        return ans == INFTY ? -1 : ans;
    }
};
// dfs的方式应该能好理解。。但是 没找到比较简洁的代码。
// dp 可复制性太差了。。不想看。思路不容易保留。。即使理清了。。