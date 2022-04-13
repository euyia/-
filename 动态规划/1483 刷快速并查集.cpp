#include <all.h>
using namespace std;
// 那这个就可以随便套用到有vector的 400ms直接编程200ms。。
static int x = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
// dp[i][j] = v 表示 节点 i 往上的第 2 ^ j 个祖先节点为 v
// 其中 dp[i][0] 表示 i 的父节点

// 下面收集了很多解法。。
// 提交区 真的是宝藏。。
// 你从最快速度的往速度慢的方向 一个个去看算法。。
// 会发现很多非常有趣的细节。。
int dp[50005][17];
class TreeAncestor
{
public:
    TreeAncestor(int n, vector<int> &parent)
    {
        for (int i = 0; i < n; ++i)
        {
            dp[i][0] = parent[i];
        }
        for (int k = 1; k <= 16; ++k)
        {
            for (int i = 0; i < n; ++i)
            {
                dp[i][k] = dp[i][k - 1] == -1 ? -1 : dp[dp[i][k - 1]][k - 1];
            }
        }
    }

    int getKthAncestor(int node, int k)
    {
        while (k > 0 and node != -1)
        {
            int i = __builtin_ctz(k);
            k ^= 1 << i;
            node = dp[node][i];
        }
        return node;
    }
};
const int N = 5e4 + 7;
class TreeAncestor
{
public:
    int dp[N][20]; // dp[i][j] = v 表示 节点 i 往上的第 2 ^ j 个祖先节点为 v
    // 其中 dp[i][0] 表示 i 的父节点
    TreeAncestor(int n, vector<int> &parent)
    {
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = parent[i]; // 初始化
        }
        // 初始化 dp[][] 数组
        memset(dp[0], -1, sizeof dp[0]);
        for (int j = 1; j < 16; j++)
        {
            // 判断每一个节点是否有 第 2 ^ j 个祖先节点
            for (int i = 1; i < n; i++)
            {
                // 枚举每一个非根节点
                if (dp[i][j - 1] != -1)
                    dp[i][j] = dp[dp[i][j - 1]][j - 1];
                else
                    dp[i][j] = -1;
            }
        }
    }

    int help(int k)
    {
        // 得到 k 的最后一位的深度
        // 1 为 0 , 2 为 1 , 4 为 2
        int res = 0;
        while (!(k & 1))
        {
            res++;
            k >>= 1;
        }
        return res;
    }

    int getKthAncestor(int node, int k)
    {
        // 每次找 k 的二进制表示的最低位 1 的祖先
        while (k)
        {
            int j = help(k);
            k &= (k - 1);
            if (dp[node][j] == -1)
                return -1;
            node = dp[node][j];
        }
        return node;
    }
};

class TreeAncestor
{
public:
    const static int N = 5e4 + 10;
    int f[N][20];
    TreeAncestor(int n, vector<int> &parent)
    {
        memset(f, 0, sizeof(f));
        for (int i = 0; i < n; ++i)
            f[i + 1][0] = parent[i] + 1;
        int k = log2(n);
        for (int j = 1; j <= k; ++j)
        {
            for (int i = 1; i <= n; ++i)
            {
                f[i][j] = f[f[i][j - 1]][j - 1];
            }
        }
    }
    int getKthAncestor(int node, int k)
    {
        int t = log2(k);
        node++;
        for (int i = t; i >= 0; --i)
        {
            if (k >= (1 << i))
                node = f[node][i], k -= 1 << i;
        }
        return node - 1;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */
int dp[50005][17];
class TreeAncestor
{
public:
    TreeAncestor(int n, vector<int> &parent)
    {
        memset(dp, 0, sizeof dp);
        for (int i = 0; i < parent.size(); i += 1)
        {
            dp[i + 1][0] = parent[i] + 1;
        }
        for (int i = 1; i <= n; i += 1)
            for (int j = 1; j < 17; j += 1)
                dp[i][j] = dp[dp[i][j - 1]][j - 1];
    }
    int getKthAncestor(int node, int k)
    {
        ++node;
        for (int i = 0; i < 17; i += 1)
        {
            if (k >> i & 1)
                node = dp[node][i];
        }
        return node - 1;
    }
};

/**
 * Your dpeeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */
void soso(int n, vector<int> &p)
{
    for (int i = 0; i < p.size(); ++i)
        dp[i + 1][0] = p[i] + 1;
    for (int i = 0; i < n; ++i)
        for (int j = 1; j < 17; ++j)
            dp[i][j] = dp[dp[i][j - 1]][j - 1];
}
int get(int node, int k)
{
    ++node;
    for (int i = 0; i < 17; ++i)
        if (k >> i & 1)
            node = dp[node][i];
    return --node;
}
// 这边k是通过二进制的运算去取最低位的1.。
// 看不懂。
// 他这样子node 会一直迭代的。