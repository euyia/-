#include <all.h>
using namespace std;
// 这题是要求返回所有 连续的+相加为target的数组。。
// 他这里动态添加的方式很帅。。有dp的味道。。
// 因为每一个是从上一个的结果 修正而来。不是重头来。
class Solution
{
public:
    vector<vector<int>> findContinuousSequence(int target)
    {
        int i = 1, j = 2, s = 3;
        // 这里妙在其实已经算是动态规划了。
        // 因为这里的下一个值。。其实是来自于上一个值的变动更改而来的。
        // 不是从新算。。
        vector<vector<int>> res;
        while (i < j)
        {
            if (s == target)
            {
                vector<int> ans;
                for (int k = i; k <= j; k++)
                    ans.push_back(k);
                res.push_back(ans);
            }
            if (s >= target)
            {
                s -= i;
                i++;
            }
            else
            {
                j++;
                s += j;
            }
        }
        return res;
    }
};
