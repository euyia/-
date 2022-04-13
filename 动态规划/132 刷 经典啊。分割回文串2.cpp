#include <all.h>
using namespace std;
// 那这个就可以随便套用到有vector的 400ms直接编程200ms。。
static int x = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution
{
public:
    unordered_map<int, vector<int>> mp;
    int minCut(string s)
    {
        int n = s.size();
        for (int i = 0; i < 2n - 1; ++i)
        {
            int l = i / 2, r = i / 2 + i % 2;
            while (l >= 0 && r < n && s[l] == s[r])
            {
                mp[l].push_back(r - l + 1);
                l--;
                r++;
            }
            for (auto m : mp)
                sort(m.second.rbegin(), m.second.rend());
            dfs(0, n, 0);
            return maxt;
        }
        int maxt;
        void dfs(int l, int n, int count)
        {
            if (maxt != INT_MAX)
                return;
            if (l == n && count < maxt)
            {
                maxt = count;
                return;
            }
            for (int i = 0; i < mp[l].size(); ++i)
            {
                dfs(l + mp[l][i], n, count + 1);
            }
        }
    }
};
// 模拟这条路走不下去了。。。
// 应该是要发现其他的途径。。去拼起来？

class Solution
{
public:
    int minCut(string s)
    {
        int n = s.size();
        vector<vector<int>> g(n, vector<int>(n, true));

        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                g[i][j] = (s[i] == s[j]) && g[i + 1][j - 1];
            }
        }
        // ......回文还能这样dp求的。。。牛逼。。。。我的天。。
        vector<int> f(n, INT_MAX);
        for (int i = 0; i < n; ++i)
        {
            if (g[0][i])
            {
                f[i] = 0;
            }
            else
            {
                for (int j = 0; j < i; ++j)
                {
                    if (g[j + 1][i])
                    {
                        f[i] = min(f[i], f[j] + 1);
                    }
                }
            }
        }

        return f[n - 1];
    }
};

class Solution
{
public:
    int minCut(string s)
    {
        int n = s.size();
        int dp[n];
        int mp[n][n];
        memset(mp, 0, sizeof(mp));
        for (int i = 0; i < 2 * n - 1; ++i)
        {
            int l = i / 2, r = i / 2 + i % 2;
            while (l >= 0 && r < n && s[l] == s[r])
            {
                mp[l][r] = 1;
                l--;
                r++;
            }
        }
        dp[0] = 0;
        for (int i = 1; i < n; ++i)
        {
            if (mp[0][i])
                dp[i] = 0;
            int mint = INT_MAX;
            for (int j = 0; j < i; ++j)
            {
                if (mp[j + 1][i])
                    mint = min(mint, dp[j] + 1);
            }
            dp[i] = mint;
        }
        return dp[n - 1];
    }
};
// 还是挺多细节 mint 初始值，j+1。。。去调试下就很形象了。
int n;
int dp[2000];
int mp[2000][2000];
int mint = INT_MAX;
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 0; i < 2 * n - 1; ++i)
    {
        int l = i / 2, r = i / 2 + i % 2;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            mp[l][r] = 1;
            l--;
            r++;
        }
    }
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
// 这个mp 核心 就是再深度抽象成 l r 来表示string
// 数学的 两个点足以确定一个线段。
// 是否足够root
// 为什么维度是最高级的分类。
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(dp[j] + 1, mint);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++i)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
// 没有上手敲觉得好像没啥好敲的。
// 但是一旦敲起来。
// 就非常舒服像弹钢琴一样。。。
// 而且敲熟练是非常有利的。。提升自己的代码能力。。
// 这种是肌肉记忆。。。也就是刷是最快的建立这种代码能力。。
// 没有1000行的都可以补全。。。
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);

        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++i)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        int mint = INT_MAX;
        // 每个i都要重置这个mint 因为是独立的
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        int mint = i - 1;
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        int mint = i;
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        int mint = i;
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        int mint = i;
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        int mint = i;
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        int mint = i;
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
// 先有主动重复新知识的习惯
// 然后在重复的过程中 加快速度、
// 因为熟练就是速度快。
// 熟练的 才是有价值的。。。。
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
        {
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        }
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
        {
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        }
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][j])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
        {
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        }
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
int soso(string s)
{
    for (int i = 1; i < n; ++i)
    {
        if (mp[0][i])
            continue;
        for (int j = 0; j < i; ++j)
            if (mp[j + 1][i])
                mint = min(mint, dp[j] + 1);
        dp[i] = mint;
    }
    return dp[n - 1];
}
// 这个dp算分割数  很巧妙了。。