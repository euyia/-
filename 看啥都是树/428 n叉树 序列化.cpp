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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node() {}

    Node(int _val)
    {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node *_left, Node *_right)
    {
        val = _val;
        left = _left;
        right = _right;
    }
};

// 只要有顶点只要有边的信息。
// 我们只要这两个信息就能够重建图。。
// 有些题目就是从不同侧面给出边的信息。。就先这题。
// 这些题目。我再一个礼拜能吃下来  就非常不错了。。每道题 都是新的思路
// 只要吸收了。都是非常大的提升~~~加油啊。。别偷懒。。
class Solution
{
public:
    vector<vector<int>> graph;
    int deleteTreeNodes(int n, vector<int> &parent, vector<int> &value)
    {
        graph.resize(n);
        for (int i = 0; i < n; ++i)
            graph[parent[i]].push_back(i);
        // 这部看似简单。是整道题最核心的。一个建图。。
        return dfs(0, value)[1];
    }
    vector<int> dfs(int root, vector<int> &value)
    {
        // 返回底下的和0。cnt 是底下的有效数量。1
        int maxt = 0;
        int res = value[root];
        int ans = 1;
        for (int i = 0; i < graph[root].size(); ++i)
        {
            vector<int> k = dfs(graph[root][i], value);
            res += k[0];
            ans += k[1];
        }
        if (res != 0)
            return vector<int>{res, ans};
        else
            return vector<int>{0, 0};
        // 这样从底下往上删。。感觉不打妥吧。
        // 比如有些左子树加起来是1 右子树-1 。。不过
        // 不过好像不矛盾。
    }
};