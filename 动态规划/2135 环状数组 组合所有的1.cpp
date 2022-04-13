#include <all.h>
using namespace std;
#define all(nums) nums.begin(), nums.end()
class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        int n = nums.size();
        int m = count(all(nums), 1);
        int r = count(nums.begin(), nums.begin() + m, 1);
        int l = r;
        for (int i = 0; i < n - 1; ++i)
        {
            int tmp = l + nums[(i + m) % n] - nums[i];
            r = max(r, tmp);
            l = tmp;
        }
        //  这个r就是所有情况下m距离宽度的范围内1最多的个数
        // 他这里取余 就是把数组循环考虑了。
        return m - r;
    }
};

int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n - 1; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.end(), 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
// 这个count 和那个accomulate 那个 在滑动窗口前期统计很好用。
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    int m = count(all(nums), 1);
    int maxt = count(nums.begin(), nums.begin() + m, 1);
    int l = maxt;
    for (int i = 0; i < n; ++i)
    {
        l = l + nums[(i + m) % n] - nums[i];
        maxt = max(maxt, l);
    }
    return m - maxt;
}