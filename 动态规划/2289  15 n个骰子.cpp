#include <all.h>
using namespace std;
// https : //leetcode-cn.com/problems/nge-tou-zi-de-dian-shu-lcof/solution/jian-zhi-offer-60-n-ge-tou-zi-de-dian-sh-z36d/
// 其实就是那个地推公式。
// 也很好理解。
// 比如你要求3个筛子 和为6的答案。。
// 可以分解为 dp[2(两个筛子),5（和为5）]的概率 *1/6（也就是扔出1的概率）
// +dp[2(两个筛子),4（和为5）]的概率 *1/6（也就是扔出2的概率）
// dp[2(两个筛子),3（和为5）]的概率 *1/6（也就是扔出3的概率）
// +....等等 总共六种情况的和。。

// 其实就是 dp[n,x]= dp[n-1,各种小于当前x值的所有dp（严格小于，因为比如1 你不能左边扔出1 右边扔出0）]的概率和*1/6
class Solution
{
public:
    vector<double> dicesProbability(int n)
    {
        vector<double> dp(6, 1.0 / 6.0);
        for (int i = 2; i <= n; i++)
        {
            vector<double> tmp(5 * i + 1, 0);
            for (int j = 0; j < dp.size(); j++)
            {
                for (int k = 0; k < 6; k++)
                {
                    tmp[j + k] += dp[j] / 6.0;
                }
            }
            dp = tmp;
            // 不论大小 能姐姐拷贝的。。这也是牛逼。明显两个数组不一样大。
            // 他只是拷贝了地址吧。
        }
        return dp;
    }
};
// 找规律的。。先抄了。

class Solution
{
public:
    vector<double> dicesProbability(int n)
    {
        vector<double> dp(6, 1.0 / 6.0);
        for (int i = 2; i <= n; i++)
        {
            vector<double> tmp(6 * i + 1, 0);
            for (int j = i - 1; j < 6 * i + 1; ++j)
            {
                for (int k = 0; k < j; ++k)
                {
                    tmp[j] = dp[k] * 1 / 6;
                }
            }
            dp = tmp;
            // 不论大小 能姐姐拷贝的。。这也是牛逼。明显两个数组不一样大。
            // 他只是拷贝了地址吧。
        }
        return dp;
    }
};