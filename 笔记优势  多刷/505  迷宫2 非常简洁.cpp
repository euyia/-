#include <all.h>
using namespace std;
// 理解了 学过来 你还想屁吃 啊哈哈30分钟给你想屁吃
//  重复的过程中加速
// 熟练才是真的习得。。。。。。。。。。熟练为标准。。未到熟练就还不是你的
class Solution
{
    int dir[4][2] = {
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

public:
    bool hasPath(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        n = nums.size();
        m = nums[0].size();
        queue<pair<int, int>> q;
        // 标记 就直接弄成1 就好了。
        q.push({a[0], a[1]});
        nums[a[0]][a[1]] = 1;
        while (q.size())
        {
            auto tmp = q.front();
            q.pop();
            int x = tmp.first, y = tmp.second;

            for (int i = 0; i < 4; ++i)
            {
                int l = x, r = y;
                while (!out(l, r) && nums[l][r] == 0)
                {
                    // 这就是用pre角度去写。
                    l += dir[i][0], r += dir[i][1];
                }
                // 这边有个问题 就是怎么取他上一个值。。我去。
                l -= dir[i][0], r -= dir[i][1];
                if (nums[l][r] != 2)
                {
                    if (l == b[0] && r == b[1])
                        return true;
                    nums[l][r] = 2;

                    q.push({l, r});
                    // 他也是写的这么丑 ，我还以为有什么其他的角度。。？？
                    //  有点像链表。。可以之前就一直用pre的视角。
                    // 然后用pre->next去判断。然后下面就可以用pre直接写。
                }
            }
        }
        return false;
    }
};

class Solution
{
    int dir[4][2] = {
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

public:
    bool hasPath(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        n = nums.size();
        m = nums[0].size();
        queue<pair<int, int>> q;
        q.push({a[0], a[1]});
        nums[a[0]][a[1]] = 2;
        // 这里直接用一个2 来标志已经访问过的节点，作为visit数组的作用。省了一个数组，不过也是污染了原数组
        // 也可以新建一个visit数组。。这里我是懒得弄。直接在原数组上改了 。
        while (q.size())
        {
            auto tmp = q.front();
            q.pop();
            int x = tmp.first, y = tmp.second;

            for (int i = 0; i < 4; ++i)
            {
                int l = x + dir[i][0], r = y + dir[i][1];
                // 这边要先走一步 不然while循环直接就进不去了。
                while (!out(l, r) && nums[l][r] != 1)
                    l += dir[i][0], r += dir[i][1];
                //因为这边选用的视角是当前节点的，不是pre的。他出while的时候是指向墙体坐标的
                // 所以这里要退一格子。
                l -= dir[i][0], r -= dir[i][1];
                if (nums[l][r] != 2)
                {
                    if (l == b[0] && r == b[1])
                        return true;
                    nums[l][r] = 2;
                    q.push({l, r});
                }
            }
        }
        return false;
    }
};

class Solution
{
    int dir[4][2] = {
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
    int shortestDistance(vector<vector<int>> &nums, vector<int> &a, vector<int> &b)
    {
        n = nums.size();
        m = nums[0].size();
        // 哪有什么万全的条件。。只要有一点能实现就可以了
        // 这里有电脑。有时间 。ok了这两点最重要了
        // 天气热点也好 都不用热身。。
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
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
                return dist[l][r];
            for (int i = 0; i < 4; ++i)
            {
                int cnt = 1;
                int x = l + dir[i][0], y = r + dir[i][1];
                while (!out(x, y) && nums[x][y] != 1)
                {
                    cnt++;
                    x += dir[i][0], y += dir[i][1];
                }
                x -= dir[i][0], y -= dir[i][1];
                if (dist[x][y] > cnt + len)
                {
                    dist[x][y] = cnt + len;
                    q.push({dist[x][y], {x, y}});
                }
            }
        }
        return dist[b[0]][b[1]];
    }
};

class Solution
{
public:
    int shortestDistance(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination)
    {
        int dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0};
        int m = maze.size(), n = maze[0].size();
        vector<vector<int>> dis(m, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;
        q.push({start[0], start[1]});
        dis[start[0]][start[1]] = 0;

        while (!q.empty())
        {
            auto [x, y] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int X = x + dx[i], Y = y + dy[i];
                int d = 0;
                ++d;
                while (X >= 0 && Y >= 0 && X < m && Y < n && maze[X][Y] == 0)
                {
                    X += dx[i];
                    Y += dy[i];
                    ++d;
                }
                X -= dx[i];
                Y -= dy[i];
                --d;
                if (dis[x][y] + d < dis[X][Y])
                {
                    q.push({X, Y});
                    dis[X][Y] = dis[x][y] + d;
                }
            }
        }
        return dis[destination[0]][destination[1]] == INT_MAX ? -1 : dis[destination[0]][destination[1]];
    }
};
// 这个算是非常简洁了。而且他这个算法感觉有有话。。比优先队列。。
// 他这样是不挑选。。就是全部过一遍。没有优选一说
// 就是全部答案都过一遍。所有的可能都过。
// 这样他会回头迭代之前的点。。其实已经不算dijkstra算法了。。
// 。。但是他的优点很明显。。结构简洁+确实work。。。
