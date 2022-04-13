#include <all.h>
using namespace std;
// 这题就累加差值 就能解决了。。非要想dp解法。。
// 。。我擦。
// 输入: prices = [7,1,5,3,6,4]
// 输出: 7
// 解释: 在第 2 天（股票价格 = 1）的时候买入，在第 3 天（股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5-1 = 4 。
//      随后，在第 4 天（股票价格 = 3）的时候买入，在第 5 天（股票价格 = 6）的时候卖出, 这笔交易所能获得利润 = 6-3 = 3 。

class Solution
{
public:
    int maxProfit(vector<int> &nums)
    {
        int n = nums.size();
        int maxt = 0;
        if (n == 1)
            return 0;
        for (int i = 1; i < n; ++i)
            if (nums[i] > nums[i - 1])
                maxt += nums[i] - nums[i - 1];
        return maxt;
    }
};