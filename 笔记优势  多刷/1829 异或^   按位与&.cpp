#include <all.h>
using namespace std;
// 那这个就可以随便套用到有vector的 400ms直接编程200ms。。
static int x = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
// 要知道这行代码做了什么动作。要能想象出来。
// 主要是你要真的觉得这个东西有价值。然后真的喜欢
// 才会每天可能一辈子天天做别人觉得枯燥的。但是你又觉得很有趣的事情。。
// 天天刷。。一定一定能做好的。。不管你什么天赋。
class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &nums, int k)
    {
        int maxt = pow(2, k);
        int n = nums.size();
        int sum = 0;
        for (auto n : nums)
            sum ^= n;
        // 主要不知道异或的大小关系是怎么样的。
        // 两个数 怎么异或 最大。。
        sort(nums.rbegin(), nums.rend());
        vector<int> res(n, 0);
        for (int j = 0; j < n; ++j)
        {
            int maxi = 0;
            if (j - 1 >= 0)
                sum ^= nums[j - 1];
            for (int i = 0; i < maxt; ++i)
            {
                if (i - 1 >= 0)
                    sum ^= i - 1;
                maxt = max(maxt, sum ^ i);
            }
            res[j] = maxt;
        }
    }
};

class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> res(n);
        int comp = (1 << k) - 1;
        // 这个要括号 不然优先级低于普通的加减。
        int tmp = 0;
        int i = n;
        while (i)
        {
            tmp ^= nums[n - i];
            res[--i] = comp - tmp & comp;
        }
        return res;
    }
};
// 这种设计 只能说 巧夺天工。。。
// 刷着呗。还能怎么样学。
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int cmp = (1 << k) - 1;
    int tmp = 0;
    int i = n;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int cmp = (1 << k) - 1;
    int i = n;
    int tmp = 0;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int i = n;
    int cmp = (1 << k) - 1;
    int tmp = 0;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int i = n;
    int cmp = (1 << k) - 1;
    int tmp = 0;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int tmp = 0;
    vector<int> res(n);
    int cmp = (1 << k) - 1;
    int i = n;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int tmp = 0;
    int cmp = (1 << k) - 1;
    vector<int> res(n);
    int i = n;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int tmp = 0;
    int cmp = (1 << k) - 1;
    int i = n;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int cmp = (1 << k) - 1;
    int tmp = 0;
    int i = n;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int cmp = (1 << k) - 1;
    int tmp = 0;
    int i = n;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int cmp = (1 << k) - 1;
    int tmp = 0;
    int i = n;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int cmp = (1 << k) - 1;
    int tmp = 0;
    int i = n;
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> res(n);
    int comp = (1 << k) - 1;
    int sum = 0;
    int i = n;
    while (i)
    {
        sum ^= nums[n - i];
        res[--i] = comp - sum & comp;
    }
    return res;
}
// 他都没有去算结果是什么。
// 而直接去发现。结果必然是什么。。
// 然后直接把他要的答案给他。。
// 就像比如有女生嫌弃你身高的话。就是看不上你。。
// 你大可不用纠结你的身高。。直接走人。。这就是答案。
// 不用通过模拟 给出的他要的答案 才是最高级的算法。。
// 不用通过模拟 给出的他要的答案 才是最高级的算法。。
// 不用通过模拟 给出的他要的答案 才是最高级的算法。。
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int cmp = (1 << k) - 1;
    int tmp = 0;
    int i = n;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int cmp = (1 << k) - 1;
    int tmp = 0;
    int i = n;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int cmp = (1 << k) - 1;
    int tmp = 0;
    int i = n;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = n;
    int tmp = 0;
    int cmp = (1 << k) - 1;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = n;
    int tmp = 0;
    int cmp = (1 << k) - 1;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = n;
    int tmp = 0;
    int cmp = (1 << k) - 1;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = n;
    int tmp = 0;
    int cmp = (1 << k) - 1;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = n;
    int tmp = 0;
    int cmp = (1 << k) - 1;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
//
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = n;
    int tmp = 0;
    int cmp = (1 << k) - 1;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
vector<int> soso(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = n;
    int tmp = 0;
    int cmp = (1 << k) - 1;
    vector<int> res(n);
    while (i)
    {
        tmp ^= nums[n - i];
        res[--i] = cmp - tmp & cmp;
    }
    return res;
}
// 二进制。。进一位 就是乘以二。。
// 比如10进制 《《2 就是就是乘以10的二次方。、
// 移动n位 是乘以基数的n次方
// 移动n位 是乘以基数的n次方
// 移动n位 是乘以基数的n次方
vector<int> soso(int k, int tmp)
{
    int cmp = (1 << k) - 1;
    int i;
    vector<int> res;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
// 核心其实就这两句、
vector<int> sos(int k, int tmp)
{
    int cmp = (1 << k) - 1;
    int i;
    vector<int> res;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso(int k, int tmp)
{
    int cmp = (1 << k) - 1;
    int i;
    vector<int> res;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso(int k, int tmp)
{
    int cmp = (1 << k) - 1;
    int i;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> res;
int k, tmp, i;
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
vector<int> soso()
{
    int cmp = (1 << k) - 1;
    while (i)
        res[--i] = cmp - tmp & cmp;
    return res;
}
// 就几句有设计感。。
// 下面那句 通过&和-掉。。能够获得tmp 部分的互补。。
// 很牛逼。。可以说是位运算里面很经典使用的操作了。