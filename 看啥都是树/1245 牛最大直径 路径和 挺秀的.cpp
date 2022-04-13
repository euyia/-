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
class Solution
{
public:
    static bool cmp(int a, int b)
    {
        return a > b;
    }

    vector<int> dfs(vector<vector<int>> &graph, vector<bool> &visit, int root)
    {
        vector<int> ans;
        // 这个是放每个认知的res的。。
        // 然后maxt 就取这些res两个最大的加起来
        //
        int maxt = 0;
        int res = 0;
        vector<int> cur = graph[root];
        // 这个cur 放的是领接点的数组。下面的for 就是去递归的访问领接点。。这个算法其实是图的后序遍历。
        for (int i = 0; i < cur.size(); ++i)
        {
            if (!visit[cur[i]])
            {
                visit[cur[i]] = true;
                vector<int> curr = dfs(graph, visit, cur[i]);
                ans.push_back(curr[1] + 1);
                maxt = max(maxt, curr[0]);
            }
        }
        sort(ans.begin(), ans.end(), cmp);
        if (ans.size() > 0)
        {
            res = ans[0];
            maxt = max(maxt, res);
            if (ans.size() >= 2)
            {
                maxt = max(maxt, ans[0] + ans[1]);
            }
        }

        return vector<int>({maxt, res});
    }

    int graphDiameter(vector<vector<int>> &edges)
    {
        int n = edges.size() + 1;
        vector<vector<int>> graph(n);
        vector<bool> visit(n, false);

        for (auto e : edges)
        {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        visit[0] = true;
        return dfs(graph, visit, 0)[0];
    }
};

vector<int> dfs(vector<vector<int>> &Graph, vector<bool> &visited, int root)
{
    int maxt, res;
    vector<int> ans, cur, k;
    cur = Graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            k = dfs(Graph, visited, cur[i]);
            ans.push_back(k[1] + 1);
            maxt = max(maxt, k[0]);
        }
    sort(ans.rbegin(), ans.rend());
    int n = ans.size();
    if (n > 0)
    {
        res = ans[0];
        maxt = max(maxt, ans[0]);
        if (n >= 2)
        {
            maxt = max(maxt, ans[0] + ans[1]);
        }
    }
    return vector<int>{maxt, res}; //。。。这个可以这样？？？这样是pair 不是数组把。
}
// 要多写 这个题非常好。

class Solution
{
public:
    static bool cmp(int a, int b)
    {
        return a > b;
    }

    int dfs(vector<vector<int>> &graph, vector<bool> &visit, int root, int &maxt)
    {
        vector<int> ans;
        // 这个是放当前节点每个儿子传上来的res的。。
        // 然后maxt 就取这些res两个最大的加起来 如果res只有一个 那就比较那个。和原来的maxt
        // 最后返回的数组 。就是把和最大直径（maxt)和 当前节点最大的单边数（res） 统计起来然后dfs给上一层统计

        int res = 0;
        vector<int> cur = graph[root];
        // 这个cur 模块化当前节点的领接点的数组（因为下面的for遍历好几次写，就干脆声明一个变量来代替graph[root]，比较简洁）
        //下面的for 就是去递归的访问领接点。。这个算法其实是图的后序遍历（自己发明的词）。
        for (int i = 0; i < cur.size(); ++i)
        {
            if (!visit[cur[i]])
            {
                visit[cur[i]] = true;
                int curr = dfs(graph, visit, cur[i], maxt);
                ans.push_back(curr + 1); //这个是把所有的res 统计起来方便后面的赛选
                ;                        //这个是统计子节点传上来的maxt
            }
        }
        sort(ans.begin(), ans.end(), cmp);
        if (ans.size() > 0)
        {
            res = ans[0];
            maxt = max(maxt, res);
            if (ans.size() >= 2)
            {
                maxt = max(maxt, ans[0] + ans[1]);
            }
        }

        return res;
    }

    int treeDiameter(vector<vector<int>> &edges)
    {
        int n = edges.size() + 1;
        vector<vector<int>> graph(n);
        vector<bool> visit(n, false);

        for (auto e : edges)
        {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        visit[0] = true;
        int maxt = 0;
        return dfs(graph, visit, 0, maxt);
    }
};
int dfs(vector<vector<int>> &graph, int root, vector<bool> &visited, int &maxt)
{
    vector<int> ans, cur;
    int res = 0;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(graph, cur[i], visited, maxt);
            ans.push_back(k + 1);
        }
    sort(ans.rbegin(), ans.rend());
    if (ans.size() > 0)
    {
        res = ans[0];
        maxt = max(maxt, ans[0]);
        if (ans.size() >= 2)
        {
            maxt = (maxt, ans[0] + ans[1]);
        }
    }
    return res;
}
int dfs(vector<vector<int>> &graph, int root, vector<bool> &visited, int &maxt)
{
    int res = 0;
    vector<int> cur, ans;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(graph, cur[i], visited, maxt);
            ans.push_back(k + 1);
        }
    sort(ans.rbegin(), ans.rend());
    int n = ans.size();
    if (n > 0)
    {
        res = ans[0];
        maxt = max(maxt, ans[0]);
        if (n >= 2)
            maxt = max(maxt, ans[0] + ans[1]);
    }
    return res;
}
int dfs(vector<vector<int>> &graph, int root, vector<int> &visited, int &maxt)
{
    int res = 0;
    vector<int> cur, ans;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(graph, cur[i], visited, maxt);
            ans.push_back(k + 1);
        }
    sort(ans.rbegin(), ans.rend());
    int n = ans.size();
    if (n > 0)
    {
        res = ans[0];
        maxt = max(maxt, ans[0]);
        if (n >= 2)
            maxt = max(maxt, ans[0] + ans[1]);
    }
    return res;
}
int dfs(vector<vector<int>> &graph, int root, vector<int> &visited, int &maxt)
{
    int res = 0;
    vector<int> cur, ans;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(graph, cur[i], visited, maxt);
            ans.push_back(k + 1);
        }
    sort(ans.rbegin(), ans.rend());
    int n = ans.size();
    if (n > 0)
    {
        res = ans[0];
        maxt = max(maxt, ans[0]);
        if (n >= 2)
            maxt = max(maxt, ans[0] + ans[1]);
    }
    return res;
}
vector<vector<int>> graph;
vector<bool> visited;
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur, res;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(cur[i], maxt);
            res.push_back(k + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n >= 2)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int treeDiameter(vector<vector<int>> &nums)
{
    int n = nums.size();
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    for (int i = 0; i < n; ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        graph[l].push_back(r);
        graph[r].push_back(l);
    }
    int maxt = 0;
    dfs(0, maxt);
    return maxt;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> res, cur;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(cur[i], maxt);
            res.push_back(k + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> res, cur;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(cur[i], maxt);
            res.push_back(k + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur, res;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(cur[i], maxt);
            res.push_back(k + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(res[0], maxt);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur, res;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            int k = dfs(cur[i], maxt);
            res.push_back(k + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> res, cur;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> res, cur;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur, res;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur, res;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur, res;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur, res;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur, res;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> res, cur;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> res, cur;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int ans = 0;
    // 底层就是0.然后从后序位置一直+上去。
    // 算是图的后序遍历。。
    //
    vector<int> res, cur;
    cur = graph[root];
    for (int i = 0; i < cur.size(); ++i)
        if (!visited[cur[i]])
        {
            visited[cur[i]] = true;
            res.push_back(dfs(cur[i], maxt) + 1);
        }
    sort(res.rbegin(), res.rend());
    int n = res.size();
    if (n > 0)
    {
        ans = res[0];
        maxt = max(maxt, res[0]);
        if (n > 1)
            maxt = max(maxt, res[0] + res[1]);
    }
    return ans;
}
// 要通过刷来快速的成长。。
class Solution
{
public:
    unordered_map<int, vector<int>> mp;
    int treeDiameter(vector<vector<int>> &nums)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            mp[l].push_back(r);
        }
        int maxt = 0;
        dfs(0, -1, maxt);
        return maxt;
    }
    int dfs(int root, int pre, int &maxt)
    {
        int ans = 0;
        vector<int> cur;
        priority_queue<int> res;
        cur = mp[root];
        for (int i = 0; i < cur.size(); ++i)
            if (cur[i] != pre)
            {
                res.push(dfs(cur[i], root, maxt) + 1);
            }
        if (res.size() > 0)
        {
            ans = res.top();
            maxt = max(maxt, res.top());
        }
        else if (res.size() > 1)
        {
            res.pop();
            maxt = max(maxt, res.top() + ans);
        }
        return ans;
    }
};
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur(graph[root]);
    priority_queue<int> q;
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        ans = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + ans);
        }
    }
    return ans;
}
unordered_map<int, vector<int>> mp;
int dfs(int root, int &maxt)
{
    int ans = 0;
    vector<int> cur(mp[root]);
    priority_queue<int> q;
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        ans = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + ans);
        }
    }
    return ans;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    vector<int> cur(mp[root]);
    priority_queue<int> q;
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    vector<int> cur(mp[root]);
    priority_queue<int> q;
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, q.top());
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, res);
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, res + q.top());
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, res);
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, q.top() + res);
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, res);
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, res + q.top());
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    vector<int> cur(mp[root]);
    priority_queue<int> q;
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, res);
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, res + q.top());
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, res);
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, res + q.top());
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, res);
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, res + q.top());
        }
    }
    return res;
}
int dfs(int root, int &maxt)
{
    int res = 0;
    priority_queue<int> q;
    vector<int> cur(mp[root]);
    for (int i = 0; i < cur.size(); ++i)
        q.push(dfs(cur[i], maxt) + 1);
    int n = q.size();
    if (n > 0)
    {
        res = q.top();
        maxt = max(maxt, res);
        if (n > 1)
        {
            q.pop();
            maxt = max(maxt, res + q.top());
        }
    }
    return res;
}
// 1000行只是刚刚起步。。

class Solution
{
public:
    unordered_map<int, vector<int>> mp;
    int treeDiameter(vector<vector<int>> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            mp[l].push_back(r);
        }
        int maxt = 0;
        dfs(0, maxt);
        return maxt;
    }
    int dfs(int root, int &maxt)
    {
        int res = 0;
        vector<int> cur = mp[root];
        priority_queue<int> q;
        for (int i = 0; i < cur.size(); ++i)
            q.push(dfs(cur[i], maxt) + 1);
        int n = q.size();
        if (n > 0)
        {
            res = q.top();
            maxt = max(q.top(), maxt);
            if (n > 1)
            {
                q.pop();
                maxt = max(res + q.top(), maxt);
            }
        }
        return res;
    }
};