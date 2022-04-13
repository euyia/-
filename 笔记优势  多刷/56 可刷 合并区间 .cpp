#include <algorithm>
#include <unordered_map>
#include <set>

#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.emplace_back(vector<int>{l, r});
        else

            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        // res.emplace_back(vector<int>{l,r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> sosos(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.size() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < n; ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> sosos(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(r, res.back()[1]);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
// 喜欢这题是因为这个结构 很优美。。
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
        {
            res.back()[1] = max(res.back()[1], r);
        }
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
        {
            res.back()[1] = max(res.back()[1], r);
        }
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (!res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], l);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}
vector<vector<int>> soso(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        if (res.empty() || res.back()[1] < l)
            res.push_back({l, r});
        else
            res.back()[1] = max(res.back()[1], r);
    }
    return res;
}