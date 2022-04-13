#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int> &_nums)
    {
        nums = _nums;
        sort(nums.begin(), nums.end());
        n = nums.size();
        dfs();
        return res;
    }
    vector<int> nums;
    int count;
    int vis[9];
    vector<int> path;
    vector<vector<int>> res;
    int n;
    void dfs()
    {
        if (path.size() == n)
        {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < n; ++i)
        {
            if (i > 0 && nums[i] == nums[i - 1] && !vis[i - 1])
                continue;
            //这题思路的核心。。去重
            if (vis[i])
                continue;
            path.push_back(nums[i]);
            vis[i] = 1;
            dfs();
            vis[i] = 0;
            path.pop_back();
        }
    }
};
// 脑子可以多模拟这个去重。。。
// 为填入 未填入 未填入
// 填入 未填入 未填入
// 填入 填入 未填入。
// 填入 填入 填入。。
// 连续+三个一样的  每层只填入靠近左边已经填入的那个未填入
// 他这个写法 能控制每层只填入一个。。非常的巧妙 又符合我们的需求。
