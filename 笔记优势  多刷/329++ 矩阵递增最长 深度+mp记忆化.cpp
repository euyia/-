#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
// 多学习好的解题方法。。然后多把时间花在这个上面。这才是学习。。
// 研究也是需要的。。但是目前更多的应该是模仿。。才是。。
// 时间占比大的应该放在模仿上。。。直接形成正确的动作习惯。。这才是聪明的 不造轮子。
// 目前。。但是只是目前。。造轮子是早晚的。。因为造轮子的人才是有灵魂的。
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
// 工具部分
// 一个题型 有没有接触过 是天地之别。。。所以要多刷题。。覆盖足够多的题型。。虽然不是题海
// 但是我现在的困难题题型 还不够 至少要200 以上吧。就像树
// 200 困难提 就是最近的目标。
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
    int maxt = 0, cnt = 0;
    vector<vector<int>> vis, mp;
    int longestIncreasingPath(vector<vector<int>> &nums)
    {
        n = nums.size();
        m = nums[0].size();
        vis.resize(n, vector<int>(m, 0));
        mp.resize(n, vector<int>(m, INT_MIN));
        // 这就很神奇  。但是就是能这么用 哈哈哈
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                dfs(nums, 1, 0, 0);
            }
        return maxt;
    }
    // 试下。。记录一个点他的可能长度？？
    // 就是由这个点触发 最长多少。。这样。。
    // 但是统计的顺序？？？？
    int dfs(vector<vector<int>> &nums, int cnt, int x, int y)
    {
        if (vis[x][y])
            return;
        if (mp[x][y] != INT_MIN)
        {
            cnt += mp[x][y];
            // 这边需要加1吗。？？？？？
            maxt = max(maxt, cnt);
            return mp[x][y];
        }
        maxt = max(cnt, maxt);
        vis[x][y] = 1;
        int res = 0;
        // 这个要写在这个地方 这样主函数就不用再写了。。如果写在for里 主函数那边也要写一次
        // 但是又不能写太上面。因为如果这个标记了之后 上面还有if 没通过 这个就是伪标记。不是本意
        // 因为这个点实际上没有走。。因为被if弹出去了。但是却标记了。。这就乌龙了。。所以这个
        // 要写在贴近下面for的地方。。才是安全的。
        int cur = 0;
        for (int i = 0; i < 4; ++i)
        {
            int l = x + dir[i][0], r = y + dir[i][1];

            if (out(l, r))
                continue;
            if (nums[x][y] + 1 != nums[l][r])
                continue;
            int next = dfs(nums, cnt + 1, l, r);
            cur = max(cur, next);
        }
        vis[x][y] = 0;
        return mp[x][y] = cnt + cur;
    }
};
// 这样的继承是不行的。。不能保证之前走过的那些 他没有走过。
// 深度搜索复杂度 竟然是指数级的。。。。怎么理解
// 然后他这里也是同样的思路。。但是它能保证之前的我没走过吗。这个细节很重要的
// 这决定了 能不能继承结果。。他是怎么判断 o 他走到这里。。说明之前访问的都比他小
// 而他后面的都比他大。。所以 不会重合。。
class Solution
{
public:
    static constexpr int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int rows, columns;

    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        if (matrix.size() == 0 || matrix[0].size() == 0)
        {
            return 0;
        }
        rows = matrix.size();
        columns = matrix[0].size();
        auto memo = vector<vector<int>>(rows, vector<int>(columns));
        int ans = 0;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                ans = max(ans, dfs(matrix, i, j, memo));
            }
        }
        return ans;
    }

    int dfs(vector<vector<int>> &matrix, int row, int column, vector<vector<int>> &memo)
    {
        if (memo[row][column] != 0)
        {
            return memo[row][column];
        }
        ++memo[row][column];
        // 他这里把vis mp cnt 三个东西的作用 统一起来了。非常离谱。
        // 既起到了标记的作用。。又计算的作用。离谱啊离谱。
        for (int i = 0; i < 4; ++i)
        {
            int newRow = row + dirs[i][0], newColumn = column + dirs[i][1];
            if (newRow >= 0 && newRow < rows && newColumn >= 0 && newColumn < columns && matrix[newRow][newColumn] > matrix[row][column])
            {
                memo[row][column] = max(memo[row][column], dfs(matrix, newRow, newColumn, memo) + 1);
                // 底层传上来的答案里面挑选最长的+1。。。。这设计 他妈谁能想出来。
                // 我是觉得真的很离谱的设计。你看看自己写的。。
                // 那个思路 。简直了。。
                // 简单明了的思路。。
            }
        }
        return memo[row][column];
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
    int maxt = 0, cnt = 0;
    vector<vector<int>> vis, mp;
    int longestIncreasingPath(vector<vector<int>> &nums)
    {
        n = nums.size();
        m = nums[0].size();
        // vis.resize(n, vector<int>(m, 0));
        mp.resize(n, vector<int>(m, 0));
        // 这就很神奇  。但是就是能这么用 哈哈哈
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                dfs(nums, 1, i, j);
            }
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                maxt = max(maxt, mp[i][j]);
        return maxt;
    }
    // 试下。。记录一个点他的可能长度？？
    // 就是由这个点触发 最长多少。。这样。。
    // 但是统计的顺序？？？？
    int dfs(vector<vector<int>> &nums, int cnt, int x, int y)
    {
        // if (vis[x][y])
        //     return 0;
        if (mp[x][y] != 0)
        {
            // cnt += mp[x][y];
            // 这边需要加1吗。？？？？？
            // maxt = max(maxt, cnt);
            return mp[x][y];
        }
        // maxt = max(cnt, maxt);
        // vis[x][y] = 1;
        mp[x][y]++;
        // 这边就说明是0 没访问过。那我们就从头计算，而且也算是标记
        int res = 0;
        // 这个要写在这个地方 这样主函数就不用再写了。。如果写在for里 主函数那边也要写一次
        // 但是又不能写太上面。因为如果这个标记了之后 上面还有if 没通过 这个就是伪标记。不是本意
        // 因为这个点实际上没有走。。因为被if弹出去了。但是却标记了。。这就乌龙了。。所以这个
        // 要写在贴近下面for的地方。。才是安全的。
        int cur = 0;
        for (int i = 0; i < 4; ++i)
        {
            int l = x + dir[i][0], r = y + dir[i][1];

            if (out(l, r))
                continue;
            if (nums[x][y] + 1 >= nums[l][r])
                continue;
            int next = dfs(nums, cnt + 1, l, r);
            cur = max(cur, next);
        }
        // vis[x][y] = 0;
        return mp[x][y] += cur + 1;
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
    int longestIncreasingPath(vector<vector<int>> &nums)
    {
        n = nums.size();
        m = nums[0].size();
        vector<vector<int>> mp(n, vector<int>(m, 0));
        int maxt = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                maxt = max(maxt, dfs(i, j, mp, nums));
            }
        return maxt;
    }
    int dfs(int x, int y, vector<vector<int>> &mp, vector<vector<int>> &nums)
    {
        if (mp[x][y] != 0)
            return mp[x][y];
        mp[x][y]++;
        int cur = 0;
        for (int i = 0; i < 4; ++i)
        {
            int l = x + dir[i][0], r = y + dir[i][1];
            if (out(l, r))
                continue;
            if (nums[x][y] >= nums[l][r])
                continue;
            cur = max(cur, dfs(l, r, mp, nums) + 1);
        }
        mp[x][y] += cur;
        return mp[x][y];
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
    int longestIncreasingPath(vector<vector<int>> &nums)
    {
        n = nums.size();
        m = nums[0].size();
        vector<vector<int>> mp(n, vector<int>(m, 0));
        int maxt = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                maxt = max(maxt, dfs(i, j, mp, nums));
        return maxt;
    }
    int dfs(int x, int y, vector<vector<int>> &mp, vector<vector<int>> &nums)
    {
        if (mp[x][y])
            return mp[x][y];
        mp[x][y]++;
        int cur = 0;
        for (int i = 0; i < 4; ++i)
        {
            int l = x + dir[i][0], r = y + dir[i][1];
            if (out(l, r) || nums[x][y] >= nums[l][r])
                continue;
            cur = max(cur, dfs(l, r, mp, nums));
        }
        return mp[x][y] += cur;
    }
};
// 这里核心框架很简单。。
// 这种题目一旦会 就是2分钟解决。。。再给我两分钟
int soso(vector<vector<int>> &nums)
{
    n = nums.size();
    m = nums[0].size();
    vector<vector<int>> mp(n, vector<int>(m, 0));
    int maxt = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j, mp, nums));
    return maxt;
}
// 这题也是图的最长路径 。。有向图 。。的解。。两者符合条件的 当做是有一条边
int dfs(int x, int y, vector<vector<int>> &mp, vector<vector<int>> &nums)
{
    if (mp[x][y])
        return mp[x][y];
    mp[x][y]++;
    int cur = 0;
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r, mp, nums));
    }
    return mp[x][y] += cur;
}
int soso(vector<vector<int>> &nums)
{
    n = nums.size();
    m = nums[0].size();
    vector<vector<int>> mp(n, vector<int>(m, 0));
    int maxt = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j, mp, nums));
    return maxt;
}
int dfs(int x, int y, vector<vector<int>> &mp, vector<vector<int>> &nums)
{
    if (mp[x][y])
        return mp[x][y];
    mp[x][y]++;
    int cur = 0;
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r, mp, nums));
    }
    return mp[x][y] += cur;
}
// 整口人都给你灭掉都可以。。还担心这点细节？？？
// 更何况是自己太敏感了。。他们完全不在乎的。hide
// 自己塞耳朵吧。
// 反正刷到500 至少。。
vector<vector<int>> mp, nums;
int maxt = 0, cur = 0;
int soso()
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j));
    return maxt;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    mp[x][y]++;
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] += cur;
}
int soso()
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j));
    return maxt;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    ++mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
        return mp[x][y] += cur;
    }
}
int soso()
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j));
    return maxt;
}
int dfs(int x, int y)
{
    // 其实所有的变量 x y 也都可以写在成员变量位置吧。。可以尝试下
    if (mp[x][y])
        return mp[x][y];
    ++mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] + cur;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] += cur;
}
int soso()
{
    n = nums.size();
    m = nums[0].size();
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j));
    return maxt;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] += cur;
}
int soso()
{
    n = nums.size();
    m = nums[0].size();
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j));
    return maxt;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    mp[x][y]++;
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] += cur;
}
int soso()
{
    n = nums.size();
    m = nums[0].size();
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j));
    return maxt;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    mp[x][y]++;
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] += cur;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    // mp[x][y]++;
    // 进来说明符合条件就要++ 了。至少是1
    // 然后cur 是去统计他四个方向的。
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
        // 四个方向符合条件的。。传上来他们底下的答案。。
        // 然后赛选出最大的那一个。
        // +上当前的1
    }
    return mp[x][y] = cur + 1;
}
int soso()
{
    n = nums.size();
    m = nums[0].size();
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxt = max(maxt, dfs(i, j));
    return maxt;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(x, y) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
// 这个题目暗含了很多信息。。
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
// 1000打底  熟练度就有了 。。。然后日后在做一些巩固。。
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}

int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[l][r] <= nums[x][y])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
}
// 虽然看起来简单。。就像dfs的普通框架
// 但是很精髓啊。。他返回的同时 同步建表。。
// 如果没有建表。就是很普通的一个后续dfs。。。他局势每次生层结果的时候 就给他做个记录。
// 日后可以直接查表 如果没有表 就去递归。如果有表就直接返回值。
// 感觉没有挺声音打字速度变快了。。真的变快了。
// 感觉没有挺声音打字速度变快了。。真的变快了。
// 感觉没有挺声音打字速度变快了。。真的变快了。
// 感觉没有挺声音打字速度变快了。。真的变快了。
// 感觉没有挺声音打字速度变快了。。真的变快了。
// 如果没有建表。就是很普通的一个后续dfs。。
// 如果没有建表。就是很普通的一个后续dfs。。
// 如果没有建表。就是很普通的一个后续dfs。。
// 如果没有建表。就是很普通的一个后续dfs。。
// 所以这个框架就是普通后序遍历+建表+查表。。
// 所以这个框架就是普通后序遍历+建表+查表。。
// 所以这个框架就是普通后序遍历+建表+查表。。同步建表 优先查表取代递归。
// 同步建表。。。。。。同步建表。。。。。
int dfs(int x, int y)
{
    if (mp[x][y])
        return mp[x][y];
    for (int i = 0; i < 4; ++i)
    {
        int l = x + dir[i][0], r = y + dir[i][1];
        if (out(l, r) || nums[x][y] >= nums[l][r])
            continue;
        cur = max(cur, dfs(l, r));
    }
    return mp[x][y] = cur + 1;
    // 如果没有这个表 。。底层cur=0 所以dfs的底部就是1.
}