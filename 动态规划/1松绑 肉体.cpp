#include <all.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<int> nums;
    int t, cnt;
    vector<vector<int>> combinationSum(vector<int> &_nums, int _t)
    {
        nums = _nums;
        t = _t;
        dfs(0);
        return res;
    }
    void dfs(int maxt)
    {
        if (maxt == t)
        {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] + maxt > t)
                break;
            dfs(maxt + nums[i]);
        }
    }
};