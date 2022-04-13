#include <all.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int l = 0, r = n - 1;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == nums[mid ^ 1])
                l = mid + 1;
            else
                r = mid;
        }
        return nums[l];
    }
};
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    // 这边为什么不减一。。
    // 因为有r是有可能是的答案的。。不能给他偏移掉。
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[mid] == nums[mid ^ 1])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}
// 至少刷了个打底的。。
