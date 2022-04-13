#include <all.h>
using namespace std;
// 存值。。如果不用宽度。就不用存序列号。。
// 存值 写法简约非常多。
// 因为可以用来直接比较。和直接存。
class Solution
{
public:
    int trap(vector<int> &height)
    {
        if (height.size() <= 2)
        {
            return 0;
        }
        std::vector<int> left(height.size(), 0);
        std::vector<int> right(height.size(), 0);

        for (int x = 1; x < height.size() - 1; ++x)
        {
            left[x] = max(left[x - 1], height[x - 1]);
        }

        for (int x = height.size() - 2; x >= 0; --x)
        {
            right[x] = max(right[x + 1], height[x + 1]);
        }

        int ret = 0;
        for (int x = 0; x < height.size() - 1; ++x)
        {
            int tmp = min(left[x], right[x]) - height[x];
            if (tmp > 0)
            {
                ret += tmp;
            }
        }
        return ret;
    }
};
// 困难题 也可以刷。。熟悉left 和right 这种数组的构建。
// 习惯这种框架。。
// 也算是一种类型题了。
// 1 先构建left right  2 遍历一次 用两个数组的信息来迭代出我们需要的答案。