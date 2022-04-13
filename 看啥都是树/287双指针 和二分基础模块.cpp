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
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int l = 1, r = n - 1, res = -1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            int cnt = 0;
            for (int i = 0; i < n; ++i)
            {
                cnt += nums[i] <= mid;
            }
            if (cnt <= mid)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
                res = mid;
            }
        }
        return res;
    }
};

int soso(vector<int> &nums)
{
    int slow = 0;
    int fast = 0;
    // 还要这两句。。。也是很懵逼。。
    slow = nums[slow];
    fast = nums[nums[fast]];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    int pre1 = 0;
    int pre2 = slow;
    if (pre1 != pre2)
    {
        pre1 = nums[pre1];
        pre2 = nums[pre2];
    }
    return pre1;
}