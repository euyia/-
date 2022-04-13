#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &coins, int sum)
    {
        int Max = sum + 1;
        vector<int> dp(sum + 1, INT_MAX);
        dp[0] = 0;
        for (int cur = 1; cur <= sum; ++cur)
        {
            for (int coin : coins)
            {
                int lsum = cur - coin;
                if (lsum < 0 || dp[lsum] == INT_MAX)
                {
                    continue;
                }
                dp[cur] = min(dp[cur], dp[lsum] + 1);
            }
        }

        return dp[sum] == INT_MAX ? -1 : dp[sum];
    }
};
// 还是b栈那个书森书院的 。。
//  动态规划 刷起来哇。。。感觉动态规划。。
// 他说动态规划就是用空间换时间。。。
// 动态规划都能解决一些很有趣的问题。。。。。。