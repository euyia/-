#include <all.h>
using namespace std;
// 这题之前还想用那个left 和right 来实现。。但是right 没有实现线性内出来。

class Solution
{
public:
    int maxProfit(vector<int> &nums)
    {
        int n = nums.size();
        int b1 = -nums.front(), s1 = 0;
        int b2 = -nums.front(), s2 = 0;
        for (int i = 1; i < n; ++i)
        {
            b1 = max(b1, -nums[i]);
            s1 = max(s1, b1 + nums[i]);
            b2 = max(b2, s1 - nums[i]);
            s2 = max(s2, b2 + nums[i]);
        }
        return s2;
    }
};
// 一个时刻 四种状态。 无论在什么状态下 我们都是为了实现我们手上的钱最多。
// 未来不可知。。要做的事情 尽早完成。200困难。挨揍。少不了的。

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // 方法对。。思路对。都是很简单的。。
        // 就像跑跑。。
        int b1 = INT_MIN, b2 = INT_MIN, s1 = 0, s2 = 0;
        for (auto p : prices)
        {
            b1 = max(b1, -p);
            s1 = max(s1, b1 + p);
            b2 = max(b2, s1 - p);
            s2 = max(s2, b2 + p);
        }
        return s2;
    }
};
//一个时刻四种状态。。但是都是要贪最多的钱。。

class Solution
{
public:
    int maxProfit(int k, vector<int> &nums)
    {
        int n = nums.size();
        vector<int> b(k, INT_MIN);
        vector<int> s(k, 0);
        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j < k; ++j)
            {
                b[j] = max(b[j - 1], -nums[i]);
                s[j] = max(s[j - 1], b[j] + nums[i]);
            }
        }
        return s[k];
    }
};

class Solution
{
public:
    int maxProfit(int k, vector<int> &nums)
    {
        if (k == 0)
            return 0;
        vector<int> b(k + 1, INT_MIN);
        vector<int> s(k + 1, 0);
        // 有什么办法把0 给统一进去
        // 从1 开始作为有效值。。
        for (auto n : nums)
        {
            for (int i = 1; i <= k; ++i)
            {
                b[i] = max(b[i], s[i - 1] - n);
                s[i] = max(s[i], b[i] + n);
            }
        }
        return s[k];
    }
};
// 统一了。。
// 这里主要是比他和他前一个比。。他的前一个 位置也是i不是s[i-1];
// 并列的。。
// 整个数组做迭代。。。这还是第一次见。。。。
// 真个数组 对于每个num 都做迭代。。酷。。。好酷。。