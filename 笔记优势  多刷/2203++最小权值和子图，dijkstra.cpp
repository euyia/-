#include <all.h>
using namespace std;
// 12月份的帖子。。不过现在的我又不是当时的我了。。
// 不断的冲困难题。。你会一层一层的蜕变。
// 因为刷熟练度的提升而成长，因为冲困难题而锐变。。
#define ll long long
#define pli pair<ll, int>
class Solution
{
public:
    long long minimumWeight(int n, vector<vector<int>> &nums, int a, int b, int c)
    {
        vector<vector<pair<int, int>>> mp1(n), mp2(n);
        vector<ll> dist1(n, 1e15);
        vector<ll> dist2(n, 1e15);
        vector<ll> dist3(n, 1e15);
        // 这里不需要vis 因为是有向图。不存在回头的情况。vis就是为了避免回头访问
        for (int i = 0; i < nums.size(); ++i)
        {
            int l = nums[i][0], mid = nums[i][1], r = nums[i][2];
            mp1[l].push_back({mid, r});
            mp2[mid].push_back({l, r});
        }
        helper(a, mp1, dist1);
        helper(b, mp1, dist2);
        helper(c, mp2, dist3);
        ll res = 1e15;
        for (int i = 0; i < n; ++i)
        {
            res = min(res, dist1[i] + dist2[i] + dist3[i]);
        }
        if (res >= 1e15)
            return -1;
        return res;
    }
    void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
    {
        // 其实就是层序遍历。+优先队列
        // 很特别的一种组合。。就形成了很特别的算法结果
        priority_queue<pli, vector<pli>, greater<pli>> q;
        // 这中优先队列的定义很简单。。就是前面一个位置是元素的节点样式。
        // 后面两个就用vector 和greater套上去就可以了l
        dist[root] = 0;
        // 这个初始化。根节点是0；
        q.push({0, root});
        // 这里是前缀和。。前缀和 前缀和。。0.。。
        // 这里是前缀和。。前缀和 前缀和。。0.。。
        // 这里是前缀和。。前缀和 前缀和。。0.。。
        // 这样子相对于教材 效率更高。。
        // 只取已经有链接的部分。
        // 放进去说明是有效的可选链接节点 就是有路径了 不是intmax的。。
        //pop出来才是已经选了。
        while (q.size())
        {
            auto tmp = q.top();
            q.pop();
            ll tmp_len = tmp.first;
            int tmp_id = tmp.second;
            // 这边因为很多变量 所以变量的名字清晰度的权重就要比较高。。舍弃变量的简洁换取清晰定义
            if (tmp_len > dist[tmp_id])
                continue;
            //  这个在于有多条重复线路。。是很有必要的。但是为什么会节省那么多时间？？？？
            for (auto m : mp[tmp_id])
            {
                int next_id = m.first, next_len = m.second;
                if (dist[next_id] > tmp_len + next_len)
                {
                    dist[next_id] = tmp_len + next_len;
                    q.push({dist[next_id], next_id});
                }
            }
        }
    }
};
// mp要定义大小才能够用下标的方式去访问。
// dist 要初始化
// 那个多条线路的要减枝。
// 优先队列 dist 数组之间的数字迭代也是要理解
// dist初始化为什么是1e15.。。这统统都是细节。。
long long minimumWeight(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], m = nums[i][2];
        mp1[l].push_back({r, m});
        mp2[r].push_back({l, m});
    }
    vector<ll> dist1(n, 1e15);
    vector<ll> dist2(n, 1e15);
    vector<ll> dist3(n, 1e15);
    helper(a, mp1, dist1);
    helper(b, mp1, dist2);
    helper(c, mp2, dist3);
    ll res = 1e15;
    for (int i = 0; i < n; ++i)
    {
        res = min(res, dist1[i] + dist2[i] + dist3[i]);
    }
    if (res >= 1e15)
        return -1;
    return res;
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    dist[root] = 0;
    q.push({0, root});
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vlen = tmp.first, vid = tmp.second;
        if (vlen > dist[vid])
            continue;
        for (auto m : mp[vid])
        {
            int wid = m.first, wlen = m.second;
            if (dist[wid] > wlen + vlen)
            {
                dist[wid] = wlen + vlen;
                q.push({wlen + vlen, wid});
            }
        }
    }
}
// 可以的。。刚开始比较慢 慢慢熟练它。。就消化了。。
ll soso(int n, int a, int b, int c, vector<vector<int>> &nums)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({r, len});
        mp2[r].push_back({l, len});
    }
    vector<ll> dist1(n, 1e15);
    vector<ll> dist2(n, 1e15);
    vector<ll> dist3(n, 1e15);
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    dist[root] = 0;
    q.push({0, root});
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wi = m.first, wl = m.second;
            if (dist[wi] > wl + vl)
            {
                dist[vi] = wl + vl;
                q.push({wl + vl, wi});
            }
        }
    }
}
// #define pil pair<int,ll>
// 统一结构位置。。节点放前面。然后长度放后面。。 。。。不行。。
// 因为这里优先队列就是要用那个长度来选的。。裂开。。
// 那就把图反过来。。这样两个pair结构上一致 不会那么绕。。
ll minimumWeight(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({len, r});
        mp2[r].push_back({len, l});
    }
    vector<ll> dist1(n, 1e15);
    vector<ll> dist2(n, 1e15);
    vector<ll> dist3(n, 1e15);
    helper(a, mp1, dist1);
    helper(c, mp2, dist3);
    helper(b, mp1, dist2);
    ll res = mod;
    // 这种把他抽象化的定义其实真的很实用。。
    // 而不用写无异议的数字
    for (int i = 0; i < n; ++i)
    {
        res = min(res, dist1[i] + dist2[i] + dist3[i]);
    }
    if (res >= mod)
        return -1;
    return res;
}
ll mod = 1e15;
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    q.push({0, root});
    dist[root] = 0;
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wl = m.first, wi = m.second;
            if (dist[wi] > vl + wl)
            {
                dist[wi] = vl + wl;
                q.push({wl + vl, wi});
            }
        }
    }
}
// 看数据。。就写了200行 。。不要自我感觉良好。。数据说话。
ll soso(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({len, r});
        mp2[r].push_back({len, l});
    }
    vector<ll> dist1(n, mod);
    vector<ll> dist2(n, mod);
    vector<ll> dist3(n, mod);
    helper(a, mp1, dist1);
    helper(b, mp1, dist2);
    helper(c, mp2, dist3);
    ll res = mod;
    for (int i = 0; i < n; ++i)
    {
        res = min(res, dist1[i] + dist2[i] + dist3[i]);
    }
    return res > mod ? -1 : res;
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    dist[root] = 0;
    priority_queue<pli, vector<pli>, greater<pli>> q;
    q.push({0, root});
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wl = m.first, wi = m.second;
            if (vl + wl < dist[wi])
            {
                dist[wi] = wl + vl;
                q.push({wl + vl, wi});
            }
        }
    }
}
ll soso(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({r, len});
        mp2[r].push_back({l, len});
    }
    vector<ll> dist1(n, mod);
    vector<ll> dist2(n, mod);
    vector<ll> dist3(n, mod);
    helper(a, mp1, dist1);
    helper(b, mp1, dist2);
    helper(c, mp2, dist3);
    ll res = mod;
    for (int i = 0; i < n; ++i)
        res = min(res, dist1[i] + dist2[i] + dist3[i]);
    return res >= mod ? -1 : res;
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    dist[root] = 0;
    q.push({0, root});
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wi = m.first, wl = m.second;
            if (dist[wi] > vl + wl)
            {
                dist[wi] = vl + wl;
                q.push({wl + vl, wi});
            }
        }
    }
}
ll soso(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({l, len});
        mp2[r].push_back({r, len});
    }
    vector<ll> dist1(n, mod);
    vector<ll> dist2(n, mod);
    vector<ll> dist3(n, mod);
    helper(a, mp1, dist1);
    helper(b, mp1, dist2);
    helper(c, mp2, dist3);
    ll res = mod;
    for (int i = 0; i < n; ++i)
        res = min(res, dist1[i] + dist2[i] + dist2[i]);
    return res >= mod ? -1 : res;
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    dist[root] = 0;
    q.push({0, root});
    // 优先队列放浅醉和 和节点id
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wi = m.first, wl = m.second;
            if (vl + wl < dist[wi])
            {
                dist[wi] = vl + wl;
                q.push({wl + vl, wi});
            }
        }
    }
}
long long soso(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({r, len});
        mp2[r].push_back({l, len});
    }
    vector<ll> dist1(n, mod);
    vector<ll> dist2(n, mod);
    vector<ll> dist3(n, mod);
    helper(a, mp1, dist1);
    helper(b, mp1, dist2);
    helper(c, mp2, dist3);
    ll res = mod;
    for (int i = 0; i < n; ++i)
        res = min(res, dist1[i] + dist2[i] + dist3[i]);
    return res == mod ? -1 : res;
    // 最大也只能是mod 因为上面迭代的min。。。
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    dist[root] = 0;
    q.push({0, root});
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wi = m.first, wl = m.second;
            if (dist[wi] > wl + vl)
            {
                dist[wi] = vl + wl;
                q.push({wl + vl, wi});
            }
        }
    }
}
ll soso(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({r, len});
        mp2[r].push_back({l, len});
    }
    vector<ll> dist1(n, mod);
    vector<ll> dist2(n, mod);
    vector<ll> dist3(n, mod);
    helper(a, mp1, dist1);
    helper(b, mp1, dist2);
    helper(c, mp2, dist3);
    ll res = mod;
    for (int i = 0; i < n; ++i)
        res = min(res, dist1[i] + dist2[i] + dist3[i]);
    return res == mod ? -1 : res;
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    dist[root] = 0;
    q.push({0, root});
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        // 这边就是那个比如虽然他直连root 但是权重100
        // 后期又发现了一个路线到他只要10，那么dist就更新了。。
        // 更新之后 q里面还存着100的那个节点。。
        // 当他自后po出来的时候 就要pass掉他。。
        for (auto m : mp[vi])
        {
            int wi = m.first, wl = m.second;
            if (dist[wi] > vl + wl)
            {
                q.push({wl + vl, wi});
                dist[wi] = wl + vl;
            }
        }
    }
}
ll soso(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({r, len});
        mp2[r].push_back({l, len});
    }
    vector<ll> dist1(n, mod);
    vector<ll> dist2(n, mod);
    vector<ll> dist3(n, mod);
    helper(a, mp1, dist1);
    helper(b, mp1, dist2);
    helper(c, mp2, dist3);
    ll res = mod;
    for (int i = 0; i < n; ++i)
        res = min(res, dist1[i] + dist2[i] + dist3[i]);
    return res == mod ? -1 : res;
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    dist[root] = 0;
    q.push({0, root});
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wi = m.first, wl = m.second;
            if (dist[wi] > vl + wl)
            {
                q.push({wl + vl, wi});
                dist[wi] = wl + vl;
            }
        }
    }
}
void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli, vector<pli>, greater<pli>> q;
    dist[root] = 0;
    q.push({0, root});
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wi = m.first, wl = m.second;
            if (dist[wi] > vl + wl)
            {
                q.push({wl + vl, wi});
                dist[wi] = wl + vl;
            }
        }
    }
}
// 刷阅读量 =提高智商。。刷题提高成绩一样。
ll minimumWeight(int n, vector<vector<int>> &nums, int a, int b, int c)
{
    vector<vector<pair<int, int>>> mp1(n), mp2(n);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1], len = nums[i][2];
        mp1[l].push_back({r, len});
        mp2[r].push_back({l, len});
    }
    vector<ll> dist1(n, mod);
    vector<ll> dist2(n, mod);
    vector<ll> dist3(n, mod);
    helper(a, mp1, dist1);
    helper(b, mp1, dist2);
    helper(c, mp2, dist3);
    ll res = mod;
    for (int i = 0; i < n; ++i)
        res = min(res, dist1[i] + dist2[i] + dist3[i]);
    return res == mod ? -1 : res;
}
struct pli
{
    int first, second;
    bool operator<(const pli &t) const
    {
        return first == t.first ? second > t.second ? first > t.first;
    }
};

void helper(int root, vector<vector<pair<int, int>>> &mp, vector<ll> &dist)
{
    priority_queue<pli> q;
    q.push({0, root});
    dist[root] = 0;
    while (q.size())
    {
        auto tmp = q.top();
        q.pop();
        ll vl = tmp.first;
        int vi = tmp.second;
        if (vl > dist[vi])
            continue;
        for (auto m : mp[vi])
        {
            int wl = m.second, wi = m.first;
            if (dist[wi] > wl + vl)
            {
                dist[wi] = wl + vl;
                q.push({wl + vl, wi});
            }
        }
    }
}
