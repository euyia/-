#include <all.h>
using namespace std;
#define ll long long
class Solution
{
public:
    long long nthUglyNumber(long long n)
    {
        priority_queue<ll, vector<ll>, greater<ll>> q;
        set<ll> s;
        ll nums[3]{2, 3, 5};
        if (n == 1)
            return 1;
        q.push(1);
        s.insert(1);
        for (ll i = 1;; i++)
        {
            ll v = q.top();
            q.pop();
            if (i == n)
                return v;
            for (ll j = 0; j < 3; ++j)
            {
                ll x = v * nums[j];
                if (!s.count(x))
                {
                    s.insert(x);
                    q.push(x);
                }
            }
        }
        return 0;
    }
};
class Solution
{
public:
    long long nthUglyNumber(long long n)
    {
        vector<long long> dp(n + 1);
        dp[1] = 1;
        long long p2 = 1, p3 = 1, p5 = 1;
        for (long long i = 2; i <= n; i++)
        {
            long long num2 = dp[p2] * 2, num3 = dp[p3] * 3, num5 = dp[p5] * 5;
            dp[i] = min(min(num2, num3), num5);
            if (dp[i] == num2)
            {
                p2++;
            }
            if (dp[i] == num3)
            {
                p3++;
            }
            if (dp[i] == num5)
            {
                p5++;
            }
        }
        return dp[n];
    }
};
// 那个动态规划法，我觉得换一种解释能更清晰一点儿：

// 相当于3个数组，分别是能被2、3、5整除的递增数组，且每个数组的第一个数都为1。

// 然后就简单了，维护三个指针，将三个数组合并为一个严格递增的数组。就是传统的双指针法，只是这题是三个指针。

// 然后优化一下，不要一下子列出这3个数组，因为并不知道数组预先算出多少合适。

// 这样就一边移指针，一边算各个数组的下一个数，一边merge，就变成了题解的动态规划法的代码。
//
class Solution
{
public:
    long long nthUglyNumber(long long n)
    {
        long long dp[n];
        if (n == 1)
            return 1;
        long long p2 = 1, p3 = 1, p5 = 1;
        dp[0] = 1;
        // 理解了但是为什么还是写不出来啊。。我套。。
        // 用p代表各个数组的指针
        // 用num 代表各个数组的最前面的那个。。
        for (long long i = 1; i < n; ++i)
        {
            long long num2 = p2 * 2, num3 = p3 * 3, num5 = p5 * 5;
            dp[i] = min(min(num2, num3), num5);
            if (dp[i] == num2)
                p2++;
            if (dp[i] == num3)
                p3++;
            else
                p5++;
        }
        return dp[n - 1];
    }
};
class Solution
{
public:
    long long nthUglyNumber(long long n)
    {
        long long dp[n + 1];
        if (n == 1)
            return 1;
        dp[1] = 1;
        long long a = 1, b = 1, c = 1;
        for (long long m = 1; m < n; ++m)
        {
            long long i = dp[a] * 2, j = dp[b] * 3, k = dp[c] * 5;
            dp[m] = min(min(i, j), k);
            if (dp[m] == i)
                a++;
            if (dp[m] == j)
                b++;
            if (dp[m] == k)
                c++;
        }
        return dp[n];
    }
};
class Solution
{
public:
    long long nthUglyNumber(long long n)
    {
        vector<long long> dp(n + 1);
        dp[1] = 1;
        long long p2 = 1, p3 = 1, p5 = 1;
        for (long long i = 2; i <= n; i++)
        // 这边要从2开始 因为1 已经有了。
        {
            long long num2 = dp[p2] * 2, num3 = dp[p3] * 3, num5 = dp[p5] * 5;
            // 这里虽然看做是三个独立递增数组。。但是基数都要从dp数组里面取。。
            // 意思就是前提必须是丑数。
            // 不然比如2*7 就没有意义。。
            dp[i] = min(min(num2, num3), num5);
            if (dp[i] == num2)
            {
                p2++;
            }
            if (dp[i] == num3)
            {
                p3++;
            }
            if (dp[i] == num5)
            {
                p5++;
            }
        }
        return dp[n];
    }
};
// ，，，天才
// 不过也是有兴趣可以刷刷。。
