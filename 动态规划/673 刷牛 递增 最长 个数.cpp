#include <all.h>
using namespace std;
// 输入: [1,3,5,4,7]
// 输出: 2
// 解释: 有两个最长递增子序列，分别是 [1, 3, 4, 7] 和[1, 3, 5, 7]。
// 主要是替代 还是+=的理解。
// 。。这个框架还是相对简单的。
class Solution
{
public:
    int findNumberOfLIS(vector<int> &nums)
    {
        int n = nums.size(), maxLen = 0, ans = 0;
        vector<int> dp(n), cnt(n);
        for (int i = 0; i < n; ++i)
        {
            dp[i] = 1;
            cnt[i] = 1;
            for (int j = 0; j < i; ++j)
            {
                if (nums[i] > nums[j])
                {
                    if (dp[j] + 1 > dp[i])
                    {
                        dp[i] = dp[j] + 1;
                        cnt[i] = cnt[j]; // 重置计数
                    }
                    else if (dp[j] + 1 == dp[i])
                    {
                        cnt[i] += cnt[j];
                    }
                }
            }
            if (dp[i] > maxLen)
            {
                maxLen = dp[i];
                ans = cnt[i]; // 重置计数
            }
            else if (dp[i] == maxLen)
            {
                ans += cnt[i];
            }
        }
        return ans;
    }
};
int soso(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, 1), cnt(n, 1);
    int maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[j] + 1 == dp[i])
                    cnt[i] += cnt[j];
    for (int i = 0; i < n; ++i)
    {
        if (dp[i] > maxt)
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (dp[i] == maxt)
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[2001], cnt[2001];
    int maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++i)
        {
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        }
        if (dp[i] > maxt)
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (dp[i] == maxt)
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0;
    int dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++i)
        {
            if (nums[i] > nums[j])
            {
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] = cnt[j];
            }
        }
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[2001], cnt[2001];
    int maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        }
        if (maxt > dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (dp[i] == maxt)
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (nums[i] > nums[j])
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[j] + 1 == dp[i])
                    cnt[i] += cnt[j];
        }
        if (maxt == dp[i])
            res += cnt[i];
        else if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (nums[i] > nums[j])
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        }
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (nums[i] > nums[j])
                if (dp[i] > dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        }
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res += cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[20001], cnt[2001], maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[2001], cnt[2001], maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
                else if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
//  一题1000元
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < n; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (dp[i] == maxt)
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[2001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 2;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int maxt = 0, res = 0, dp[20001], cnt[2001];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (dp[i] == maxt)
            res += cnt[i];
    }
    return res;
}

int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[2001], cnt[2001], maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++i)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j];
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[2001], cnt[2001], maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt == dp[i])
            res += cnt[i];
        else if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[2001], cnt[2001], maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j];
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt < dp[i])
        {
            maxt = dp[i];
            res = cnt[i];
        }
        else if (maxt == dp[i])
            res += cnt[i];
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int dp[2001]{}, cnt[2001]{}, maxt = 0, res = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        cnt[i] = 1;
        for (int j = 0; j < i; ++j)
            if (nums[i] > nums[j])
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
        if (maxt == dp[i])
            res += cnt[i];
        else if (maxt < dp[i])
            res = cnt[i];
    }
    return res;
}
// 主要还是找单调序列的一个框架吧。有点像找最近公共祖先那个一样。。
// 好用。。但是刚开始不好理解。
