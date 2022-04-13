#include <all.h>
using namespace std;
class Solution
{
public:
    string findShortestWay(vector<vector<int>> &maze, vector<int> &ball, vector<int> &hole)
    {
        // 还是要最短路径。
        // 最短路径记录下来路线。然后还要是最小
        // 每个string只要一个就可以了。string 可以在路上就挑选 。每个点只要保留一个就行了。
        // 但是dist 相等的时候就核对。如果相等就取小。
        // 相等的时候因为路径是一样的 所以不用push进入。。小的时候直接替换 但是要push
    }
};

class Solution
{
    int dir[4][2] = {
        {1, 0},
        // 0 r
        // 1 l
        // 2 d
        //  3 u
        {-1, 0},
        {0, 1},
        {0, -1}};

    int n, m;
    bool out(int x, int y)
    {
        if (x < 0 || x >= n)
            return true;
        if (y < 0 || y >= m)
            return true;
        return false;
    }
#define pii pair<int, pair<int, int>>
public:
    string findShortestWay(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        n = nums.size();
        m = nums[0].size();
        // 哪有什么万全的条件。。只要有一点能实现就可以了
        // 这里有电脑。有时间 。ok了这两点最重要了
        // 天气热点也好 都不用热身。。
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        vector<vector<string>> st(n, vector<string>(m, ""));
        priority_queue<pii, vector<pii>, greater<pii>> q;
        // 前面是放 前缀和 后面放坐标
        q.push({0, {a[0], a[1]}});
        dist[a[0]][a[1]] = 0;
        while (q.size())
        {
            auto tmp = q.top();
            q.pop();
            int len = tmp.first, l = tmp.second.first, r = tmp.second.second;

            if (len > dist[l][r])
                continue;
            //    这边还要去没枚举他的子节点。。
            //    也就是建图。。
            if (l == b[0], r == b[1])
                return st[l][r];
            for (int i = 0; i < 4; ++i)
            {
                string t = st[l][r];
                // 拿到上一个节点的string 但是这时候的string是否pop出来时候的最优？？？
                int cnt = 0;
                int x = l, y = r;
                while (!out(x + dir[i][0], y + dir[i][1]) && nums[x + dir[i][0]][y + dir[i][1]] != 1)
                {
                    cnt++;
                    // 这样次数不知道对不对。。可以拿迷宫2 来验证下。
                    // 下面这个也是当时的24点学到的。只要你觉得牛逼的框架 就是刷就是了
                    // 完全不用担心没地方用到。。就是去刷下来。。
                    if (i == 0)
                        t.push_back('r');
                    else if (i == 1)
                        t.push_back('l');
                    else if (i == 2)
                        t.push_back('d');
                    else if (i == 3)
                        t.push_back('u');
                    x += dir[i][0], y += dir[i][1];
                }
                // x -= dir[i][0], y -= dir[i][1];
                if (dist[x][y] > cnt + len)
                {
                    st[x][y] = t;
                    dist[x][y] = cnt + len;
                    q.push({dist[x][y], {x, y}});
                    // 如果 路径比较小 那就直接取而代之。
                }
                else if (dist[x][y] = cnt + len)
                {
                    // 如果路径一样小 。就要去判断t和那个大小了。
                    if (st[x][y] > t)
                    {
                        st[x][y] = t;
                        q.push({0000, {x, y}});
                    }
                    // 如果原来的比较小路径 那么就不用处理
                }
            }
        }
        return st[b[0]][b[1]];
    }
};
class Solution
{
    int dir[4][2] = {
        {1, 0},
        // 0 r
        // 1 l
        // 2 d
        //  3 u
        {-1, 0},
        {0, 1},
        {0, -1}};

    int n, m;
    bool out(int x, int y)
    {
        if (x < 0 || x >= n)
            return true;
        if (y < 0 || y >= m)
            return true;
        return false;
    }
#define pii pair<int, pair<int, int>>
public:
    string shortestDistance(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        n = nums.size();
        m = nums[0].size();
        // 哪有什么万全的条件。。只要有一点能实现就可以了
        // 这里有电脑。有时间 。ok了这两点最重要了
        // 天气热点也好 都不用热身。。
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        vector<vector<string>> st(n, vector<string>(m, ""));
        priority_queue<pii, vector<pii>, greater<pii>> q;
        // 前面是放 前缀和 后面放坐标
        q.push({0, {a[0], a[1]}});
        dist[a[0]][a[1]] = 0;
        while (q.size())
        {
            auto tmp = q.top();
            q.pop();
            int len = tmp.first, l = tmp.second.first, r = tmp.second.second;

            if (len > dist[l][r])
                continue;
            //    这边还要去没枚举他的子节点。。
            //    也就是建图。。
            if (l == b[0] && r == b[1])
                return st[l][r];
            for (int i = 0; i < 4; ++i)
            {
                string t = st[l][r];
                // 拿到上一个节点的string 但是这时候的string是否pop出来时候的最优？？？
                int cnt = 0;
                int x = l, y = r;
                while (!out(x + dir[i][0], y + dir[i][1]) && nums[x + dir[i][0]][y + dir[i][1]] != 1)
                {
                    cnt++;
                    // 这样次数不知道对不对。。可以拿迷宫2 来验证下。
                    // 下面这个也是当时的24点学到的。只要你觉得牛逼的框架 就是刷就是了
                    // 完全不用担心没地方用到。。就是去刷下来。。
                    if (i == 0)
                        t.push_back('r');
                    else if (i == 1)
                        t.push_back('l');
                    else if (i == 2)
                        t.push_back('d');
                    else if (i == 3)
                        t.push_back('u');
                    x += dir[i][0], y += dir[i][1];
                }
                // x -= dir[i][0], y -= dir[i][1];
                if (dist[x][y] > cnt + len)
                {
                    st[x][y] = t;
                    dist[x][y] = cnt + len;
                    q.push({dist[x][y], {x, y}});
                    // 如果 路径比较小 那就直接取而代之。
                }
                else if (dist[x][y] == cnt + len)
                {
                    // 如果路径一样小 。就要去判断t和那个大小了。
                    if (st[x][y] > t)
                    {
                        st[x][y] = t;
                        q.push({dist[x][y], {x, y}});
                        // 这边还要再更新一次 因为基于这个点的string变了
                    }
                    // 如果原来的比较小路径 那么就不用处理
                }
            }
        }
        return st[b[0]][b[1]];
    }
};
// 路径在2是对的。那就还好。

class Solution
{
    int dir[4][2] = {
        // 0 r
        // 1 l
        // 2 d
        //  3 u
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}};

    int n, m;
    bool out(int x, int y)
    {
        if (x < 0 || x >= n)
            return true;
        if (y < 0 || y >= m)
            return true;
        return false;
    }
#define pii pair<int, pair<int, int>>
public:
    string findShortestWay(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        n = nums.size();
        m = nums[0].size();
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        vector<vector<string>> st(n, vector<string>(m, ""));
        priority_queue<pii, vector<pii>, greater<pii>> q;
        // 前面是放 前缀和 后面放坐标
        q.push({0, {a[0], a[1]}});
        dist[a[0]][a[1]] = 0;
        string ans;
        int mint = INT_MAX;
        while (q.size())
        {
            auto tmp = q.top();
            q.pop();
            int len = tmp.first, l = tmp.second.first, r = tmp.second.second;

            if (len > dist[l][r])
                continue;
            //    这边还要去没枚举他的子节点。。
            //    也就是建图。。
            // if (l == b[0]&& r == b[1])
            //     return st[l][r];
            for (int i = 0; i < 4; ++i)
            {
                string t = st[l][r];
                // 拿到上一个节点的string 但是这时候的string是否pop出来时候的最优？？？
                int cnt = 0;
                int x = l, y = r;
                if (i == 0)
                    t.push_back('r');
                else if (i == 1)
                    t.push_back('l');
                else if (i == 2)
                    t.push_back('d');
                else if (i == 3)
                    t.push_back('u');
                while (!out(x + dir[i][0], y + dir[i][1]) && nums[x + dir[i][0]][y + dir[i][1]] != 1)
                {
                    cnt++;
                    x += dir[i][0], y += dir[i][1];
                    if (x == b[0] && y == b[1])
                    {
                        if (mint > cnt + len)
                        {
                            mint = cnt + len;
                            //    printf("%d ",mint);
                            ans = t;
                        }
                        else if (mint == cnt + len && ans > t)
                        {
                            //    printf("%d t",mint);
                            ans = t;
                        }
                    }
                }
                if (dist[x][y] > cnt + len)
                {
                    st[x][y] = t;
                    dist[x][y] = cnt + len;
                    q.push({dist[x][y], {x, y}});
                    // 如果 路径比较小 那就直接取而代之。
                }
                else if (dist[x][y] == cnt + len)
                {
                    // 如果路径一样小 。就要去判断t和那个大小了。
                    if (st[x][y] > t)
                    {
                        // printf("%s ", t.c_str());
                        st[x][y] = t;
                        q.push({dist[x][y], {x, y}});
                        // 这边还要再更新一次 因为基于这个点的string变了
                    }
                    // 如果原来的比较小路径 那么就不用处理
                }
            }
        }

        return ans;
    }
};
// 分割线。。。。。。。。。。。
// ++++++++++++++++++++++++++++++++++++++++++
struct node
{
    int x, y, d;
    string path;
    node(int x, int y, int d, string path) : x(x), y(y), d(d), path(path) {}
    bool operator<(const node &t) const { return (d == t.d) ? path > t.path : d > t.d; }
    // 这边重新定义了小于号。。然后优先队列就不用 去弄了。
    // 而且这边他自己搞个结构。。真的好方便。不用各种pair套pair。。看着丑 又不好用。
    // 这种题目 就非常适合这种自定义的结构体。。一点都不花哨 非常使用。
};
class Solution
{
public:
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    char ds[4] = {'r', 'd', 'l', 'u'};
    string findShortestWay(vector<vector<int>> &maze, vector<int> &ball, vector<int> &hole)
    {
        priority_queue<node> q;
        int n = maze.size(), m = maze[0].size();
        vector<vector<int>> dis(n, vector<int>(m, 1e9));
        // 定义了两个匿名。我日啊。。真是旱的旱死。涝的涝死。。
        // 发现了 这个匿名函数要定义在函数里面。我的写法是没问题的
        auto end = [&](int x, int y)
        { return x == hole[0] && y == hole[1]; };
        // 这里又简洁的定义了 定制版的边界判断函数。
        auto ok = [&](int x, int y)
        { return 0 <= x && x < n && 0 <= y && y < m && !maze[x][y]; };
        q.push(node(ball[0], ball[1], 0, "")), dis[ball[0]][ball[1]] = 0;
        while (!q.empty())
        {
            auto u = q.top();
            q.pop();
            int x = u.x, y = u.y, d = u.d;
            string s = u.s;
            if (end(x, y))
                return s;
            // 直接return啊。。这么肯定吗。
            for (int i = 0; i < 4; i++)
            {
                int nx = x, ny = y, nd = d;
                string ns = s + ds[i];
                while (ok(nx + dx[i], ny + dy[i]))
                {
                    nx += dx[i], ny += dy[i], nd++;
                    if (end(nx, ny))
                        break;
                }
                if (d < nd && nd <= dis[nx][ny])
                    q.push(node(nx, ny, nd, ns)), dis[nx][ny] = nd;
            }
        }
        return "impossible";
    }
};
// 他这里把所有的判断。。out判断。比较大小= 时候的情况 《时候的情况 。全部定制了。
// 全部定制了。。。
// 所以主题代码异常简洁。。简洁到不能在简洁了。。
// 这题肯定会刷的。。
// 8点来刷吧。
// 刷放在来的时候和要走的时候。。是最好的时间
// 今天的做题节奏很好。。有张友池。。。
// 我再去弄一题别的。。谁让我是渣男呢。。哈哈。我爱的是这片森林 不是某棵树。
struct node
{
    int x, y, d;
    string path;
    node(int x, int y, int d, string path) : x(x), y(y), d(d), path(path) {}
    bool operator<(const node &t) const { return (d == t.d) ? path > t.path : d > t.d; }
    // 这边重新定义了小于号。。然后优先队列就不用 去弄了。
    // 而且这边他自己搞个结构。。真的好方便。不用各种pair套pair。。看着丑 又不好用。
    // 这种题目 就非常适合这种自定义的结构体。。一点都不花哨 非常使用。
};

struct node
{
    int x, y, d;
    string path;
    node(int x, int y, int d, string path) : x(x), y(y), d(d), path(path){};
    bool operator<(const node &t) const
    {
        return d == t.d ? path > t.path : d > t.d;
    }
};
// 这真的是一个搜索框架。。
struct node
{
    int x, y, d;
    string path;
    node(int x, int y, int d, string path) : x(x), y(y), d(d), path(path){};
    bool operator<(const node &t) const
    {
        return d == t.d ? path > t.path : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string path;
    node(int x, int y, int d, string path) : x(x), y(y), d(d), path(path){};
    bool operator<(const node &t) const
    {
        return d == t.d ? path > t.path : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string path;
    node(int x, int y, int d, string path) : x(x), d(d), y(y), path(path){};
    bool operator<(const node &t) const
    {
        return d == t.d ? path > t.path : d > t.d;
    }
    // 他这里需要反向greater 所以都是反向定义<符号。
};
struct node
{
    int x, y, d;
    string path;
    node(int x, int y, int d, string path) : x(x), d(d), y(y), path(path){};
    bool operator<(const node &t) const
    {
        return d == t.d ? path > t.path : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t)
        const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 他这个结构体 至少给我三个启发。
// 1 结构题原则上不用大写开头。构造函数也是。
// 2这里构造函数里面的参数可以和成员变量同名。他系统能识别。。这样写法就简单很多。
// 3这里的自定义《可以只传一个参数 就是比较体。。系统默认成员变量为当前结构体的。。这又一次简化了。
// 所以以上是非常简洁有效的写法。。可以说是精辟了。。
// 非常值得刷。。而且这个结构体定制我以后就可以拿过来用了。。在一些题目非常的nice的。。
// 当用pair不够用的时候。。然后又需要自定义规则的时候。。这个就非常nice。。

struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : x(x), y(y), d(y), s(s){};
    bool operator<(const node &t) const
    {
        d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 就写了一下这个结构体而已。感觉思路就又清晰了很多。。

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char ds[4] = {'r', 'd', 'r', 'u'};
class Solution
{
public:
    string findShortestWay(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        priority_queue<node> q;
        int n = nums.size();
        int m = nums[0].size();
        auto end = [&](int x, int y)
        {
            return x == b[0] && y == b[1];
        };
        auto ok = [&](int x, int y)
        {
            return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
        };
        // 要分号
        q.push(node(a[0], a[1], 0, ""));
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        dist[a[0]][a[1]] = 0;
        while (q.size())
        {
            auto u = q.top();
            q.pop();
            int x = u.x, y = u.y, d = u.d;
            string s = u.s;
            if (end(x, y))
                return s;
            for (int i = 0; i < 4; ++i)
            {
                int nx = x + dx[i], ny = y + dy[i], nd = d;
                string ns = s + ds[i];
                while (ok(nx, ny))
                {
                    nx += dx[i], ny += dy[i], nd++;
                    if (end(nx, ny))
                        break;
                }
                if (d < nd && dist[nx][ny] >= nd)
                    q.push(node(nx, ny, nd, ns)), dist[nx][ny] = nd;
                //  逗号。。。真的是666；为了剩下这个大括号 那我可以一直逗号下去？？
            }
        }
        return "impossible";
    }
};
// 早上刷。。在刷
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char ds[4] = {'r', 'd', 'r', 'u'};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
class Solution
{
public:
    string findShortestWay(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        int n = nums.size();
        int m = nums[0].size();
        priority_queue<node> q;
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        auto end = [&](int x, int y)
        {
            return x == b[0] && y == b[1];
        };
        auto ok = [&](int x, int y)
        {
            return x >= 0 && y >= 0 && y < m && x < n && !nums[x][y];
        };
        // 对于这个世界只不过是岑艾中的岑艾。。
        // 何必太过于自我为中心 你这不是为难自己吗。
        q.push(node(a[0], a[1], 0, ""));
        dist[a[0]][a[1]] = 0;
        while (q.size())
        {
            auto u = q.top();
            q.pop();
            int x = u.x, y = u.y, d = u.d;
            string s = u.s;
            if (end(x, y))
                return s;
            for (int i = 0; i < 4; ++i)
            {
                int nx = x, ny = y, nd = d;
                string ns = s + ds[i];
                while (ok(nx + dx[i], ny + dy[i]))
                {
                    nx += dx[i], ny += dy[i], nd++;
                    // nd++ 和面那个if漏了。。不行。。说明你对这两个语句不认知。。
                    // nd++ 和面那个if漏了。。不行。。说明你对这两个语句不认知。。
                    // nd++ 和面那个if漏了。。不行。。说明你对这两个语句不认知。。
                    if (end(nx, ny))
                        break;
                }
                if (d < nd && dist[nx][ny] >= nd)
                    q.push(node(nx, ny, nd, ns)), dist[nx][ny] = nd;
            }
        }
        return "impossible";
    }
};
// 这个框架我吃定了。。
// 囊中之物。。刷的熟透的。
// 困难题真是到处都是宝贝啊。。。。冲困难题就是是挖宝一样。。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 为什么结构体 ，和函数定义 算一个语句
// int  a=1; 很自然也是一个语句啊。。是的。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d > t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 好简洁有效的语言组织形式。。高含量的 。。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), d(d), y(y), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    // 直接这样传进去构造函数。。。。构造函数默认返回的是结构本身；不是指针。
    // 因为我们定义的q 里面要的是node 不是node*。。所以
    // 构造函数就是返回对象本身 可以看做*this；
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s;
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                q.push(node(nx, ny, nd, ns)), dist[nx][ny] = nd;
        }
    }
    return "impossible";
}
// 这题可以多刷点。。
// 体量够大。。适应了非常有利于提升。。
// 就是要适应这种大体量。。。。
// 就是要适应这种大体量。。。。
// 就是要适应这种大体量。。。。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), x(x), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 人总归是人。。我不需要绝对的强。。
// 我只需要相比他们都要强一点就行了。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 一点都不用担心没状态干啥。。
// 随便熟悉之前做过的两道题。。都要三个小时。。。5
// 随便刷熟悉 手法熟悉 也很重要。。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), d(d), y(y){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 不知道为什么 很喜欢写这个结构。。

struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    dist[a[0]][a[1]] = 0;
    q.push(node(a[0], a[1], 0, ""));
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x < n && y < m && x >= 0 && y >= 0 && !nums[x][y];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}
// 真的漂亮 这个结构。。这个搜索模板。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, y))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                q.push(node(nx, ny, nd, ns)), dist[nx][ny] = nd;
        }
    }
}
// 再来一遍。。。提升边数
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                q.push(node(nx, ny, nd, ns)), dist[nx][ny] = nd;
        }
    }
}
//  熟练即使这种大型题 也就5分钟之内。
// 刚来的时候就不刷了把。。感觉刷完 懵逼的。。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] <= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && y < m && x < n && !nums[x][y];
    };
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] == 0;
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), d(d), y(y){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), d(d), y(y){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y <= 0 && x < n && y < m && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (n < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (n < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
}

struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 一张图一辈子。。
// 一张图一辈子。。
// 一张图一辈子。。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
        d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s)
        : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), d(d), y(y){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), d(d), x(x), y(y){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 有种1万行。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    };
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && y < m && x < n && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y <= 0 && x < n && y < m && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx = dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dx[y]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (ok(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
// 日积月累很重要。
// 一步一步
// 然后有一天别人的望望尘莫及 就是你的举手之劳。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int y, int x, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), d(d), y(y), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), d(d), x(x){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), x(x), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : x(x), y(y), d(d), s(s){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && y < m && x < n && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny + dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
// 就是要敲熟练这种大代码量的。。
// 保持这种大题的应有的厚度。。
// 代码能力会不自觉的提升的。
// 就像习惯难题 做回以前的中等题 就会感觉体量特别小。
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
// 就是这样一题一题的练熟练的。。现在这边的熟练度就非常ok
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), y(y), x(x), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny + dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    string s;
    int x, y, d;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
struct node
{
    int x, y, d;
    string s;
    node(int x, int y, int d, string s) : s(s), x(x), y(y), d(d){};
    bool operator<(const node &t) const
    {
        return d == t.d ? s > t.s : d > t.d;
    }
};
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && x < n && y < m && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (nd > d && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
string soso(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
{
    int n = nums.size();
    int m = nums[0].size();
    priority_queue<node> q;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    q.push(node(a[0], a[1], 0, ""));
    dist[a[0]][a[1]] = 0;
    auto ok = [&](int x, int y)
    {
        return x >= 0 && y >= 0 && y < m && x < n && !nums[x][y];
    };
    auto end = [&](int x, int y)
    {
        return x == b[0] && y == b[1];
    };
    while (q.size())
    {
        auto u = q.top();
        q.pop();
        int x = u.x, y = u.y, d = u.d;
        string s = u.s;
        if (end(x, y))
            return s;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x, ny = y, nd = d;
            string ns = s + ds[i];
            while (ok(nx + dx[i], ny + dy[i]))
            {
                nx += dx[i], ny += dy[i], nd++;
                if (end(nx, ny))
                    break;
            }
            if (d < nd && dist[nx][ny] >= nd)
                dist[nx][ny] = nd, q.push(node(nx, ny, nd, ns));
        }
    }
    return "impossible";
}
