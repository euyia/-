#include <all.h>
using namespace std;
class Solution
{
public:
    int earliestFullBloom(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res(nums1.size());
        iota(res.begin(), res.end(), 0);
        sort(res.begin(), res.end(), [&](int i, int j)
             { return nums2[i] > nums2[j]; });
        int ans = 0, day = 0;
        for (int i : res)
        {
            day += nums1[i];
            ans = max(ans, day + nums2[i]);
        }
        return ans;
    }
};
class Solution
{
public:
    int earliestFullBloom(vector<int> &p, vector<int> &g)
    {
        vector<int> ord(p.size());
        iota(ord.begin(), ord.end(), 0);
        sort(ord.begin(), ord.end(), [&](int x, int y)
             { return g[x] < g[y]; });
        int ans = 0, psum = 0;
        for (int i : ord)
        {
            psum += p[i];
            ans = max(ans, psum + g[i]);
        }
        return ans;
    }
};
// 这题主要是贪心的思路理解了就非常简单。
// 就是贪两个东西
// 1 让grow长的尽量放前面。
// 2 让每个plant完整的 连续的。

// 之前错误的写法是贪 两者的和。。最大的先种。
// plant+grow的和。。