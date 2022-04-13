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

//
class Solution
{
public:
    vector<int> dist;
    vector<int> count;

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &nums)
    {
        dist.resize(n);
        count.resize(n);
        vector<vector<int>> dp(n);
        for (int i = 0; i < nums.size(); ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            dp[l].push_back(r);
            dp[r].push_back(l);
        }
        dfs(dp, 0, -1);
        preorder(dp, 0, -1);
        return dist;
    }
    void dfs(vector<vector<int>> &dp, int root, int prev)
    {

        for (int c : dp[root])
            if (c == prev)
                continue;
            else
            {
                dfs(dp, c, root);
                dist[root] += dist[c] + count[c];
                count[root] += count[c];
            }
        count[root]++;
    }
    void preorder(vector<vector<int>> &dp, int root, int prev)
    {
        for (int next : dp[root])
            if (next == prev)
                continue;
            else
            {
                dist[next] = dist[root] - count[next] + dp.size() - count[next];
                preorder(dp, next, root);
            }
    }
};

// 上面是视频解 下面是提交区的
// =====++++++++++++ 下面这个速度快一杯。感觉思路差不多 都分作两种。。
const int N = 30005, M = 90005;

int h[N], e[M], ne[M], idx;
int sum[N], cnt[N], up[N];

class Solution
{
public:
    int n;
    void add(int a, int b)
    {
        e[idx] = b, ne[idx] = h[a], h[a] = idx++;
    }

    vector<int> sumOfDistancesInTree(int N, vector<vector<int>> &edges)
    {
        // 树形DP
        // 设路径上某个点u的子节点为j
        // 记u向下走的路径总和为sum(u), u向上走的路径总和为up(u)
        // sum[u]+=sum[j]+cnt[j]
        // cnt[u]+=cnt[j]

        memset(h, -1, sizeof h);
        idx = 0;
        n = N;
        for (auto &e : edges)
        {
            int a = e[0], b = e[1];
            add(a, b);
            add(b, a);
        }

        dfs1(0, -1);
        dfs2(0, -1);

        vector<int> ans;
        for (int i = 0; i < n; ++i)
            ans.push_back(sum[i] + up[i]);

        return ans;
    }

    void dfs1(int u, int fa)
    {
        sum[u] = 0;
        cnt[u] = 1;
        for (int i = h[u]; ~i; i = ne[i])
        {
            int j = e[i];
            if (j != fa)
            {
                dfs1(j, u);
                sum[u] += sum[j] + cnt[j];
                cnt[u] += cnt[j];
            }
        }
    }

    void dfs2(int u, int fa)
    {
        for (int i = h[u]; ~i; i = ne[i])
        {
            int j = e[i];
            if (j != fa)
            {
                up[j] = up[u] + sum[u] - (sum[j] + cnt[j]) + n - cnt[j];
                dfs2(j, u);
            }
        }
    }
};
// 每次看完这种题 。。感觉人都要虚脱了。。不至于不至于 。啊哈哈哈。。

class Solution
{
public:
    vector<int> ans; //
    vector<int> cnt;
    vector<vector<int>> graph; //存放边的关系，将与某个节点有边关系的所有节点都放到一个数组中
    int n = 0;                 //存放节点数，放在全局是为了避免在DFS函数中传递

    //第一个DFS，通过累加得到根节点0到其他所有节点的距离和以及每个节点作为跟节点时其子树的节点数
    void dfs(int root, int parent)
    {
        vector<int> cur = graph[root];
        for (int i = 0; i < cur.size(); i++)
        {

            if (cur[i] != parent)
            { //这里必须要判断，parent和root的子节点可能存在边关系，会造成重复计算，也会造成死循环
                dfs(cur[i], root);
                cnt[root] += cnt[cur[i]];
                ans[root] += ans[cur[i]] + cnt[cur[i]];
                //某个节点的距离和等于其各个字数的和+字数的大小  理解这个是计算这题的关键
            }
        }
    }
    void dfs2(int root, int parent)
    {
        vector<int> cur = graph[root];
        for (int i = 0; i < cur.size(); i++)
        {
            if (parent != cur[i])
            {
                ans[cur[i]] = ans[root] - cnt[cur[i]] + n - cnt[cur[i]]; //先计算出根节点的子节点，然后再递归去算子节点的子节点
                dfs2(cur[i], root);
            }
        }
    }
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>> &edges)
    {
        if ((N == 0) || edges.empty())
        {
            return {0};
        }

        n = N;
        graph.resize(N);
        ans.resize(N);
        cnt.resize(N);
        // hahaha。这个人和我一样的。。。这个我也这样做过。
        // 但是其实是个坏习惯。。因为1 这样写会不优雅。2是性能上也是不好的。。还是要写参数的
        // 成员变量 对于类来说 也是全局变量。。每次递归都要拷贝一份。？？？？
        // 应该不是。。只是每个人都能拿到它的地址而已吧。。
        // 。。有机会在确认一下 成员变量 是不是函数递归的时候 也要带进去

        for (auto &c : cnt)
        {
            c = 1;
        }
        for (auto e : edges)
        {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        dfs(0, -1);
        dfs2(0, -1);
        return ans;
    }
};

class Solution
{
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &a)
    {
        mp.resize(n);
        cnt.resize(n, 1);
        res.resize(n);
        for (auto b : a)
        {
            int l = b[0], r = b[1];
            mp[l].push_back(r);
            mp[r].push_back(l);
        }
        dfs(0, -1);
        dfs2(0, -1, n);
        return res;
    }
    vector<vector<int>> mp;
    vector<int> cnt;
    vector<int> res;
    void dfs(int root, int pre)
    {
        vector<int> cur = mp[root];
        for (int i = 0; i < cur.size(); ++i)
            if (cur[i] != pre)
            {
                dfs(cur[i], root);
                cnt[root] += cnt[cur[i]];
                res[root] += cnt[cur[i]] + res[cur[i]];
            }
    }
    void dfs2(int root, int pre, int n)
    {
        vector<int> cur = mp[root];
        for (int i = 0; i < cur.size(); ++i)
            if (cur[i] != pre)
            {
                res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
                // 切换视角 。因为root是肯定比子节点先统计好的。。
                // 所以把root 看做是子节点的一个分支。
                dfs2(cur[i], root, n);
            }
    }
};
vector<vector<int>> mp;
vector<int> cnt;
vector<int> res;
int n;
void dfs(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            dfs(cur[i], root);
            cnt[root] += cnt[cur[i]];
            res[root] += cnt[cur[i]] + res[cur[i]];
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            dfs(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            dfs(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            dfs(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            dfs(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            dfs(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}
void find(int root, int pre)
{
    vector<int> cur = mp[root];
    for (int i = 0; i < cur.size(); ++i)
        if (cur[i] != pre)
        {
            res[cur[i]] = res[root] - cnt[cur[i]] + n - cnt[cur[i]];
            find(cur[i], root);
        }
}