#include <all.h>
using namespace std;
// 刷变强才是培养自信正道。
// 而不是去做简单题。
// 去刷难的。让难题对你来说变简单。。但是对别人来说还是难的。
// 这才有意义。

class Solution
{
public:
    int longestMountain(vector<int> &nums)
    {
        // 主要问题是那些边界。
        // 左边界。然后相等的时候？有边界。
        int n = nums.size();
        int maxt = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            int l = i - 1, r = i + 1;
            while (l >= 0 && nums[l] < nums[l + 1])
                l--;
            while (r < n && nums[r] > nums[r + 1])
                r++;
            if (r - l >= 3 && r - l > maxt)
                maxt = r - l;
        }
        return maxt;
    }
};

class Solution
{
public:
    int longestMountain(vector<int> &nums)
    {
        // 主要问题是那些边界。
        // 左边界。然后相等的时候？有边界。
        int n = nums.size();
        int maxt = 0;
        for (int i = 1; i < n - 1; ++i)
        {
            int l = i - 1, r = i + 1;
            if (nums[l] >= nums[i] || nums[r] >= nums[i])
                continue;
            while (l >= 0 && nums[l] < nums[l + 1])
                l--;
            while (r < n && nums[r] < nums[r - 1])
                r++;
            if (r - l - 1 >= 3 && r - l - 1 > maxt)
                // 这个》=3条件就不需要。
                // 因为前面l和r 如果有一个不成立。。就会contiue；
                // 所以只要有。必然是大于三的。
                maxt = r - l - 1;
        }
        return maxt;
    }
};
int longestMountain(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int maxt = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[l] >= nums[i] || nums[i] <= nums[r])
            continue;
        // 这句是核心。。
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n && nums[r] < nums[r - 1])
            r++;
        maxt = max(maxt, r - l - 1);
    }
    return maxt;
}
int longestMountain(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[l] >= nums[i] || nums[i] <= nums[r])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n && nums[r] < nums[r - 1])
            r++;
        res = max(res, r - l - 1);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[l] >= nums[i] || nums[i] <= nums[r])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n && nums[r] < nums[r - 1])
            r++;
        res = max(res, r - l - 1);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[l] >= nums[i] || nums[i] <= nums[r])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n - 1 && nums[r] > nums[r + 1])
            r++;
        res = max(res, r - l);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i + 1, r = i + 1;
        if (nums[l] >= nums[i] || nums[i] <= nums[r])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n - 1 && nums[r] > nums[r + 1])
            ++r;
        res = max(res, r - l);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[l] >= nums[i] || nums[i] <= nums[r])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n - 1 && nums[r] > nums[r + 1])
            ++r;
        res = max(res, r - l);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[i] <= nums[r] || nums[l] > nums[i])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n - 1 && nums[r] > nums[r + 1])
            ++r;
        res = max(res, r - l);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[l] >= nums[i] || nums[i] <= nums[r])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n - 1 && nums[r] > nums[r + 1])
            ++r;
        res = max(res, r - l);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[l] >= nums[i] || nums[i] < nums[r])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n - 1 && nums[r] > nums[r + 1])
            ++r;
        res = max(res, r - l);
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int res = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int l = i - 1, r = i + 1;
        if (nums[i] >= nums[l] || nums[i] <= nums[r])
            continue;
        while (l >= 0 && nums[l] < nums[l + 1])
            l--;
        while (r < n - 1 && nums[r] > nums[r + 1])
            ++r;
        res = max(res, r - l);
    }
    return res;
}
// 这题的栓指针 了解下。。还是比较复杂的
// 1024的题型。。
// 好题其实。。这种栓指针的遍历方式。非常值得学习。。在一些场合很好用。。
class Solution
{
public:
    int longestMountain(vector<int> &arr)
    {
        int n = arr.size();
        int ans = 0;
        int left = 0;
        while (left + 2 < n)
        {
            int right = left + 1;
            if (arr[left] < arr[left + 1])
            {
                while (right + 1 < n && arr[right] < arr[right + 1])
                {
                    ++right;
                }
                if (right < n - 1 && arr[right] > arr[right + 1])
                {
                    while (right + 1 < n && arr[right] > arr[right + 1])
                    {
                        ++right;
                    }
                    ans = max(ans, right - left + 1);
                }
                else
                {
                    ++right;
                }
            }
            left = right;
        }
        return ans;
    }
};
class Solution
{
public:
    int longestMountain(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return 0;
        int l = 0, res = 0;
        while (l < n - 2)
        {
            int r = l + 1;
            if (nums[l] < nums[r])
            {
                while (r < n - 1 && nums[r] < nums[r + 1])
                    ++r;
                if (r < n - 1 && nums[r] > nums[r + 1])
                {
                    // 这边只有进触发这个条件。才开始超过3个点才有必要计数。
                    while (r < n - 1 && nums[r] > nums[r + 1])
                        ++r;
                    res = max(res, r - l + 1);
                    // 因为两个都是指向序列号。因为要返回个数。所以要+1；
                }
                else
                    ++r;
            }
            l = r;
        }
        return res;
    }
};
// 很精美的设计。
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
            // 到特定的节点 减枝。。。
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] > nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
// ...嘛有感情的刷题机器人
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] > nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] < nums[r + 1])
            {
                while (r < n - 1 && nums[r] < nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] > nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] < nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
// 足够root吗 足够root吗 足够贴吗。
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }

        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int l = 0, res = 0;
    int n = nums.size();
    if (n < 3)
        return 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return 0;
    int l = 0, res = 0;
    while (l < n - 2)
    {
        int r = l + 1;
        if (nums[l] < nums[r])
        {
            while (r < n - 1 && nums[r] < nums[r + 1])
                ++r;
            if (r < n - 1 && nums[r] > nums[r + 1])
            {
                while (r < n - 1 && nums[r] > nums[r + 1])
                    ++r;
                res = max(res, r - l + 1);
            }
            else
                ++r;
        }
        l = r;
    }
    return res;
}
// 要到什么程度 才能随便ak。。。