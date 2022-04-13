#include <all.h>
using namespace std;
// 存在0的配对方式  就是10 或者单独的0.
// 排除10的可能 就是剩下只有0的可能。。
class Solution
{
public:
    bool isOneBitCharacter(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0] == 0;
        // if (nums[n - 1] == 0)
        //     return false;
        // 这种情况包含在下面所以可以省略。
        int count = 0;
        for (int i = n - 1; i >= 0; --i)
            if (nums[i])
                count++;
            else
                break;
        if (count % 2 == 0)
            return true;
        // 因为如果前面的1都是必须和前面的匹配。也就是
        // 0 只有两种 要么10 要么单独的0
        // 所以排除了10的情况 剩下就必须为单独的0.
        return false;
    }
};
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    for (int i = n - 2; i >= 0; --i)
        if (!nums[i])
            return (n - i) % 2 == 0;
}

class Solution
{
public:
    bool isOneBitCharacter(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0] == 0;
        int i = n - 2;
        for (; i >= 0 && nums[i]; --i)
            ;
        return (n - i) % 2 == 0;
    }
};
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
int soso(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0] == 0;
    int i = n - 2;
    for (; i >= 0 && nums[i]; --i)
        ;
    return (n - i) % 2 == 0;
}
// 这题说出来思路很简单。。但是你想不到。。
// 他其实是一种很好的思维方式。
// 就是总结 然后排除法。。
// 能和0搭配的就两种 那必须为0 那就要排除是10的。
// 也就是他旁边的那个1 必须是和前面的匹配的。。
// 什么情况是必须和前面匹配的。就是前面都是11 。。也就是前面的1个数必须为偶数。