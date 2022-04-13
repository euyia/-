#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// =============z===========
class Solution
{
public:
    int triangleNumber(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < n; ++i)
            for (int j = i + 1; j < n; ++j)
                for (int z = j + 1; z < n; ++z)
                {
                    if (nums[i] + nums[j] < nums[z])
                        ++count;
                }
        return count;
    }
};
int triangleNumber(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int count = 0;
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
        {
            int pos = lower_bound(nums.begin(), nums.end(), nums[i] + nums[j]) - nums.begin() - 1;
            count += max(pos - j, 0);
        }
    return count;
}
// 这题可以刷下。
// 题解没看完。
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ret = 0;

        // [left, right] 为第三条边的合法位置
        int left, right;

        for (int i = 0; i < n; ++i) {
            right = i + 2;
            for (int j = i + 1; j < n; ++j) {
                left = j + 1;
                while(right < n && nums[right] < nums[i] + nums[j]) right++;
                ret += max(right - left, 0);
            }
        }
        return ret;
    }
};
// 这个快了6倍。。。我的天。。看起来好像差不多。。