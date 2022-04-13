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
    int largestRectangleArea(vector<int> &nums)
    {
        int n = nums.size();
        stack<int> s;
        vector<pair<int, int>> mp(n);
        s.push(-1);
        for (int i = 0; i < n; ++i)
        {
            while (s.top() != -1 && !s.empty() && nums[i] < nums[s.top()])
            {
                mp[s.top()].second = i;
                s.pop();
            }
            mp[i].first = s.top();
            s.push(i);
        }
        while (!s.empty() && s.top() != -1)
        {
            mp[s.top()].second = n;
            s.pop();
        }
        int maxx = 0;
        int tmp = 0;
        for (int i = 0; i < mp.size(); ++i)
        {
            tmp = nums[i] * (mp[i].second - mp[i].first);
            if (tmp > maxx)
                maxx = tmp;
        }
        return maxx;
    }
};
int largestRectangleArea(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); i++)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back() + 1;
            int right = i - 1;
            res = max(res, (right - left + 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = s.back();
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }

    return res;
}
int sosos(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int sosos(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();

            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int sosos(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * (nums[cur]));
        }
        s.push_back(i);
    }
    return res;
}
int sosos(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int sosos(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() & nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() & nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() & nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() & nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int sosos(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[s.back()]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int ssoso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{

    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    int n = nums.size();
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int left = s.back();
            int right = i;
            res = max(res, (right - left - 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i;
            res = max(res, (r - l + 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i;
            res = max(res, (r - l + 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
//  它做了什么动作？？？ 其实就是维护一个单调栈。。没别的。。
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i;
            res = max(res, (r - l + 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i;
            res = max(res, (r - l + 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int res = 0;
    vector<int> s;
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[i] < nums[s.back()])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i;
            res = max(res, (r - l + 1) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}

class Solution
{
public:
    int maximalRectangle(vector<vector<char>> &nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                nums[i][j] -= '0';
            }
        for (int i = 1; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                if (nums[i][j])
                    nums[i][j] += nums[i - 1][j];
            }
        int maxt = 0;
        for (int i = 0; i < n; ++i)
        {

            maxt = max(maxt, soso(nums[i]));
        }
    }
    int soso(vector<char> &nums)
    {
        int res = 0;
        vector<int> s;
        nums.insert(nums.begin(), 0);
        nums.push_back(0);
        for (int i = 0; i < nums.size(); ++i)
        {
            while (!s.empty() && nums[i] < nums[s.back()])
            {
                // 递增序列
                // 停下来说明前面是第一个比他小的。
                // 被pop出来的时候 刚进来的那个是第一个比它小的。
                // 那么中间这这个区域。。他就是最小的。。高度就是最小的来确定
                // 所以这样就求出了他的面积。。
                int cur = s.back();
                s.pop_back();
                int l = s.back();
                int r = i - 1;
                res = max(res, (r - l) * nums[cur]);
                // -1 本来不需要的 因为两个序列号相减就是中间距离。
                // 但是这个i 他是有效范围的右边一个格子。。所以
            }
            s.push_back(i);
        }
        return res;
    }
};
// 回头收获之前写的题。。收获大。。效率又高。。
int res;
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    int n = nums.size();
    stack<int> s;
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && s.top() > nums[i])
        {
            int cur = s.top();
            s.pop();
            int l = s.top();
            int r = i - 1;
            res = max(res, nums[cur] * (r - l));
        }
    }
    return res;
}
//  通过老妈和我对话了。挺好的。。
// 我电脑坏了。他和老妈说。
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && s.back() > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i - 1;
            res = max(res, nums[cur] * (r - l));
        }
    }
    return res;
}
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i - 1;
            res = max(res, nums[cur] * (r - l));
        }
        s.push_back(i);
    }
    return res;
}
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int r = i - 1;
            int l = s.back();
            res = max(res, nums[cur] * (r - l));
        }
        s.push_back(i);
    }
    return res;
}
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i - 1;
            res = max(res, nums[cur] * (r - l));
        }
        s.push_back(i);
    }
    return res;
}
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i - 1;
            res = max(res, (r - l) * nums[cur]);
        }
        s.push_back(i);
    }
    return res;
}
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i - 1;
            res = max(res, nums[cur] * (r - l));
        }
        s.push_back(i);
    }
    return res;
}
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i - 1;
            res = max(res, nums[cur] * (r - l));
        }
        s.push_back(i);
    }
    return res;
}
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i - 1;
            res = max(res, nums[cur] * (r - l));
        }
        s.push_back(i);
    }
    return res;
}
int dfs(vector<int> &nums)
{
    nums.insert(nums.begin(), 0);
    nums.push_back(0);
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!s.empty() && nums[s.back()] > nums[i])
        {
            int cur = s.back();
            s.pop_back();
            int l = s.back();
            int r = i - 1;
            res = max(res, nums[cur] * (r - l));
        }
        s.push_back(i);
    }
    return res;
}
// 前后加0 为什么 因为才能处理掉边界值。。不然边界本身无法处理自己
// 单调栈维护递增。。这样能拿到前面第一个比他小的 后面第一个比他大的。。很牛逼的功能的。。