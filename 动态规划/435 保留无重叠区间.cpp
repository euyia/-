#include <all.h>
using namespace std;
// 保留无重叠的。
// intervals: {{1, 2}, {2, 3}, {1, 3}, {3, 4}}
// n: 4
// right: 2
// ans: 0
// 排完是这样子。。
// ans是统计能保留的个数。然后返回n-ans 就是删除的。
class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        if (intervals.empty())
        {
            return 0;
        }

        sort(intervals.begin(), intervals.end(), [](const vector<int> &u, const vector<int> &v)
             { return u[1] < v[1]; });

        int n = intervals.size();
        int right = intervals[0][1];
        int ans = 1;
        for (int i = 1; i < n; ++i)
        {
            if (intervals[i][0] >= right)
            {
                ++ans;
                right = intervals[i][1];
            }
        }
        return n - ans;
    }
};
// 思路有 。。就是证明他的可行性而已。。
// 不会在这种题卡主。。
// 继续下一题。。你个渣男