#include <all.h>
using namespace std;
// 这题核心是环问题。。
// 转化成去头和去尾的两次结果。。

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        // 竟然转化成不偷第一间剩下的序列，和不偷最后一间，两种情况取最大，。。。没有一气呵成的解法吗？？？？？
        // 感觉这种分开突破的方式，在家想思路，电脑前实现，，，效率非常高，在那边总是在碰到题目的第一时间头疼，但是在家里因为不写，只想思路反而感觉很好入手。。。感觉随便想个十几二十个都没问题
        int maxt = 0;
        // 这个全程记录。最大值。。这样就不用去声明两个dp数组 第二次直接覆盖。
        int dp[101][2]{0};
        int n = nums.size();
        dp[0][0] = 0;
        dp[0][1] = 0;
        for (int i = 1; i < n; ++i)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = dp[i - 1][0] + nums[i];
        }
        maxt = max(dp[n - 1][0], dp[n - 1][1]);
        dp[0][0] = 0;
        dp[0][1] = nums[0];
        for (int i = 1; i < n; ++i)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = dp[i - 1][0] + nums[i];
        }
        maxt = max(dp[n - 1][0], maxt);
        return maxt;
    }
};

class Solution
{
public:
    /*
环状排列意味着第一个房子和最后一个房子中只能选择一个偷窃，
因此可以把此环状排列房间问题约化为两个单排排列房间子问题(198)：
在不偷窃第一个房子的情况下（即 nums[1:]），最大金额是p1；
在不偷窃最后一个房子的情况下（即 nums[:n-1]），最大金额是p2。
综合偷窃最大金额： 为以上两种情况的较大值，即 max(p1,p2)。
*/
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        int Max1 = rob1(nums, 0, n - 1); //不偷窃最后一个房子
        int Max2 = rob1(nums, 1, n);     //不偷窃第一个房子
        return max(Max1, Max2);
    }
    int rob1(vector<int> &nums, int start, int end)
    {
        /*
        动态转移方程是：
        f(n)=max(nums[n]+f(n-2),f(n-1))
        prevMax:f(k-2)
        currMax:f(k-1)
        x:Ak
        */
        int prevMax = 0;
        int currMax = 0;
        for (int i = start; i < end; i++)
        {
            int temp = currMax;
            currMax = max(nums[i] + prevMax, currMax);
            prevMax = temp;
        }
        return currMax;
    }
};

// 上面这个是封装+优化空间的。。这题比较正规的一个写法吧。
// 看起来也比较优美的。。因为封装了 两次调用。
// 但是我写的那个更好理解。。而且也可以封装的。。
// 但是都不是关键
// 这题关键。还是把环的问题。转化成为两种线性的问题。