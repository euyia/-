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
    void nextPermutation(vector<int> &nums)
    {
        //注意交换逻辑，从后往前找第一个升序的对i    j(i+1)     k     end
        int i = 0;
        //要记录i的下标，要拿出来
        for (i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
                break;
        }
        if (i == 0)
            reverse(nums.begin(), nums.end());
        else
        {
            //[i+1,end)开区间从后往前进行比较
            for (int j = nums.size() - 1; j > i; j--)
            {
                if (nums[j] > nums[i])
                {
                    swap(nums[j], nums[i]);
                    //注意[i+1,end]反转
                    reverse(nums.begin() + i + 1, nums.end());
                    //最后直接终止
                    break;
                }
            }
        }
    }
};
void soso(vector<int> &nums)
{
    int i;
    int n = nums.size();
    for (i = n - 1; i > 0; --i)
    {
        if (nums[i] > nums[i - 1])
            break;
    }
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
        {
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
        }
    }
}

//  一切皆遍历。。一切皆穷举。。
//
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (int i = n - 1; i > 0; ++i)
    {
        if (nums[i] > nums[i - 1])
            break;
    }
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = i + 1; j < n; ++j)
            if (nums[j] < nums[i])
            {
                swap(nums[j - 1], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}
void soso(vector<int> &nums)
{
    int i, n = nums.size();
    for (i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
            break;
    if (i == 0)
        reverse(nums.begin(), nums.end());
    else
    {
        i--;
        for (int j = n - 1; j > i; --j)
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
    }
}