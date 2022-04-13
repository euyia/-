#include <all.h>
using namespace std;
// 输入：nums = [2,2,3,3,3,4]
// 输出：9
// 解释：
// 删除 3 获得 3 个点数，接着要删除两个 2 和 4 。
// 之后，再次删除 3 获得 3 个点数，再次删除 3 获得 3 个点数。
// 总共获得 9 个点数。

// 还是很有思辨性的这题。
// 还是很有思辨性的这题。
// 还是很有思辨性的这题。
// 自己偷和不偷。。是一个维度的分类。。i-1是否=i 也会在另外一个维度 进行限制。

// 打家劫舍 树状的。。衍生题。
// 多了一个限制 就是前后值是否一样。这个分类。
// 如果前后相同 他不偷的话。前面也是不能偷的。。所以。这题还是有区别的。。
// 关键是分类。。分做自己偷  和自己不偷。。的情况 分别的最大值
// 自己如果不偷。那么就取i-1所有可能的最大值。自己要偷。。如果是前一个+1 那就只能取i-1 不偷的
class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int dp[n][2];
        dp[0][0] = 0;
        dp[0][1] = nums[0];
        for (int i = 1; i < n; ++i)
        {
            if (nums[i] == nums[i - 1])
            {
                dp[i][1] = dp[i - 1][1] + nums[i];
                dp[i][0] = dp[i - 1][0];
            }
            else
            {
                if (nums[i] == nums[i - 1] + 1)
                {
                    dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
                    dp[i][1] = dp[i - 1][0] + nums[i];
                }
                else
                {
                    dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
                    dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]) + nums[i];
                }
            }
        }
        return max(dp[n - 1][0], dp[n - 1][1]);
    }
};