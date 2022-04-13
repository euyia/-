#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
//  自己写的。。他这边res是序列号 死的。。不用做--、
bool canJump(vector<int> &nums)
{
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        res = max(res, nums[i]);
        --res;
        if (i + 1 < res)
            return false;
    }
    return true;
}
int soso(vector<int> &nums)
{
    int res = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        if (i <= res)
        {

            res = max(res, i + nums[i]);
        }
        else
            return false;
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i <= res)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i <= res)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(i + nums[i], res);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
        ;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        if (res >= n - 1)
            return true;
    }
    return false;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res >= i)
            res = max(res, i + nums[i]);
        else
            return false;
        if (res >= n - 1)
            return true;
    }
    return false;
}