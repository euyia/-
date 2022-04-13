#include <all.h>
using namespace std;
class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &nums)
    {
        int maxt = 0;
        for (int i = 0; i < nums.size(); ++i)
        {

            int mint = INT_MAX;
            for (int j = 0; j < nums[0].size(); ++j)
                mint = min(mint, nums[i][j]);
            maxt = max(maxt, mint);
        }
        return {maxt};
    }
};
class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        size_t idx = 0;
        int t = INT_MIN;
        for (auto &&i : matrix)
        {
            auto it = min_element(i.begin(), i.end());
            // 这个it 很微妙的。。
            // 他能够那到地址。。然后。。
            // 在外面还能保留拿到j序列号的权力。。
            // 非常牛逼的。。能拿值有能拿序列。
            if (*it > t)
            {
                idx = it - i.begin();
                t = *it;
            }
            // 这个保证了。。他是所有行的最大值。。
            // 但是它要去验证是不是这行的最小值。。他可能是其他列的。。
        }
        for (auto &&i : matrix)
        {
            if (i[idx] > t)
            {
                return {};
            }
        }
        return {t};
    }
};
class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &nums)
    {
        int cnt = 0;
        int t = INT_MIN;
        for (auto i : nums)
        {
            auto it = min_element(i.begin(), i.end());
            if (*it > t)
            {
                t = *it;
                cnt = it - i.begin();
            }
        }
        for (auto it : nums)
            if (it[cnt] > t)
                return {};
        return {t};
    }
};
int soso(vector<vector<int>> &nums)
{
    int idx = 0;
    int t = INT_MIN;
    for (auto i : nums)
    {
        auto it = min_element(i.begin(), i.end());
        if (*it > t)
        {
            t = *it;
            idx = it - i.begin();
        }
    }
    for (auto it : nums)
        if (it[idx] > t)
            return 0;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int idx = 0;
    int t = INT_MIN;
    for (auto i : nums)
    {
        auto it = min_element(i.begin(), i.end());
        if (*it > t)
        {
            t = *it;
            idx = it - i.begin();
        }
    }
    for (auto it : nums)
        if (it[idx] > t)
            return 0;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int idx = 0;
    int t = INT_MIN;
    for (auto i : nums)
    {
        auto it = min_element(i.begin(), i.end());
        if (*it > t)
        {
            t = *it;
            idx = it - i.begin();
        }
    }
    for (auto it : nums)
        if (it[idx] > t)
            return 0;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int idx = 0;
    int t = INT_MIN;
    for (auto i : nums)
    {
        auto it = min_element(i.begin(), i.end());
        if (*it > t)
        {
            t = *it;
            idx = it - i.begin();
        }
    }
    for (auto it : nums)
        if (it[idx] > t)
            return 0;
    return 1;
}
int soso(vector<vector<int>> &nums)
{
    int idx = 0;
    int t = INT_MIN;
    for (auto i : nums)
    {
        auto it = min_element(i.begin(), i.end());
        if (*it > t)
        {
            t = *it;
            idx = it - i.begin();
        }
    }
    for (auto it : nums)
        if (it[idx] > t)
            return 0;
    return 1;
}
int soso(vector<vector<int>> &nums)
{
    int idx = 0;
    int t = INT_MIN;
    for (auto i : nums)
    {
        auto it = min_element(i.begin(), i.end());
        if (*it > t)
        {
            t = *it;
            idx = it - i.begin();
        }
    }
    for (auto it : nums)
        if (it[idx] > t)
            return 0;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int idx = 0;
    int t = INT_MIN;
    for (auto i : nums)
    {
        auto it = min_element(i.begin(), i.end());
        if (*it > t)
        {
            t = *it;
            idx = it - i.begin();
        }
    }
    for (auto it : nums)
        if (it[idx] > t)
            return 0;
    return t;
}
// 后来验证列。是因为。
// 他肯定是当前行最小的。。也是所有行最小的最大值。
// 但是它不一定是它自己那一列的最大值。。！！！！所以要验证。
int soso(vector<vector<int>> &nums)
{
    int i = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            i = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[i] > t)
            return 0;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int i = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            i = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[i] > t)
            return 0;
    return t;
}
// 他是每行最小值的最大值。。
// 但是不一定是它那一列的最大值。。
int soso(vector<vector<int>> &nums)
{
    int i = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            i = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[i] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int i = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            i = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[i] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int i = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            i = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[i] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int i = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            i = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[i] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
    {
        if (it[j] > t)
            return -1;
    }
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto n : nums)
        if (n[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (*it > t)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto i = min_element(n.begin(), n.end());
        if (*i > t)
        {
            t = *i;
            j = i - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (t < *it)
        {
            t = *it;
            j = it - n.begin();
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
int soso(vector<vector<int>> &nums)
{
    int j = 0;
    int t = INT_MIN;
    for (auto n : nums)
    {
        auto it = min_element(n.begin(), n.end());
        if (t < *it)
        {
            t = *it;
            j = it - n.begin();
            // 这个非常妙。。
            // 他没有展开内层数组。。但是却拿到了元素在内层数组的列标。。
        }
    }
    for (auto it : nums)
        if (it[j] > t)
            return -1;
    return t;
}
