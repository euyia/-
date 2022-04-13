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

// Definition for a Node.

class Solution
{
public:
    vector<vector<int>> graph;
    int deleteTreeNodes(int n, vector<int> &parent, vector<int> &value)
    {
        graph.resize(n);
        for (int i = 1; i < n; ++i)
            graph[parent[i]].push_back(i);
        // 这部看似简单。是整道题最核心的。一个建图。。
        return dfs(0, value)[1];
    }
    vector<int> dfs(int root, vector<int> &value)
    {
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
    }
};

// 建图只需要两个条件。 一个是点 一个边。。只要获取到点之间的关系。。他就是边。。
// 就一定能建图。。
class Solution
{
public:
    int deleteTreeNodes(int nodes, vector<int> &parent, vector<int> &nums)
    {
        int n = parent.size();
        vector<vector<int>> mp(n);
        for (int i = 0; i < n; ++i)
        {
            if (parent[i] != -1)
                mp[parent[i]].push_back(i);
        }
       return dfs(mp,0,nums).second;
    }
    pair<int, int> dfs(vector<vector<int>> &mp, int root, vector<int> &nums)

    {
        vector<int> cur = mp[root];
        int left = nums[root], right = 1;
        for (int i = 0; i < cur.size(); ++i)
        {
            auto sun = dfs(mp, cur[i], nums);
            int l = sun.first, r = sun.second;
            // 左边是总和 右边是计数。
            left += l;
            right += r;
        }
        if (left == 0)
            return {0, 0};
        return {left, right};
    }
};