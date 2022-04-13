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
    unordered_map<int, vector<int>> mp;
    int minTime(int n, vector<vector<int>> &nums, vector<bool> &has)
    {
        // 有些很方便的套路 就要多刷 然后要用的时候才想的起来。
        for (int i = 0; i < n - 1; ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            mp[l].push_back(r);
            mp[r].push_back(l);
        }
        vector<bool> visited(n, 0);
        return dfs(has, 0, visited);
    }

    int dfs(vector<bool> &has, int root, vector<bool> visited)
    {
        int res = 0;
        visited[root] = 1;
        int k = 0;
        for (auto m : mp[root])
        {

            if (!visited[m])
            {
                k = dfs(has, m, visited);
                if (has[m] || k)
                    k += 2;
                // 因为这边对于每个子节点 他k 都会被重置掉。k = dfs(has, m, visited);
                // 所以每个遍历一个节点m 我们res就要对k进行收录。不然k重置了+2 也没用，
                // 会被下一个子节点m给重置了。。
                res += k;
            }
        }
        return res;
    }
};
unordered_map<int, vector<int>> mp;
vector<bool> has;
vector<bool> visited;
int dfs(int root)
{
    int res, cur;
    visited[root] = 1;
    for (auto m : mp[root])
        if (visited[m])
            continue;
        else
        {
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    visited[root] = 1;
    for (auto m : mp[root])
        if (visited[m])
            continue;
        else
        {
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    visited[root] = 1;
    for (auto m : mp[root])
        if (visited[m])
            continue;
        else
        {
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    visited[root] = 1;
    for (auto m : mp[root])
        if (visited[m])
            continue;
        else
        {
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (auto m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (auto m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (auto m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (auto m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int cur = 0, res = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
int dfs(int root)
{
    int res = 0, cur = 0;
    for (int m : mp[root])
        if (visited[m])
            continue;
        else
        {
            visited[m] = 1;
            cur = dfs(m);
            if (has[m] || cur)
                cur += 2;
            res += cur;
        }
    return res;
}
