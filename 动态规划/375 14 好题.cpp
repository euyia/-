#include <all.h>
using namespace std;
// 题解好。。但是代码不存粹。就是具有可重复性。。通用性要高。
//
// 解法就这个 最简洁了。。比之前说的那个好。
// 那个说的详细。。但是解法太小众了。。不喜欢。
// 喜欢大开大合的解法。。纯粹

static int dp[201][201];

class Solution
{
public:
    int getMoneyAmount(int n)
    {
        //if (dp[1][200] == 0)
        //    dfs(1, 200);
        return dfs(1, n);
    }
    int dfs(int l, int r)
    {
        if (l >= r)
            return 0;

        if (l == r - 1)
        {
            return dp[l][r] = l;
        }
        // 越多这种边界处理就说明补丁多 设计不纯粹。
        if (dp[l][r])
            return dp[l][r];
        int ans = INT_MAX;
        for (int i = l + 1; i < r; i++)
        {
            int t = i + max(dfs(i + 1, r), dfs(l, i - 1));
            // 最大值 中的最小值。
            // 最大值 就是 即使我走了最差的情况。花了最多钱。
            // 但是我还是能赢。的最小的钱
            ans = min(ans, t);
        }
        dp[l][r] = ans;
        return ans;
    }
};
// 这个for里面就是没有选自己 而选两边 +i自己本身的钱。+递归。。
// 就这么简单。。但是。。
// 就是感觉题意有问题。