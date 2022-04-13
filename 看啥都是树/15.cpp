#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        if (n < 3)
            return {};
        int l, r, z;
        for (int i = 0; i < n; ++i)
        {
            if (nums[l] > 0)
                break;
            if (nums[l] == nums[l + 1])
                continue;
            l = i, r = l + 1, z = n - 1;

            while (r < z && nums[l] + nums[r] + nums[z] < 0)
                r++;
            while (r < z && nums[l] + nums[r] + nums[z] > 0)
                --z;
            if (nums[l] + nums[r] + nums[z] == 0)
                res.push_back({nums[l], nums[r], nums[z]});
        }
        return res;
    }
};
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if (!n || n < 3)
            return vector<vector<int>>();
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > 0)
                return res;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                if (nums[i] + nums[l] + nums[r] == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});

                    while (l < r && nums[l] == nums[l + 1])
                        l = l + 1;
                    while (l < r && nums[r] == nums[r - 1])
                        r = r - 1;
                    l = l + 1;
                    r = r - 1;
                }
                else if (nums[i] + nums[l] + nums[r] > 0)
                    r = r - 1;
                else
                    l = l + 1;
            }
        }
        return res;
    }
};
// 看起来好像很简单  但是其实很多细节。
// 比如用while还是用for。。这里选while
// 比如比较的时候 +1 还是-1 比。。
