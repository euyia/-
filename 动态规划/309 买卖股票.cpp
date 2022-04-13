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
// 好题。
// 这里还记录了一个持有状态。
// 然后重要的是对于不同情况的不同分析。
// 然后i-2那个细节。。也是非常nice、
class Solution
{
public:
    // 有一个问题是如果有多个匹配的呢、、》》》》
    bool wordBreak(string s, vector<string> &nums)
    {
        int k = nums.size();
        vector<bool> dp(k + 1);
        for (int i = 0; i < k; ++i)
        {
            if (!dp[i])
                continue;
            for (string n : nums)
            {
                int cur = n.size();
                if (s.substr(i, cur) == n)
                    dp[cur + i] = true;
            }
        }
        return dp[k];
    }
};
class Solution
{
public:
    int maxProfit(vector<int> &a)
    {
        int n = a.size();
        vector<vector<int>> dp(n, vector<int>(2, 0));
        dp[0][0] = 0;
        dp[0][1] = -a[0];
        for (int i = 1; i < n; ++i)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + a[i]);
            dp[i][1] = max(dp[i - 1][1], ((i - 2) >= 0 ? dp[i - 2][0] : 0) - a[i]);
        }
        return max(dp[n - 1][0], dp[n - 1][1]);
    }
};
// 他多记录以个信息。就是是否持有的状态信息。。
// 转台转移方程也很有意思
// 喜欢就去画。不要问任何人。。任何人，任何人。。
