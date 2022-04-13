#include <all.h>
using namespace std;
// 1879题也是。。。主要这个<< 这种符号。。我看着头大。。
class Solution
{
public:
    int maximumANDSum(vector<int> &nums, int numSlots)
    {
        int ans = 0;
        vector<int> f(1 << (numSlots * 2));
        for (int i = 0; i < f.size(); ++i)
        {
            int c = __builtin_popcount(i);
            if (c >= nums.size())
                continue;
            for (int j = 0; j < numSlots * 2; ++j)
            {
                if ((i & (1 << j)) == 0)
                { // 枚举空篮子 j
                    int s = i | (1 << j);
                    f[s] = max(f[s], f[i] + ((j / 2 + 1) & nums[c]));
                    ans = max(ans, f[s]);
                }
            }
        }
        return ans;
    }
};
