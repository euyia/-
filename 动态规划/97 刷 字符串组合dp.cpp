#include <all.h>
using namespace std;
// 这题dp的定义是 对应 的i j 长度的a b字符串 是否能够实现i+j的长度的c。。
// 然后 i j 的 依赖于i-1 j 和i j-1 的结果。。两种情况 来推断。。
// dp 的思维方式 是依赖于i-1 或者j-1 。。而不直接依赖于最基本的。
class Solution
{
public:
    string i, j, k;
    int n, m, p;
    bool flag;
    bool isInterleave(string a, string b, string c)
    {
        i = a, j = b, k = c;
        string all = a + b;
        sort(all.begin(), all.end());
        sort(c.begin(), c.end());
        if (all != c)
            return false;
        // 已经尽量减枝了。。还是不行。超时。
        n = a.size();
        m = b.size();
        p = c.size();
        if (n + m != p)
            return false;

        dfs(0, 0, 0);
        return flag;
        // 动态也是遍历，只不过是聪明的遍历而已
        //     可以用回溯，只有每次选择只有两条路。。
        //     分别如果都可以那就都递归进去，
        //     如果都不行就说明走不通。
        //     然后只要有一条路走能走到底，而且三个都
        //     刚好没了。。。这条件好像有点苛刻，但是题目就是这样要求，而且只要有一条路走通就可以，所以也还行
    }
    void dfs(int a, int b, int c)
    {
        if (a == n && b == m && c == p)
        {
            flag = true;
            return;
        }
        if (c == p)
            return;
        if (k[c] == j[b])
            dfs(a, b + 1, c + 1);
        if (k[c] == i[a])
            dfs(a + 1, b, c + 1);
    }
};
// 像周赛遇到这种 你怎么办。。
// 这种就是套路缺陷。。基本没办法弥补的。。
// 就像拉伸度不够。。你没办法唱高音的。。什么技巧都不行。
// 所以 套路是基础。。基础要充分。

class Solution
{
public:
    bool dp[101][101];
    bool isInterleave(string a, string b, string c)
    {
        int n = a.size();
        int m = b.size();
        int p = b.size();
        if (m + n != p)
            return false;

        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++)
            {
                if (i == 0 && j == 0)
                    dp[i][j] = 1;
                else if (i == 0)
                    dp[0][j] = b[j - 1] == c[j - 1];
                else if (j == 0)
                    dp[i][0] = a[i - 1] == c[i - 1];
                else
                    dp[i][j] = dp[i][j - 1] && b[j - 1] == c[i + j - 1] ||
                               dp[i - 1][j] && a[i - 1] == c[i + j - 1];
            }
        return dp[n][m];
    }
};