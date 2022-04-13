#include <all.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Bitset
{
    inline static bool v[100001]{};
    bool flag;
    int n, cnt;

public:
    Bitset(int size) : n(size), flag(0), cnt(0)
    {
        fill_n(v, size, 0);
    }

    void fix(int idx)
    {
        cnt += v[idx] ^ true ^ flag;
        v[idx] = true ^ flag;
    }

    void unfix(int idx)
    {
        cnt -= v[idx] ^ flag;
        v[idx] = false ^ flag;
    }

    void flip()
    {
        flag ^= true;
        cnt = n - cnt;
    }

    bool all()
    {
        return cnt == n;
    }

    bool one()
    {
        return cnt;
    }

    int count()
    {
        return cnt;
    }

    string toString()
    {
        string ans;
        ans.reserve(n);
        for (int i = 0; i < n; ++i)
            ans.push_back((v[i] ^ flag) + '0');
        return ans;
    }
};
// 这个应该是比较接近的解法
// 我那边写主要是答案还不对。。思路上有一些了。。就异或1的使用。直接

class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), [&](int x, int y)
             {
                 if (x % 2 == 0 && y % 2 == 0)
                     return nums[x] >= nums[y];
             });
        sort(nums.begin(), nums.end(), [&](int x, int y)
             {
                 if (x % 2 == 1 && y % 2 == 1)
                     return nums[x] <= nums[y];
             });
        return nums;
    }
};
// 这是原来的第一题。。像用这种匿名的函数来试下。。但是不行。。数组元素没动。
// 看了下题解大部分都是和我一样的模拟。。就先这样吧。
// 反正先解决的 。。吃好的问题，以后在手。。