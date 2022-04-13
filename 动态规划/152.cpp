#include <all.h>
using namespace std;
// 这种题目想到死 都不会想出来。。就是套路的价值了。
// 但是以后出现类似的题型 就可以套用。。这种思路。。
// 这就是别人永远也无法达到的高度的方式。。

// 这个swap 真的很离谱。。
// 他能够把隐含的负的最大值。用imin 一直保留着。而且在碰到nums为负的时候
// 还能出来。。。
int sosso(vector<int> &nums)
{
    int maxx, imax, imin;
    imax = imin = 1;
    maxx = INT_MIN;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        maxx = max(maxx, imax);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        maxx = max(maxx, imax);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        maxx = max(maxx, imax);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        maxx = max(maxx, imax);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        maxx = max(imax, maxx);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        maxx = max(imax, maxx);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        maxx = max(maxx, imax);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        maxx = max(maxx, imax);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imin = min(imin * nums[i], nums[i]);
        imax = max(imax * nums[i], nums[i]);
        maxx = max(imax, maxx);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imin = min(imin * nums[i], nums[i]);
        imax = max(imax * nums[i], nums[i]);
        maxx = max(maxx, imax);
    }
    return maxx;
}
int soso(vector<int> &nums)
{
    int maxx = INT_MIN, imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < 0)
            swap(imax, imin);
        imax = max(imax * nums[i], nums[i]);
        imin = max(imin * nums[i], nums[i]);
        maxx = max(maxx, imax);
    }
    return maxx;
}
// 这种题其实没必要刷。。给你刷一万遍你碰到类似的 也是还是想不出来。。
// 因为 太微妙了。。