#include <all.h>
using namespace std;
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = (int)nums.size();
        if (n == 0)
        {
            return 0;
        }
        vector<int> dp(n, 0);
        for (int i = 0; i < n; ++i)
        {
            dp[i] = 1;
            for (int j = 0; j < i; ++j)
            {
                if (nums[j] < nums[i])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 0);
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (nums[j] < nums[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    return *max_element(dp.begin(), dp.end());
}
// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         vector<int> seq;
//         for (auto n: nums) {
//             auto lb = lower_bound(seq.begin(), seq.end(), n);
//             if (lb == seq.end()) {
//                 seq.push_back(n);
//             } else {
//                 *lb = n;
//             }
//         }
//         return seq.size();
//     }
// };
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 1);
    for (int i = 0; i < n; ++i)

        for (int j = 0; j < i; ++j)
        {
            if (dp[j] < dp[i])
            {

                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    return *max_element(dp.begin(), dp.end());
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 1);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (nums[j] < nums[i])
                dp[i] = max(dp[i], dp[j] + 1);
    return *max_element(dp.begin(), dp.end());
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 1);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (nums[j] < nums[i])
                dp[i] = max(dp[i], dp[j] + 1);
    return *max_element(dp.begin(), dp.end());
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 1);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++i)
            if (nums[j] < nums[i])
                dp[i] = max(dp[i], dp[j] + 1);
    return *max_element(dp.begin(), dp.end());
}
int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 1);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (nums[j] < nums[i])
                dp[i] = dp[j] + 1;
    return *max_element(dp.begin(), dp.end());
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 1);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (nums[j] < nums[i])
                dp[i] = max(dp[i], dp[j] + 1);
    return *max_element(dp.begin(), dp.end());
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 1);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
        {
            if (nums[j] < nums[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    sort(dp.begin(), dp.end());
    return dp.back();
}
// 这个是那个书上的二分。
int lengthOfLIS(vector<int> &nums)
{
    vector<int> dp(nums.size());
    int p = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        int poker = nums[i];
        int l = 0, r = p;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (dp[mid] > poker)
                r = mid;
            else if (dp[mid] < poker)
                l = mid + 1;
            else
                r = mid;
        }
        if (l == p)
            p++;
        dp[l] = poker;
    }
    return p;
}

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int k = upper_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
            if (k && ans[k - 1] == nums[i])
                continue;
            if (k >= ans.size())
                ans.push_back(nums[i]);
            else
                ans[k] = nums[i];
        }
        return ans.size();
    }
};
int maxEnvelopes(vector<vector<int>> &nums)
{
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); ++i)
    {
        int k = upper_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
        if (k && ans[k - 1] == nums[i])
            continue;
        if (k >= ans.size())
            ans.push_back(nums[i]);
        else
            ans[k] = nums[i];
    }
    return ans.size();
}
// 这个解法也是非常的巧妙的。。
// 但是这种设计真的很难想出来。。
// 你调试下就有了。。

int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n + 1);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
        {
            if (nums[i] > nums[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    return *max_element(dp.begin(), dp.end());
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++i)
            if (nums[i] > nums[j])
                dp[i] = max(dp[i], dp[j] + 1);
    return *max_element(dp.begin(), dp.end());
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                dp[i] = max(dp[i], dp[j] + 1);
    return *max_element(dp.begin(), dp.end());
}
