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
// a[行 i n][列 j m].。。。就这样用。。很自然的。。不会错。
// a[行 i n][列 j m].。。。就这样用。。很自然的。。不会错。
// a[行 i n][列 j m].。。。就这样用。。很自然的。。不会错。
//   然后这题 是分别从两个序列 从小到大的长度。。慢慢去推出来。
// a字符的i长度和b字符的j长度的多少？是来自于a[i]是否dengyu b[j]和之前的答案推算出来的。
class Solution
{
public:
    int longestCommonSubsequence(string a, string b)
    {
        // a[行 i n][列 j m].。。。就这样用。。很自然的。。不会错。
        int n = a.size();
        int m = b.size();
        int dp[n][m];
        dp[0][0] = a[0] == b[0] ? 1 : 0;
        for (int i = 1; i < n; ++i)
            dp[i][0] = b[0] == a[i] ? 1 : dp[i - 1][0];
        for (int j = 1; j < n; ++j)
            dp[0][j] = a[0] == b[j] ? 1 : dp[0][j - 1];
        for (int i = 1; i < n; ++i)
            for (int j = 1; j < n; ++j)
            {
                if (a[i] == b[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        return dp[n - 1][m - 1];
    }
};