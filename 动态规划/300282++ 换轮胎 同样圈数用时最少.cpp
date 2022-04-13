#include <all.h>
using namespace std;
class Solution
{
public:
    int minimumFinishTime(vector<vector<int>> &nums, int time, int c)
    {
        // 最少时间、
        // 这个数据很大。应该使用dp
        // 如果只有一种轮胎。。花的最少是？
        //跑一圈 1圈的最优 到2圈的最优。。这个维度也可以dp
        // 那二维dp？ 一圈一个轮胎为起点？
        // 那二维dp？ 一圈一个轮胎为起点？
        // 那二维dp？ 一圈一个轮胎为起点？
        int n = nums.size();
        int dp[n + 1][c + 1];
        int mint = INT_MAX;
        for (auto n : nums)
            mint = min(mint, n[0]);
        for (int i = 0; i < n + 1; ++i)
            dp[i][1] = mint;
        // 这个是要前n个最小的 那么顺序就有意义？？那这个dp的稳定性？、
    }
};
class Solution
{
public:
    int minimumFinishTime(vector<vector<int>> &nums, int changeTime, int numLaps)
    {
        vector<int> dp(18, INT_MAX / 2); // 除二是防止下面计算状态转移时溢出
        for (auto &n : nums)
        {
            long time = n[0];
            for (int i = 1, sum = 0; time <= changeTime + n[0]; ++i)
            {
                sum += time;
                dp[i] = min(dp[i], sum);
                time *= n[1];
            }
        }

        vector<int> f(numLaps + 1, INT_MAX);
        f[0] = -changeTime;
        for (int i = 1; i <= numLaps; ++i)
        {
            for (int j = 1; j <= min(17, i); ++j)
                f[i] = min(f[i], f[i - j] + dp[j]);
            f[i] += changeTime;
        }
        return f[numLaps];
    }
};

class Solution
{
public:
    int minimumFinishTime(vector<vector<int>> &nums, int time, int cnt)
    {
        // 这题核心是判断 不会超过17次自己连续。因为是指数级增长。。
        vector<int> dp(18, INT_MAX / 2);
        for (auto n : nums)
        {
            long t = n[0];
            // 这里是从1开始的。0 没有意义
            for (int i = 1, sumt = 0; sumt <= time + n[0]; ++i)
            {
                sumt += t;
                dp[i] = min(dp[i], sumt);
                t *= n[1];
            }
        }
        int f[cnt + 1];
        f[0] = -time;
        // 这个初始化为-time
        for (int i = 1; i < cnt + 1; ++i)
        {
            // 这边必须等号。。还有这个min的写法 也比较灵性。
            for (int j = 1; j <= min(17, i); ++j)
                f[i] = min(f[i], f[i - j] + dp[j] + time);

            // 这个其实可以加在上面那hang。
        }
        return f[cnt];
    }
};