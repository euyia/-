#include <all.h>
using namespace std;
// 示例 1：

// 就是每个1到0的最短距离。
// 这题有一个很牛逼的点。。是保证最优解的方式。。
// 这边没有证明。。

// 输入：mat = [[0,0,0],[0,1,0],[0,0,0]]
// 输出：[[0,0,0],[0,1,0],[0,0,0]]
class Solution
{
public:
    vector<vector<int>> updatenums(vector<vector<int>> &nums)
    {
        int r = nums.size();
        int c = nums[0].size();
        vector<pair<int, int>> par = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
        // 这个就是上下左右。偏移量
        vector<vector<int>> res(r, vector<int>(c, INT_MAX));
        queue<pair<int, int>> q;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (nums[i][j] == 0)
                {
                    res[i][j] = 0;
                    // 初始化所有等于0的格子 为0；
                    q.push({i, j});
                }
            }
        }
        while (!q.empty())
        {
            auto tmp = q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                // 四个方向上下左右偏移。。
                int x = tmp.first + par[i].first;
                int y = tmp.second + par[i].second;

                if (x >= 0 && x < r && y >= 0 && y < c)
                // 就是在有有效范围内。四个方向
                {
                    if (res[x][y] > res[tmp.first][tmp.second] + 1)
                    {
                        res[x][y] = res[tmp.first][tmp.second] + 1;
                        q.push({x, y});
                    }
                }
            }
        }
        return res;
    }
};

// 理解不难理解。他主要核心是从最内层 0 往外扩。。保证了。
// 保证了离开0 从近到远的一层一层的遍历方式。。
// 而且这里只遍历的一层。。上下左右。，，，就像树 也是每次就一层。。
// 关键是保证 最后得到的是最优解 。。。
// 这题有空可以刷下。。不过我现在看着挺烦的。。
// 还是比较牛逼的。。他这个其实需要证明的。。为什么是最优解。。
class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &nums)
    {
        int r = nums.size();
        int c = nums[0].size();
        vector<pair<int, int>> vec{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        vector<vector<int>> res(r, vector<int>(c, INT_MAX));
        queue<pair<int, int>> q;
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
            {
                if (nums[i][j] == 0)
                {
                    res[i][j] = 0;
                    q.push({i, j});
                }
            }
        while (!q.empty())
        {
            auto tmp = q.front();
            q.pop();
            for (int i = 0; i < 4; ++i)
            {
                // 这个r和上面的列 变量名重复了。
                int l = tmp.first, r2 = tmp.second;
                int a = vec[i].first, b = vec[i].second;
                int x = l + a, y = r2 + b;
                if (x >= 0 && x < r && y >= 0 && y < c)
                    if (res[x][y] > res[l][r2] + 1)
                    {
                        res[x][y] = res[l][r2] + 1;
                        q.push({x, y});
                    }
            }
        }
        return res;
    }
};
