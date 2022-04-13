#include <all.h>
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 输入：nums = [
//   ["1","1","0","0","0"],
//   ["1","1","0","0","0"],
//   ["0","0","1","0","0"],
//   ["0","0","0","1","1"]
// ]
// 输出：3

class Solution
{
private:
  void dfs(vector<vector<char>> &nums, int r, int c)
  {
    int nr = nums.size();
    int nc = nums[0].size();
    nums[r][c] = '0';
    if (r - 1 >= 0 && nums[r - 1][c] == '1')
      dfs(nums, r - 1, c);
    // 这种就很形象的理解dfs的作用  就是行走。。
    if (r + 1 < nr && nums[r + 1][c] == '1')
      dfs(nums, r + 1, c);
    if (c - 1 >= 0 && nums[r][c - 1] == '1')
      dfs(nums, r, c - 1);
    if (c + 1 < nc && nums[r][c + 1] == '1')
      dfs(nums, r, c + 1);
  }

public:
  int numIslands(vector<vector<char>> &nums)
  {
    int nr = nums.size();
    if (!nr)
      return 0;
    int nc = nums[0].size();
    int num = 0;
    for (int r = 0; r < nr; r++)
      for (int c = 0; c < nc; c++)
        if (nums[r][c] == '1')
        {
          num++;
          dfs(nums, r, c);
        }
    return num;
  }
};

// 绝了。。他这递归搜索的时候把。所有的1改成0了。。就是连通的都会遍历到。
// 然后都被置零了。。。
void dfs(vector<vector<int>> &grid, int i, int j, int m, int n)
{
  if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] != 1)
  {
    return;
  }
  grid[i][j] = 2;
  dfs(grid, i, j + 1, m, n);
  dfs(grid, i, j - 1, m, n);
  dfs(grid, i - 1, j, m, n);
  dfs(grid, i + 1, j, m, n);
}

// 他这个写法更简洁。。比较不会费手。但是费电脑。
// 因为他这个是每个无论什么情况都直接递归进入。。到下一层 如果不符合再返回。。
class Solution
{
public:
  void solve(vector<vector<char>> &nums)
  {
    // 这个可以用双层dfs 就是如果 。。但是你走到当前这个点 你也不知道
    // 只能知道你本身是一个叶节点。你并不知道整棵树遍历忘了
    // 试一下那种栓层递归
    dfs(nums, 0, 0, nums.size(), nums[0].size());
    int n = nums.size();
    int m = nums[0].size();
    if (n < 3 || m < 3)
      return;
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j)
        if (i == 0 || j == 0 || j == m - 1 || i == n - 1)
          dfs(nums, i, j, n, m);
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j)
        if (nums[i][j] == 'O')
          nums[i][j] = 'X';
        else if (nums[i][j] == '#')
          nums[i][j] = 'O';
  }

  void dfs(vector<vector<char>> &grid, int i, int j, int m, int n)
  {

    if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 'X' || grid[i][j] == '#')
    {
      // 这里的#标记 相当于vis 数组的作用。
      return;
    }
    grid[i][j] = '#';
    dfs(grid, i, j + 1, m, n);
    dfs(grid, i, j - 1, m, n);
    dfs(grid, i - 1, j, m, n);
    dfs(grid, i + 1, j, m, n);
  }
};

// dfs写的时候其实是bfs的样子。。
// 就是到每一个点。他都会枚举他自己所有可能。。
// 只不过他会优先走进去一个。。但是从整体上。。他还是会走遍每一层的所有枚举。也不存在回头的问题。
// 这也就是dfs能走遍所有连通点的一个原因。。