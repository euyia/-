#include <all.h>
using namespace std;
class Solution
{
public:
    int trapRainWater(vector<vector<int>> &heightMap)
    {
        // 这题也是可以用那个方法来算。。分别算四个方向迭代的最小值。
        // 和当前值的比较  最小值大的就能存水。
        // 就是费手。
    }
};
// 他用的是heap  和bfs。。你没想到吧。。。
// 他用的是heap  和bfs。。你没想到吧。。。
// 他用的是heap  和bfs。。你没想到吧。。。

// typedef pair<int, int> pii;

// class Solution
// {
// public:
//     int trapRainWater(vector<vector<int>> &heightMap)
//     {
//         int m = heightMap.size();
//         int n = heightMap[0].size();
//         priority_queue<pii, vector<pii>, greater<pii>> pq;
//         vector<int> visited(m * n, 0);
//         for (int i = 0; i < m; i++)
//             for (int j = 0; j < n; j++)
//             {
//                 if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
//                 {
//                     pq.push(make_pair(heightMap[i][j], i * n + j));
//                     visited[i * n + j] = 1;
//                 }
//             }
//         int ans = 0;
//         int dirs[8] = {1, 0, -1, 0, 0, 1, 0, -1};
//         while (!pq.empty())
//         {
//             pii cur = pq.top();
//             pq.pop();
//             for (int k = 0; k < 4; k++)
//             {
//                 int row = cur.second / n + dirs[2 * k];
//                 int col = cur.second % n + dirs[2 * k + 1];
//                 if (row >= 0 && col >= 0 && row < m && col < n && visited[row * n + col] == 0)
//                 {
//                     visited[row * n + col] = 1;
//                     ans += max(cur.first - heightMap[row][col], 0);
//                     pq.push(make_pair(max(heightMap[row][col], cur.first), row * n + col));
//                 }
//             }
//         }
//         return ans;
//     }
// };

int a[210][210];
int b[210][210];

int dir[4][2] = {
    {1, 0},
    {-1, 0},
    {0, 1},
    {0, -1}};

int r, c;

class Solution
{
public:
    bool out(int x, int y)
    {
        if (x < 0 || x >= r)
            return true;
        if (y < 0 || y >= c)
            return true;
        return false;
    }

    int trapRainWater(vector<vector<int>> &heightMap)
    {
        r = heightMap.size();
        c = heightMap[0].size();

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                a[i][j] = heightMap[i][j];
                b[i][j] = 1e9;
            }
        }

        queue<pair<int, int>> q;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
                {
                    b[i][j] = a[i][j];
                    q.push({i, j});
                }
            }
        }

        while (!q.empty())
        {
            pair<int, int> t = q.front();
            q.pop();
            int x = t.first;
            int y = t.second;

            for (int i = 0; i < 4; i++)
            {

                int nx = x + dir[i][0];
                int ny = y + dir[i][1];

                if (out(nx, ny))
                    continue;

                if (max(b[x][y], a[nx][ny]) < b[nx][ny])
                {
                    b[nx][ny] = max(b[x][y], a[nx][ny]);
                    q.push({nx, ny});
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                ans = ans + b[i][j] - a[i][j];
            }
        }

        return ans;
    }
};
typedef pair<int, pair<int, int>> pii;
int dir[4][2] = {
    {1, 0},
    {-1, 0},
    {0, 1},
    {0, -1}};

int r, c;

class Solution
{
public:
    bool out(int x, int y)
    {
        if (x < 0 || x >= r)
            return true;
        if (y < 0 || y >= c)
            return true;
        return false;
    }
    priority_queue<pii, vector<pii>, greater<pii>> q;
    int trapRainWater(vector<vector<int>> &nums)
    {
        r = nums.size();
        c = nums[0].size();
        int vis[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
            {
                if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
                {
                    q.push({nums[i][j], {i, j}});
                    vis[i][j] = 1;
                }
            }
        int ans = 0;
        int dirs[8] = {1, 0, -1, 0, 0, 1, 0, -1};
        while (!q.empty())
        {
            pii cur = q.top();
            q.pop();
            for (int k = 0; k < 4; k++)
            {
                int tmp = cur.first;
                int l = cur.second.first;
                int r = cur.second.second;
                if (!out(l, r) && !vis[l][r])
                {
                    vis[l][r] = 1;
                    ans += max(cur.first - nums[l][r], 0);
                    q.push({max(nums[l][r], cur.first), {l, r}});
                }
            }
        }
        return ans;
    }
};

typedef pair<int, pair<int, int>> pii;
int dir[4][2] = {
    {1, 0},
    {-1, 0},
    {0, 1},
    {0, -1}};
bool out(int x, int y)
{
    if (x < 0 || x >= r)
        return true;
    if (y < 0 || y >= c)
        return true;
    return false;
}
priority_queue<pii, vector<pii>, greater<pii>> q;

int r, c;

class Solution
{
public:
    int trapRainWater(vector<vector<int>> &nums)
    {
        r = nums.size();
        c = nums[0].size();
        int vis[r][c];
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
            {
                if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
                {
                    q.push({nums[i][j], {i, j}});
                    vis[i][j] = 1;
                }
            }
        int ans = 0;
        // while里面是这题的核心逻辑。可以刷下。
        // 其实也是很普通的层序遍历的框架而已。
        // 只是数据结构复杂一点而已。
        // 只要思路清晰。。结构在复杂都一样。。
        // 所以得思路者得天下。。。
        // 想到周他说的思维导图。。。哈哈。。确实。。
        while (!q.empty())
        {
            pii cur = q.top();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int tmp = cur.first;
                int l = cur.second.first + dir[i][0];
                int r = cur.second.second + dir[i][1];
                if (!out(l, r) && !vis[l][r])
                {
                    vis[l][r] = 1;
                    ans += max(tmp - nums[l][r], 0);
                    q.push({max(nums[l][r], tmp), {l, r}});
                }
            }
        }
        return ans;
    }
};
class Solution
{
public:
    int trapRainWater(vector<vector<int>> &nums)
    {
        int r = nums.size();
        int c = nums[0].size();
        // 1 把周边的放进队列。
        // 然后开始层序遍历
        // 通过组合遍历去获得对应的l r
        // 对l r 坐标的合法性进行判断。
        // 判断两个值大小。取得差值
        // 然后把值改成大的。
        //  步骤代替思维导图。先写出来承认思路王者地位。
        int vis[r][c];
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
            {
                if (i == 0 || i == r - 1 | j == 0 || j == c - 1)
                {
                    q.push({nums[i][j], {i, j}});
                    vis[i][j] = 1;
                }
            }
        int res = 0;
        while (!q.empty())
        {
            auto cur = q.top();
            q.pop();
            for (int i = 0; i < 4; ++i)
            {
                int tmp = cur.first;
                int l = cur.second.first + dir[i][0];
                int r = cur.second.second + dir[i][1];
                if (!out(l, r) && !vis[l][r])
                {
                    res += max(0, tmp - nums[l][r]);
                    q.push({max(tmp, nums[l][r]), {l, r}});
                }
            }
        }
        return res;
    }
};

class Solution
{
public:
    int trapRainWater(vector<vector<int>> &nums)
    {
        r = nums.size();
        c = nums[0].size();
        int vis[r][c];
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
            {
                if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
                {
                    vis[i][j] = 1;
                    q.push({nums[i][j], {i, j}});
                }
            }
        int res = 0;
        while (!q.empty())
        {
            auto cur = q.top();
            q.pop();
            for (int i = 0; i < 4; ++i)
            {
                int tmp = cur.first;
                int l = cur.second.first + dir[i][0];
                int r = cur.second.second + dir[i][1];
                if (!out(l, r) && !vis[l][r])
                {
                    vis[l][r] = 1;
                    res += max(0, tmp - nums[l][r]);
                    q.push({max(tmp, nums[l][r]), {l, r}});
                }
            }
        }
        return res;
    }
};
// 主要是结构的灵活运用。。
// 框架也很简单。
// 主要是这个思路的形成。。。和有效性。。要琢磨。。
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        auto cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(tmp, nums[l][r]), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(tmp, nums[l][r]), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++i)
        {
            if (i == 0 || j == 0 || j == c - 1 || i == r - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(tmp, nums[l][r]), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            if (i == 0 || j == 0 || j == c - 1 || i == r - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(tmp, nums[l][r]), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            if (j == 0 || i == 0 || j == c - 1 || i == r - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(nums[l][r], tmp), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++i)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(nums[l][r], tmp), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            if (i == 0 || j == 0 || j == c - 1 || i == r - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(nums[l][r], tmp), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            if (i == 0 || j == 0 || j == c - 1 || i == r - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(nums[l][r], tmp), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            if (i == 0 || j == 0 || j == c - 1 || i == r - 1)
            {
                vis[i][j] = 1;
                q.push({nums[i][j], {i, j}});
            }
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(nums[l][r], tmp), {l, r}});
            }
        }
    }
    return res;
}
int soso(vector<vector<int>> &nums)
{
    r = nums.size();
    c = nums[0].size();
    int vis[r][c];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            vis[i][j] = 1;
            q.push({nums[i][j], {i, j}});
        }
    int res = 0;
    while (!q.empty())
    {
        pii cur = q.top();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int tmp = cur.first;
            int l = cur.second.first + dir[i][0];
            int r = cur.second.second + dir[i][1];
            if (!out(l, r) && !vis[l][r])
            {
                vis[l][r] = 1;
                res += max(0, tmp - nums[l][r]);
                q.push({max(nums[l][r], tmp), {l, r}});
            }
        }
    }
    return res;
}
// 没事多写难题。。
// 当你习惯难题。。哼哼。。