#include <all.h>
// #include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
const int M = 1e6;
// N * M 的矩阵
class Solution
{
public:
    const int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    unordered_map<int, int> mpx;
    unordered_map<int, int> mpy;
    vector<int> hx;
    vector<int> hy;
    bool vi[606][606];
    int n, m;
    void help_x(int x)
    {
        hx.push_back(x);
        if (x)
            hx.push_back(x - 1);
        if (x + 1 < N)
            hx.push_back(x + 1);
    }
    void help_y(int y)
    {
        hy.push_back(y);
        if (y)
            hy.push_back(y - 1);
        if (y + 1 < M)
            hy.push_back(y + 1);
    }
    bool dfs(int x, int y, int &tx, int &ty)
    {
        if (x == tx && y == ty)
            return true;
        vi[x][y] = true;
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if (nx < 0 || ny < 0 || nx == n || ny == m || vi[nx][ny])
                continue;
            if (dfs(nx, ny, tx, ty))
                return true;
        }
        return false;
    }
    bool isEscapePossible(vector<vector<int>> &blocked, vector<int> &source, vector<int> &target)
    {
        if (blocked.empty())
            return true;
        // 离散化
        // 1. 加入路障信息、开始点和终点
        for (auto &i : blocked)
        {
            help_x(i[0]), help_y(i[1]);
        }
        help_x(source[0]), help_y(source[1]);
        help_x(target[0]), help_y(target[1]);
        // 2. 排序 + 去重
        sort(hx.begin(), hx.end());
        sort(hy.begin(), hy.end());
        n = unique(hx.begin(), hx.end()) - hx.begin();
        m = unique(hy.begin(), hy.end()) - hy.begin();
        // 3. 离散化映射
        for (int i = 0; i < n; i++)
        {
            mpx[hx[i]] = i;
            memset(vi[i], false, m);
        }
        for (int i = 0; i < m; i++)
        {
            mpy[hy[i]] = i;
        }
        for (auto &i : blocked)
        {
            // 标记路障信息
            vi[mpx[i[0]]][mpy[i[1]]] = true;
        }
        // 深搜
        return dfs(mpx[source[0]], mpy[source[1]], mpx[target[0]], mpy[target[1]]);
    }
};
// 这题核心的trick 是我们自己推导除了一个理论上的上界。。
// 就是数量的n他能包围的最大的空间大小。
// 然后我们只要遍历方位大于那个空间。就说明我们没有被围死。
// 双方都没有被围死 就说明是可连通的。
// 然后这里vis采用的是一维度化的方式。然后queue放的是pair坐标。。
class Solution
{
public:
    int EDGE = 1e6, MAX = 1e5;
    long long BASE = 13331;
    unordered_set<long long> set;
    int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool isEscapePossible(vector<vector<int>> &blocked, vector<int> &s, vector<int> &t)
    {
        for (auto &p : blocked)
            set.insert(p[0] * BASE + p[1]);
        int n = blocked.size();
        MAX = n * (n - 1) / 2; // 可直接使用 1e5
        return check(s, t) and check(t, s);
    }
    bool check(vector<int> &a, vector<int> &b)
    {
        unordered_set<long long> vis;
        queue<pair<int, int>> q;
        q.push({a[0], a[1]});
        vis.insert(a[0] * BASE + a[1]);
        while (q.size() and vis.size() <= MAX)
        {
            auto t = q.front();
            q.pop();
            int x = t.first, y = t.second;
            if (x == b[0] and y == b[1])
                return true;
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dir[i][0], ny = y + dir[i][1];
                if (nx < 0 or nx >= EDGE or ny < 0 or ny >= EDGE)
                    continue;
                if (set.count(nx * BASE + ny))
                    continue;
                if (vis.count(nx * BASE + ny))
                    continue;
                q.push({nx, ny});
                vis.insert(nx * BASE + ny);
            }
        }
        return vis.size() > MAX;
    }
};

class Solution
{
public:
    int maxt, n, mod;
    int dx[4]{0, -1, 0, 1}, dy[4]{1, 0, -1, 0};
    unordered_set<long long> s;
    bool isEscapePossible(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        mod = 13331;
        n = nums.size();
        maxt = n * (n - 1) / 2;
        for (int i = 0; i < n; ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            s.insert(l * mod + r);
        }
        return ok(a, b) && ok(b, a);
    }
    // 匿名函数 不能直接放回布尔值。。还是偷工减料不成？？？
    // 从两个方向去测试 是否能超过maxt
    bool ok(vector<int> &a, vector<int> &b)
    {
        unordered_set<long long> vis;
        queue<pair<int, int>> q;
        q.push({a[0], a[1]});
        vis.insert(a[0] * mod + a[1]);

        auto nout = [&](int x, int y)
        {
            return x >= 0 && y >= 0 && x < mod * 100 && y < mod * 100 && !s.count(x * mod + y) && !vis.count(x * mod + y);
        };
        while (q.size() && vis.size() <= maxt)
        {
            auto tmp = q.front();
            q.pop();
            int x = tmp.first, y = tmp.second;
            // if (x == b[0] && y == b[1])
            //     break;
            for (int i = 0; i < 4; ++i)
            {
                int l = x + dx[i], r = y + dy[i];
                if (nout(l, r))
                {
                    if (l == b[0] && r == b[1])
                        return true;
                    vis.insert(l * mod + r), q.push({l, r});
                }
            }
        }
        return vis.size() > maxt;
    };
};
// 思路是有了。。但是还是数据过不去 有些边界问题。。
// 这题先这样了。
// 其实。核心是判断 那个n*(n-1)是最大的方位。。这个和代码没有关系。也算是一个trick而已。