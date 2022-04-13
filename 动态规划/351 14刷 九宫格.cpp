#include <all.h>
using namespace std;
// 这个算是改好的终极版。。速度最快的。。
// dfs次数最少的
class Solution
{
public:
    vector<int> dp;
    int check[9];
    int ans;
    void dfs(int m, int n, int step, int x, int y)
    {
        if (step >= m && step <= n)
            ans++;
        if (step == n)
            return;
        check[x * 3 + y] = 1;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (x == i && y == j)
                    continue;
                if (check[i * 3 + j])
                    continue;
                if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !check[(x + i) / 2 * 3 + (y + j) / 2])
                    continue;
                dfs(m, n, step + 1, i, j);
            }
        }
        check[x * 3 + y] = 0;
    }

    int numberOfPatterns(int m, int n)
    {

        dfs(m, n, 1, 0, 0);
        int a = 4 * ans;
        ans = 0;
        dfs(m, n, 1, 0, 1);
        ans *= 4;
        dfs(m, n, 1, 1, 1);
        return ans + a;
    }
};

// 下面这个版本 我也是改的。从java 不知道为啥不行。。但是这个做表 懒得去Shaun。
class Solution
{
public:
    int numberOfPatterns(int m, int n)
    {
        int mp[10][10];
        //这个mp数组是为了记录跳跃的点数，比如说从1到3，就跳跃2
        //而且因为是对称的操作，所以3到1也是如此
        mp[1][3] = mp[3][1] = 2;
        mp[1][7] = mp[7][1] = 4;
        mp[3][9] = mp[9][3] = 6;
        mp[4][6] = mp[6][4] = mp[2][8] = mp[8][2] = 5;
        mp[1][9] = mp[9][1] = mp[3][7] = mp[7][3] = 5;
        mp[7][9] = mp[9][7] = 8;
        int res = 0;
        int visited[10];
        //深度遍历，遍历每一个点到点的次数
        for (int i = m; i <= n; i++)
        {
            //因为从1,3,7,9出发都是对称的，为什么i要减一呢，因为我们是从1出发，先天少了一个节点
            res += dfs(1, visited, mp, i - 1) * 4;
            //2,4,6,8对称
            res += dfs(2, visited, mp, i - 1) * 4;
            //唯独5独立
            res += dfs(5, visited, mp, i - 1);
        }
        return res;
    }
    //深度遍历
    int dfs(int cur, int visited[], int mp[][10], int t)
    {
        if (t == 0)
        {
            return 1;
        }
        int res = 0;
        //深度遍历都是渣男，做了又要反悔找下家
        // visited[cur] = true;

        for (int i = 1; i <= 9; i++)
        {
            //看当前的节点到i节点的路径中有没有其他节点在中间
            int cross = mp[cur][i];
            //如果这一次我们的i节点没有被读过，那么就判断有没有路过中间节点(visited[cross])或者这两个节点相邻没有中间节点（curThrough=0）
            if (!visited[i] && (cross == 0 || visited[cross]))
            {
                // 感觉这个算法 都智能了。。。我的天
                visited[i] = 1;
                res += dfs(i, visited, mp, t - 1);
                visited[i] = 0;
            }
        }
        //渣男行径开始了
        // visited[cur] = false;
        return res;
    }
};
// 多琢磨总是能琢磨出来的。。
// 多撸会儿 总是能撸出来的。。哈哈哈。。
class Solution
{
public:
    vector<int> dp;
    // vector<int> check = vector<int>(9, 0);
    // 还有这样的骚操作。。泥马。。你到底是什么人啊。
    // 但是这个vetor不好用啊。。
    int check[9];
    // int ans = 0;

    int dfs(int t, int x, int y)
    {
        if (t == 0)
            return 1;
        check[x * 3 + y] = 1;
        int res = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (x == i && y == j)
                    continue;
                // 不包括起点
                if (check[i * 3 + j])
                    continue;
                // 已经访问过的跳过。
                if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !check[(x + i) / 2 * 3 + (y + j) / 2])
                    // 不知道他这个这么归纳出来的。。神乎其神。。
                    // 看图 会发现。。刚好互相挡住的位置。。就是相减绝对值确实是2的倍数。。
                    // 然后后面的check。。这个计算方式刚好是两个点二维扁平化的重点。
                    // 。。。。确实人家就是实现了。说明这个关系是对的。
                    continue;
                res += dfs(t - 1, i, j);
            }
        }
        check[x * 3 + y] = 0;
        return res;
    }

    int numberOfPatterns(int m, int n)
    {
        // for (int i = 0; i < 3; i++)
        // {
        //     for (int j = 0; j < 3; j++)
        //     {
        //         check[i * 3 + j] = 1;
        //         dfs(1, m, n, i, j);
        //         check[i * 3 + j] = 0;
        //     }
        // }
        // return ans;
        int res = 0;
        for (int i = m; i <= n; ++i)
        {
            res += dfs(i - 1, 0, 0) * 4;
            res += dfs(i - 1, 0, 1) * 4;
            res += dfs(i - 1, 1, 1);
        }
        return res;
    }
};
// 这个算是改好的终极版。。速度最快的。。
// dfs次数最少的
class Solution
{
public:
    vector<int> dp;
    int check[9];
    int ans;
    void dfs(int m, int n, int step, int x, int y)
    {
        if (step >= m && step <= n)
            ans++;
        if (step == n)
            return;
        check[x * 3 + y] = 1;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (x == i && y == j)
                    continue;
                if (check[i * 3 + j])
                    continue;
                if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !check[(x + i) / 2 * 3 + (y + j) / 2])
                    continue;
                dfs(m, n, step + 1, i, j);
            }
        }
        check[x * 3 + y] = 0;
    }

    int numberOfPatterns(int m, int n)
    {

        dfs(m, n, 1, 0, 0);
        int a = 4 * ans;
        ans = 0;
        dfs(m, n, 1, 0, 1);
        ans *= 4;
        dfs(m, n, 1, 1, 1);
        return ans + a;
    }
};
// 这题还没想好怎么刷。
// 刷下这个dfs把。。
int ans;
int vis[9];
void dfs(int n, int m, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
        {

            if (vis[i * 3 + j])
                continue;
            if (x == i && y == j)
                continue;
            if (abs(i - x) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(i + x) * 3 / 2 + (j + y) / 2])
                continue;
            dfs(n, m, t, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (x == i && y == j)
                continue;
            if (abs(i - x) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(x + i) / 2 * 3 + (y + j) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (x == i && y == j)
                continue;
            if (vis[i * 3 + j])
                continue;
            if (abs(i - x) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(i + x) / 2 * 3 + (j + y) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (x == i && y == j)
                continue;
            if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(i + x) * 3 / 2 + (j + y) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] == 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (x == i && y == j)
                continue;
            if (vis[i * 3 + j])
                continue;
            if (abs(i - x) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(i + x) / 2 * 3 + (j + y) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (i == x && y == j)
                continue;
            if (abs(i - x) % 2 == 0 && (j - y) % 2 == 0 && !vis[(i + x) / 2 * 3 + (j + y) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (x == i && y == j)
                continue;
            if (abs(i - x) % 2 == 0 && abs(j - y) % 2 == 0 && !vis[(i + x) / 2 * 3 + (j + y) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
// 只要你想刷。。就给你刷。。这是优先级原则。
// 刷多少遍都可以 。求之不得啊我的身体。。你巴不得你一天大比例的刷。。
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + y])
                continue;
            if (x == i && y == j)
                continue;
     if(abs(i-x)%2==0&&abs(y-j)%2==0&&!vis[(i+x)/2*3+(j+y)/2]])
         continue;
     dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (x == i && y == j)
                continue;
            if (abs(i - x) % 2 == 0 && abs(j - y) % 2 == 0 && !vis[(i + x) / 2 * 3 + (j + y) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (x == i && y == j)
                continue;
            if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(i + x) / 2 * 3 + (j + y) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (x == i && y == j)
                continue;
            if (abs(i - x) % 2 == 0 && abs(j - y) % 2 == 0 && !vis[(i + x) / 2 * 3 + (j + y) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (x == i && y == j)
                continue;
            if (vis[i * 3 + j])
                continue;
            if (abs(i - x) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(i + x) / 2 * 3 + (y + j) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t < n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(x + i) / 2 * 3 + (y + j) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t < n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(x + i) / 2 * 3 + (y + j) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t < n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + y])
                continue;
            if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(x + i) / 2 * 3 + (y - j) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(x + i) / 2 * 3 + (y - j) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(x + i) / 2 * 3 + (y - j) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
void dfs(int m, int n, int t, int x, int y)
{
    if (t >= m && t <= n)
        ans++;
    if (t == n)
        return;
    vis[x * 3 + y] = 1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if (vis[i * 3 + j])
                continue;
            if (abs(x - i) % 2 == 0 && abs(y - j) % 2 == 0 && !vis[(x + i) / 2 * 3 + (y - j) / 2])
                continue;
            dfs(m, n, t + 1, i, j);
        }
    vis[x * 3 + y] = 0;
}
// 主要这个计数ans++
// 的方式。挺新鲜的思路。