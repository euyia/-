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

struct Node
{
    char val;
    Node *left;
    Node *right;
    Node() : val(' '), left(nullptr), right(nullptr) {}
    Node(char x) : val(x), left(nullptr), right(nullptr) {}
    Node(char x, Node *left, Node *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    vector<vector<int>> mp;
    vector<char> s;
    vector<int> ans;
    unordered_map<char, int> dp;
    vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
    {
        // 典型的后序，直接三列表，都不需要重复计算，直接统计上去
        mp.resize(n);
        // s.resize(n);
        ans.resize(n);
        for (char ss : labels)
            s.push_back(ss);
        for (int i = 0; i < edges.size(); ++i)
        {
            int l = edges[i][0], r = edges[i][1];
            mp[l].push_back(r);
            mp[r].push_back(l);
        }
        dfs(0, -1);
        return ans;
    }
    void dfs(int root, int prev)
    {
        for (int i = 0; i < mp[root].size(); ++i)
            if (mp[root][i] == prev)
                continue;
            else
            {
                int k = mp[root][i];
                dp[s[k]]++;
                dfs(k, root);
            }
        ans.push_back(++dp[root]);
    }
};

class Edge
{
public:
    int to;
    Edge *next;
    Edge(int t, Edge *n) : to(t), next(n)
    {
    }
};

class Solution
{
public:
    void dfs(vector<Edge *> &graph, vector<int> &ans, string &labels, int count[26], int node)
    {
        ans[node] = 1;
        int sub[26], label = labels[node] - 'a';
        for (auto it = graph[node]; it != NULL; it = it->next)
        {
            if (ans[it->to] < 0)
            {
                memset(sub, 0, sizeof(sub));
                dfs(graph, ans, labels, sub, it->to);
                for (int i = 0; i < 26; ++i)
                {
                    count[i] += sub[i];
                }

                ans[node] += sub[label];
            }
        }

        ++count[label];
    }

    vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
    {
        vector<int> ans(n, -1);
        vector<Edge *> graph(n, NULL);

        for (auto &e : edges)
        {
            graph[e[0]] = new Edge(e[1], graph[e[0]]);
            graph[e[1]] = new Edge(e[0], graph[e[1]]);
        }

        int count[26];
        memset(count, 0, sizeof(count));
        dfs(graph, ans, labels, count, 0);
        return ans;
    }
};

// 这个是提交区牛人的。。
// 但是它这个图的设计。。是典型的领接表的没错。。
// 而且这中图的设计 能够携带更多的信息。。非常好。。
// 不过它这指针的指法。。？？？
// 看提交区 是非常好的习惯。。因为可以看到目前一线的优秀的代码。对提升非常好。