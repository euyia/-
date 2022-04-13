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
    int maximalSquare(vector<vector<char>> &nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        int res = 0;
        vector<vector<int>> dp(n, (vector<int>(m, 0)));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                if (nums[i][j] == '1')
                    if (i == 0 || j == 0)
                        dp[i][j] == 1;
                    else
                        dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                res = max(dp[i][j], res);
            }
        return res * res;
    }
};
// dp写起来还是很简单的。。就是这个关系不好找。。