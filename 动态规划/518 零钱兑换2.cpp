#include <all.h>
using namespace std;
// 输入：amount = 5, coins = [1, 2, 5]
// 输出：4
// 解释：有四种方式可以凑成总金额：
// 5=5
// 5=2+2+1
// 5=2+1+1+1
// 5=1+1+1+1+1
// 这种思路你怎么想的出来？？
// 他其实是5是dp[4]+dp[3]...这种加起来。。是一样的。
// 但是它从另外的一个角度 去算的
// 比如我们是纵向的观察到的。。但是它却横向的去写。。
class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        vector<int> dp(amount + 1);
        dp[0] = 1;
        for (int &coin : coins)
        {
            for (int i = coin; i <= amount; i++)
            {
                dp[i] += dp[i - coin];
            }
        }
        return dp[amount];
    }
};
// 再找下别的解法把。。这优点费劲。

class Solution
{
public:
    string pushDominoes(string dominoes)
    {
    }
};