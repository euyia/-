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
// 保存这题是为了说明一个真相
// 所谓的困难题 只不过是 系列递进的题目。。
// 如果直接给系列3  就会觉得很难。。
// 但是其实只不过是中等题 再加一个维度而已。
// 但是其实只不过是中等题 再加一个维度而已。
// 但是其实只不过是中等题 再加一个维度而已。
// 这里。原来粉刷3个颜色。现在换成m种颜色而已。。
// 这里。原来粉刷3个颜色。现在换成m种颜色而已。。
// 这里。原来粉刷3个颜色。现在换成m种颜色而已。。
// 遍历的写法不一样而已。完全一模一样的思路。。