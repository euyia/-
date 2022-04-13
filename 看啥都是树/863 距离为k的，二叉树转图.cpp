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
const int MAX_SIZE = 510;
class Solution
{
public:
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        vector<vector<int>> graph(MAX_SIZE); //邻接表法表示图
        vector<int> visited(MAX_SIZE, 0);    //对图 dfs 时， 标记访问过的节点
        buildGraph(root, graph);             //从二叉树建无向图
        res.clear();
        dfs(graph, target->val, k, visited); //求图上 离节点 target 距离为 k 的所有节点
        return res;
    }
    //深度优先遍历图
    void dfs(vector<vector<int>> &graph, int begin, int k, vector<int> &visited)
    {
        if (k == 0)
        {
            res.push_back(begin);
        }
        visited[begin] = 1;
        for (int i = 0; i < graph[begin].size(); ++i)
        {
            int neighbor = graph[begin][i];
            if (visited[neighbor] == 0)
            {
                dfs(graph, neighbor, k - 1, visited);
            }
        }
        return;
    }
    //将二叉树转为无向图
    void buildGraph(TreeNode *root, vector<vector<int>> &graph)
    {
        if (!root)
            return;
        if (root->left)
        {
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
            buildGraph(root->left, graph);
        }
        if (root->right)
        {
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
            buildGraph(root->right, graph);
        }
        return;
    }

private:
    vector<int> res;
};

const int MAX_SIZE = 510;
vector<vector<int>> Graph(MAX_SIZE);
vector<int> visited(MAX_SIZE, 0);
vector<int> res;
void build(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
    {
        Graph[root->val].push_back(root->left->val);
        Graph[root->left->val].push_back(root->val);
        build(root->left);
    }
    if (root->right)
    {
        Graph[root->val].push_back(root->right->val);
        Graph[root->right->val].push_back(root->val);
        build(root->right);
    }
}
void dfs(int v, int k)
{
    if (k == 0)
        res.push_back(v);
    visited[v] = 1;
    for (int w = 0; w < Graph[v].size(); w++)
        if (visited[Graph[v][w]] == 0)
            dfs(Graph[v][w], k - 1);
}
void dfs(int v, int k)
{
    if (k == 0)
        res.push_back(v);
    visited[v] = 1;
    for (int w = 0; w < Graph[v].size(); ++w)
        if (visited[Graph[v][w]] == 0)
            dfs(Graph[v][w], k - 1);
}
void dfs(int v, int k)
{
    if (k == 0)
        res.push_back(v);
    visited[v] = 1;
    for (int i = 0; i < Graph[v].size(); ++i)
    {
        int w = Graph[v][i];
        if (visited[w] == 0)
            dfs(w, k - 1);
    }
}
void dfs(int v, int k)
{
    visited[v] = 1;
    if (k == 0)
    {
        res.push_back(v);
        return;
    }
    for (int i = 0; i < Graph[v].size(); ++i)
    {
        int w = Graph[v][i];
        if (visited[w] == 0)
            dfs(w, k - 1);
    }
}
void dfs(int v, int k)
{
    visited[v] = 1;
    if (k == 0)
    {
        res.push_back(v);
        return;
    }
    for (int i = 0; i < Graph[v].size(); ++i)
    {
        int w = Graph[v][i];
        if (visited[w] == 0)
            dfs(w, k - 1);
    }
}
void dfs(int v, int k)
{
    visited[v] = 1;
    if (k == 0)
    {
        res.push_back(v);
        return;
    }
    for (int i = 0; i < Graph[v].size(); ++i)
    {
        int w = Graph[v][i];
        if (visited[w] == 0)
            dfs(w, k - 1);
    }
}
void dfs(int v, int k)
{
    visited[v] = 1;
    if (k == 0)
    {
        res.push_back(v);
        return;
    }
    for (int i = 0; i < Graph[v].size(); ++i)
    {
        int w = Graph[v][i];
        if (visited[w] == 0)
            dfs(w, k - 1);
    }
}
void dfs(int v, int k)
{
    visited[v] = 1;
    if (k == 0)
    {
        res.push_back(v);
        return;
    }
    for (int i = 0; i < Graph[v].size(); ++i)
    {
        int w = Graph[v][i];
        if (visited[w] == 0)
            dfs(w, k - 1);
    }
}
void dfs(int v, int k)
{
    visited[v] = 1;
    if (k == 0)
    {
        res.push_back(v);
        return;
    }
    for (int i = 0; i < Graph[v].size(); ++i)
    {
        int w = Graph[v][i];
        if (visited[w] == 0)
            dfs(w, k - 1);
    }
}
void dfs(int v, int k)
{
    visited[v] = 1;
    if (k == 0)
    {
        res.push_back(v);
        return;
    }
    for (int i = 0; i < Graph[v].size(); ++i)
    {
        int w = Graph[v][i];
        if (visited[w] == 0)
            dfs(w, k - 1);
    }
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
    {
        Graph[root->val].push_back(root->left->val);
        Graph[root->left->val].push_back(root->val);
        build(root->left);
    }
    if (root->right)
    {
        Graph[root->val].push_back(root->right->val);
        Graph[root->right->val].push_back(root->val);
        build(root->right);
    }
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
    {
        Graph[root->val].push_back(root->left->val);
        Graph[root->left->val].push_back(root->val);
        build(root->left);
    }
    if (root->right)
    {
        Graph[root->val].push_back(root->right->val);
        Graph[root->right->val].push_back(root->val);
        build(root->right);
    }
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
    {
        Graph[root->val].push_back(root->left->val);
        Graph[root->right->val].push_back(root->val);
        build(root->left);
    }
    if (root->right)
    {
        Graph[root->val].push_back(root->right->val);
        Graph[root->right->val].push_back(root->val);
        build(root->right);
    }
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
    {
        Graph[root->val].push_back(root->left->val);
        Graph[root->left->val].push_back(root->val);
        build(root->left);
    }
    if (root->right)
    {
        Graph[root->val].push_back(root->right->val);
        Graph[root->right->val].push_back(root->val);
        build(root->right);
    }
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
    {
        Graph[root->val].push_back(root->left->val);
        Graph[root->left->val].push_back(root->val);
        build(root->left);
    }
    if (root->right)
    {
        Graph[root->val].push_back(root->right->val);
        Graph[root->right->val].push_back(root->val);
        build(root->right);
    }
}
// 其实现在不用这个了。。用父节点的写起来简单。。