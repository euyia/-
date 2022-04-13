#include <all.h>
using namespace std;
#define pii pair<long long, long long>
// 这题自己写出来的。。
class Solution
{
public:
    int nthSuperUglyNumber(int n, vector<int> &primes)
    {
        if (n == 1000000)
            return 6262476;
        // 他这里作弊了。给最大的那个样例直达车了。省了很多时间。
        int ans = 1;
        int m = primes.size();
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        for (int i = 0; i < m; ++i)
        {
            pq.emplace(primes[i], i);
            // 前面放的是nums 后面是下标？
        }
        n--;
        while (n--)
        {
            pii tmp = pq.top();
            pq.pop();
            for (int i = tmp.second; i >= 0; --i)
                pq.emplace(tmp.first * primes[i], i);
            // 每个数都只乘以比他质数序列小的质数。。？？？牛逼。。。
            // 也没有考虑除重的问题？？？
            ans = tmp.first;
        }
        return ans;
    }
};
// 发现这个解法好像是 最初算丑数的那个解法 我操。。
// 但是它这里速度为什么这么快。。
// 没有那个样例。。他也是能过的。。。说明这个解法也可以。。
class Solution
{
public:
    int nthSuperUglyNumber(int n, vector<int> &p)
    {
        long long dp[n + 1];
        // 这题我自己的题解写的很详细。。
        // 应该也不会再去刷了。。
        // 其实作为思维训练 也是可以再去刷那个丑数三指针的。。
        if (n == 1)
            return 1;
        dp[1] = 1;
        int k = p.size();
        int cnt[k];
        long long nums[k];
        for (int i = 0; i < k; ++i)
        {
            cnt[i] = 1;
            nums[i] = p[i];
        }

        for (int i = 2; i < n + 1; ++i)
        {
            // 因为从1开始。然后1定义了已经 所以要从2开始遍历 。。惯性容易忘记
            dp[i] = nums[0];
            long long count = 0;
            for (int j = 0; j < k; ++j)
                if (dp[i] > nums[j])
                {
                    dp[i] = nums[j];
                    count = j;
                }
            for (int cur = 0; cur < k; ++cur)
            {
                if (nums[cur] == dp[i])
                    nums[cur] = dp[++cnt[cur]] * p[cur];
            }
            // nums[count] = dp[cnt[count]] * p[count];
            // prlong longf(" %d %d\n", dp[i], count);
        }
        return dp[n];
    }
};