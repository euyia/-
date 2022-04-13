#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
class Solution
{
public:
    int findMinMoves(vector<int> &nums)
    {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % n != 0)
            return -1;
        int avg = sum / n;
        int ans = 0, sum1 = 0;
        for (int i = 0; i < n; ++i)
        {
            sum1 += nums[i];
            ans = max(ans, max((nums[i] - avg), abs(sum1 - (i + 1) * avg)));
            // 关键是这里。
        }
        return ans;
    }
};
// 这也有写题解。。
// 还是非晶。
// 不过这种题目还是有点价值的。。有可能的实际应用场景的。。
// 就是烧脑。。或者说要找到比较巧妙的分析角度。abs(sum1 - (i + 1) * avg)这个就不错。
// 前i个应有的数量 和实际有的数量差。
