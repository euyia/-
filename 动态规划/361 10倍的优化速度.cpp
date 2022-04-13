#include <all.h>
using namespace std;
// 输入：grid = [["0","E","0","0"],["E","0","W","E"],["0","E","0","0"]]
// 输出：3
// 就是泡泡堂 看能炸最多几个人。
class Solution
{
public:
    int maxt;
    int r, c;
    int maxKilledEnemies(vector<vector<char>> &grid)
    {
        // 这个数量级应该是可以对每个点进行遍历，然后模拟？？？？模拟0点的
        //     四个方向遍历。
        r = grid.size();
        c = grid[0].size();
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                if (grid[i][j] == '0')
                    dfs(i, j, grid);
        return maxt;
    }
    void dfs(int a, int b, vector<vector<char>> &nums)
    {
        int res = 0;
        for (int i = a; i >= 0 && nums[i][b] != 'W'; i--)
            if (nums[i][b] == 'E')
                res++;
        for (int i = a; i < r && nums[i][b] != 'W'; i++)
            if (nums[i][b] == 'E')
                res++;
        for (int i = a; i < c && nums[a][i] != 'W'; i++)
            if (nums[a][i] == 'E')
                res++;
        for (int i = a; i >= 0 && nums[a][i] != 'W'; i--)
            if (nums[a][i] == 'E')
                res++;
        maxt = max(maxt, res);
    }
};

class Solution
{
public:
    int maxKilledEnemies(vector<vector<char>> &grid)
    {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        const int dx[4] = {0, 0, 1, -1};
        const int dy[4] = {1, -1, 0, 0};
        int left[n][m], up[n][m], down[n][m], right[n][m];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                left[i][j] = up[i][j] = 0;
                if (grid[i][j] == 'W')
                    continue;
                if (grid[i][j] == 'E')
                    ++left[i][j], ++up[i][j];
                if (i - 1 >= 0)
                    up[i][j] += up[i - 1][j];
                if (j - 1 >= 0)
                    left[i][j] += left[i][j - 1];
            }
        }

        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = m - 1; j >= 0; --j)
            {
                right[i][j] = down[i][j] = 0;
                if (grid[i][j] == 'W')
                    continue;
                if (grid[i][j] == 'E')
                    ++right[i][j], ++down[i][j];
                if (i + 1 < n)
                    down[i][j] += down[i + 1][j];
                if (j + 1 < m)
                    right[i][j] += right[i][j + 1];
            }
        }
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (grid[i][j] == '0')
                    ans = max(ans, left[i][j] + up[i][j] + right[i][j] + down[i][j]);
        return ans;
    }
};
// 回头在看吧。。反正至少做出来了。。但是优化问题 还是要重视的。。回家。