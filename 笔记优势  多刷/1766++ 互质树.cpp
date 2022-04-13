#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。

// 他没有说编号大的就是父节点。。

class Solution
{
public:
    vector<vector<int>> G;
    stack<pair<int, int>> s[55];
    vector<int> res;
    void dfs(int root, int pre, int level, vector<int> &a)
    {
        int re = -1, lev = -1;
        for (int i = 1; i <= 50; ++i)
        {
            if (s[i].size() && s[i].top().first > lev && gcd(i, a[root]) == 1)
            {
                re = s[i].top().second;
                lev = s[i].top().first;
            }
        }
        res[root] = re;
        for (int ne : G[root])
        {
            if (ne != pre)
            {
                // 这边是把当前结点压进去。。
                s[a[root]].push({level, root});
                dfs(ne, root, level + 1, a);
                s[a[root]].pop();
            }
        }
    }
    vector<int> getCoprimes(vector<int> &nums, vector<vector<int>> &edges)
    {
        int n = nums.size();
        G.resize(n);
        for (auto &e : edges)
        {
            G[e[0]].push_back(e[1]);
            G[e[1]].push_back(e[0]);
            // 无向图 他双向建。。好久没用到这种方法了。
        }
        res.resize(n);
        dfs(0, -1, 0, nums);
        return res;
    }
};
// 这题不懂的人卡在哪里。。就是主要思路没有。
// 这里主要是这个递归。和stack 运行的逻辑没看懂。。
// 利用nums[i]的值只有50种这点作为突破口。

// 冲是对的。。不过要反复的去冲 +刷。这就是最高效的。。。
// 冲是对的。。不过要反复的去冲 +刷。这就是最高效的。。。
// 冲是对的。。不过要反复的去冲 +刷。这就是最高效的。。。
// 今天冲不下来 明填再冲。。。。。。。

// 在量级达到超出常识。。
// 对于字母 num 50 这种数量级的枚举。。反而就变成更快的 更合理的。
// 有趣。。
// 就像字母 就是去枚举所有可能的相邻字母。。

// 弄清楚 然后多刷 。。死刷。。。。

class Solution
{
    stack<pair<int, int>> nums[55];
    // 数组下标为num值。。first 层数。second 值当前的序列号
    // 遍历的时候直接遍历值。。然后1 互质与否 2 层数是不是最大。
    vector<int> res;

public:
    vector<int> getCoprimes(vector<int> &a, vector<vector<int>> &b)
    {
        int n = b.size();
        vector<vector<int>> dp(n);
        res.resize(n);
        for (int i = 0; i < n + 1; ++i)
        {
            // 因为这边n其实是a的。然后b是边数 n-1.。。
            int l = b[i][0], r = b[i][1];
            dp[l].push_back(r);
            dp[r].push_back(l);
        }
        dfs(0, -1, 0, dp, a);
        return res;
    }
    void dfs(int root, int pre, int cnt, vector<vector<int>> &dp, vector<int> &a)
    {
        int l = -1, r = -1;
        for (int i = 1; i <= 50; ++i)
        {
            if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
            {
                l = nums[i].top().first;
                // 这个是记录更新层数
                // 下面这个是保持同步记录对应的祖先节点序列号
                r = nums[i].top().second;
            }
        }
        res[root] = r;
        for (auto d : dp[root])
            if (d != pre)
            {
                nums[a[d]].push({cnt, d});
                dfs(d, root, cnt + 1, dp, a);
                nums[a[d]].pop();
            }
    }
};
vector<vector<int>> dp;
vector<int> res;
stack<pair<int, int>> nums[55];
class Solution
{
public:
    vector<int> getCoprimes(vector<int> &a, vector<vector<int>> &b)
    {
        int n = a.size();
        dp.resize(n);
        res.resize(n);
        for (int i = 0; i < n - 1; ++i)
        {
            int l = b[i][0], r = b[i][1];
            dp[l].push_back(r);
            dp[r].push_back(l);
        }
        dfs(0, -1, 0, a);
        return res;
    }
    void dfs(int root, int pre, int lev, vector<int> &a)
    {
        int l = -1, r = -1;
        for (int i = 1; i < 51; ++i)
        {
            if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
            {
                l = nums[i].top().first;
                r = nums[i].top().second;
            }
        }
        res[root] = r;
        for (auto d : dp[root])
            if (d != pre)
            {
                nums[a[root]].push({lev, root});
                dfs(d, root, lev + 1, a);
                nums[a[root]].pop();
            }
    }
};
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int level, vector<int> &a)
{
    int lev = -1, index = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > lev && gcd(i, a[root]) == 1)
        {
            lev = nums[i].top().first;
            index = nums[i].top().second;
        }
    }
    res[root] = index;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({level, root});
            dfs(d, root, level + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
// 用值作为 下标  相当于是维度的哈希表了。。。下标相当于key在用。
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> sosos(vector<int> &a, vector<vector<int>> &b)
{
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    stack<pair<int, int>> nums[55];
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    // 这个框架设计 真的很奇妙。
    // 下面递归之前 把当前节点放进去。让后进入dfs下一层的时候
    // 从儿子的角度 回头看父亲放进去的东西。。。

    // 普通的后序是dfs 出来 之后 看从父亲的角度看儿子给了什么东西。。
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    stack<pair<int, int>> nums[55];
    // 数组里面可以嵌套任何东西。
    // 这里stack 本质上也是数组或者链表而已。
    int n = a.size();
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}

void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
    {
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
    }
}
int n;
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    stack<pair<int, int>> a[55];
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}

vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    stack<pair<int, int>> a[55];
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    stack<pair<int, int>> a[55];
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
vector<int> soso(vector<int> &a, vector<vector<int>> &b)
{
    stack<pair<int, int>> nums[55];
    dp.resize(n);
    res.resize(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int l = b[i][0], r = b[i][1];
        dp[l].push_back(r);
        dp[r].push_back(l);
    }
    dfs(0, -1, 0, a);
    return res;
}
void dfs(int root, int pre, int cnt, vector<int> &a)
{
    int l = -1, p = -1;
    for (int i = 1; i < 51; ++i)
    {
        if (nums[i].size() && nums[i].top().first > l && __gcd(i, a[root]) == 1)
        {
            l = nums[i].top().first;
            p = nums[i].top().second;
        }
    }
    res[root] = p;
    for (auto d : dp[root])
        if (d != pre)
        {
            nums[a[root]].push({cnt, root});
            dfs(d, root, cnt + 1, a);
            nums[a[root]].pop();
        }
}
// 安静的穿过这个世界 刘国这个世界。。。。加油。飞起来。
