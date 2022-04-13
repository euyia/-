#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution
{
private:
    void dfs(vector<int> &nums, int begin, int len, int target, vector<int> &path, vector<vector<int>> &res)
    {
        if (target == 0)
        {
            res.push_back(path);
            return;
        }
        for (int i = begin; i < len; i++)
        {
            if (target - nums[i] < 0)
            {
                break;
            }
            path.push_back(nums[i]);
            dfs(nums, i, len, target - nums[i], path, res);
            path.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int> &nums, int target)
    {
        vector<vector<int>> res;
        int len = nums.size();
        if (len == 0)
        {
            return res;
        }
        sort(nums.begin(), nums.end());
        vector<int> path;
        dfs(nums, 0, len, target, path, res);
        return res;
    }
};
vector<vector<int>> res;
int len;
vector<int> path;
void dfs(vector<int> &nums, int target, int begin)
{
    if (target == 0)
    {
        res.push_back(path);
        return;
    }
    for (int i = begin; i < len; ++i)
    {
        if (nums[i] > target)
            break;
        path.push_back(nums[i]);
        dfs(nums, target - nums[i], i);
        path.pop_back();
    }
}