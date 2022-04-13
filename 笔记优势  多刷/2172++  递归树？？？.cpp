#include <all.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 即使不会。。抄下来也是非常值得。
// 来学 学学 做题的 心态要放好。不然会很不舒服的。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 一步一步的攀登上去。
class Solution
{
public:
    int vis1[20];
    int vis2[10];
    int n, t, maxt = INT_MAX;
    int maximumANDSum(vector<int> &_nums, int _t)
    {
        t = _t;
        nums = _nums;
        n = nums.size();
        dfs(0, n, 0);
        return maxt;
    }
    vector<int> nums;
    void dfs(int l, int n, int sum)
    {
        if (l == n)
        {
            if (maxt > sum)
                maxt = sum;
            return;
        }
        // 这个l 是在算数量。
        for (int i = l; i < n; ++i)
        {
            for (int j = 1; j <= t; ++j)
            {
                if (vis2[j] > 1)
                    continue;
                vis2[j]++;
                dfs(i + 1, n, sum + (nums[i] & j));
                vis2[j]--;
            }
        }
    }
};
class Solution
{
public:
    int maximumANDSum(vector<int> &nums, int t)
    {
        int n = nums.size();
        vector<vector<vector<int>>> mp(n, vector<vector<int>>(1 << t, vector<int>(1 << t, -1)));
        // 我好想又发现宝贝了。。之前就是想在函数里面这样定义一个。
        // 有个好处就是不用写参数 哈哈哈。
        // 但是匿名函数实现不了。
        // 函数原来只是一个类。。
        function<int(int, int, int)> dp = [&](int k, int a, int b)
        {
            if (k >= n)
            {
                return 0;
            }
            // 这边底部是k=n。。我也是醉了。。这好反直觉啊。
            // 但是也是递归能走的通的
            // 那如果开始走的时候设置为0.
            // 就转移方程就更反直觉了。。？？？？？？
            if (mp[k][a][b] == -1)
            {
                int ret = 0;
                for (int i = 0; i < t; ++i)
                {
                    int mask = (i + 1) & nums[k];
                    // 这就是 或。题目要求的。要统计
                    if ((a >> i & 1) == 0)
                    {
                        // 就是当前i 位置 如果没有放 就是0 ，
                        ret = max(ret, mask + dp(k + 1, a | (1 << i), b));
                    }
                    else if ((b >> i & 1) == 0)
                    {
                        ret = max(ret, mask + dp(k + 1, a, b | (1 << i)));
                    }
                }
                mp[k][a][b] = ret;
            }
            return mp[k][a][b];
        };
        return dp(0, 0, 0);
    }
};
// 这也太酷了。。状态加记忆。。
// 我就是想用树的方式直观。。
// 状态压缩。。
// 两个整数的响应位 表示篮子是否被占用。。o 怪不得用《《
// a b 他是什么数字并不重要。我们要的知识他这个数字里面1的位置。

// 但是。。a位置和b位置 分别放两个蛋。。他有区别吗。。没区别吧。？？？？？
// 其实就是看城市一个普通的二维数组。。
// 只不过这里的下标还携带了一层信息而已。。

// 这个函数内的函数 实在是好玩。。
// 果然只有大题宝贝多。。
// 大题宝贝多。。。。。。。

// 不然这里ab 只是普通的序列号。但是它不是。。
// 状态压缩 就是用一个数字的二进制来存更多的信息。。
// 状态压缩 就是用一个数字的二进制来存更多的信息。。
// 状态压缩 就是用一个数字的二进制来存更多的信息。。
// 然后又用数字本身又表示一层意思。。
// 增加了表达的丰富性。。。
// 的表达的能力得到了提升。