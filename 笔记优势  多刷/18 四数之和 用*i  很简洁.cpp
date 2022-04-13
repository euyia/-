#include <all.h>
using namespace std;
// 你已被移出这个世界。
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
       vector<vector<int>> ret;
        if (nums.size() < 4)
        {
            return ret;
        }
       sort(nums.begin(), nums.end());
        auto begin = nums.begin();
        auto end = nums.end();
        for (auto i = begin; i < end - 3; ++i)
        {
            if (i > begin && *i == *(i - 1))
            {
                continue;
            }
            if (long(*i) + *(i + 1) + *(i + 2) + *(i + 3) > target)
            {
                continue;
            }
            if (long(*i) + *(end - 3) + *(end - 2) + *(end - 1) < target)
            {
                continue;
            }
            for (auto j = i + 1; j < end - 2; ++j)
            {
                if (j > i + 1 && *j == *(j - 1))
                {
                    continue;
                }
                auto k = j + 1;
                auto l = end - 1;
                while (k < l)
                {
                    long sum = long(*i) + *j + *k + *l;
                    if (sum < target)
                    {
                        ++k;
                    }
                    else if (sum > target)
                    {
                        --l;
                    }
                    else
                    {
                        ret.push_back({*i, *j, *k, *l});
                        ++k;
                        --l;
                        while (*k == *(k - 1) && *l == *(l + 1) && k < l)
                        {
                            ++k;
                            --l;
                        }
                    }
                }
            }
        }
        return ret;
    }
};
// 他这边都采用迭代器和*i方式来取值。。
// 看起来就非常清爽。。。