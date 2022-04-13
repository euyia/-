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
    map<int, int> a;
    unordered_map<TreeNode *, int> mp;
    vector<vector<int>> verticalOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        if (!root)
            return res;
        queue<TreeNode *> q;
        q.push(root);
        a.insert({0, root->val});
        mp[root] = 0;
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            q.pop();
            if (tmp->left)
            {
                a.insert({mp[tmp] - 1, tmp->left->val});
                q.push(tmp->left);
            }
            if (tmp->right)
            {
                a.insert({mp[tmp] + 1, tmp->right->val});
                q.push(tmp->right);
            }
        }
        //  这边倒不过来。。
        // 这种容器他没有+1 这种操作。。
    }
    // 用map 来存
    // 存完之后倒到vector。
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{

private:
    map<int, int> hasht;
    vector<vector<int>> res;

public:
    vector<vector<int>> verticalOrder(TreeNode *root)
    {
        if (root == NULL)
            return res;

        queue<TreeNode *> q;
        queue<int> state;
        q.push(root);
        state.push(0);

        while (q.size() != 0)
        {
            auto temp = q.front();
            auto temp_state = state.front();
            q.pop();
            state.pop();

            if (hasht.find(temp_state) == hasht.end())
            {
                vector<int> path;
                path.push_back(temp->val);
                res.push_back(path);
                hasht[temp_state] = res.size() - 1;
            }
            else
            {
                res[hasht[temp_state]].push_back(temp->val);
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
                state.push(temp_state - 1);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
                state.push(temp_state + 1);
            }
        }

        vector<vector<int>> ordered_res;
        for (auto &it : hasht)
        {
            ordered_res.push_back(res[(it).second]);
        }
        return ordered_res;
    }
};

class Solution
{
public:
    vector<vector<int>> verticalOrder(TreeNode *root)
    {
        if (!root)
            return {};
        map<int, vector<int>> a;
        queue<pair<int, TreeNode *>> q;
        q.push({0, root});
        while (!q.empty())
        {
            auto tmp = q.front();
            q.pop();
            a[tmp.first].push_back(tmp.second->val);
            if (tmp.second->left)
                q.push(make_pair(tmp.first - 1, tmp.second->left));
            if (tmp.second->right)
                q.push(make_pair(tmp.first + 1, tmp.second->right));
        }
        vector<vector<int>> res;
        for (auto it : a)
            res.push_back(it.second);
        return res;
    }
};

vector<vector<int>> bfs(TreeNode *root)
{
    map<int, vector<int>> a;
    if (!root)
        return {};
    queue<pair<int, TreeNode *>> q;
    q.push({0, root});
    if (!q.empty())
    {
        pair<int, TreeNode *> tmp = q.front();
        q.pop();
        a[tmp.first].push_back(tmp.second->val);
        if (tmp.second->left)
            q.push({tmp.first - 1, tmp.second->left});
        if (tmp.second->right)
            q.push({tmp.first + 1, tmp.second->right});
    }
    vector<vector<int>> res;
    for (auto it : a)
        res.push_back(it.second);
    return res;
}

vector<vector<int>> dfs(TreeNode *root)
{
    if (!root)
        return {};
    map<int, vector<int>> mp;
    queue<pair<int, TreeNode *>> q;
    q.push({0, root});
    while (!q.empty())
    {
        auto tmp = q.front();
        TreeNode *parent = tmp.second;
        int cur = tmp.first;
        q.pop();
        mp[cur].push_back(parent->val);
        if (parent->left)
            q.push({cur - 1, parent->left});
        if (parent->right)
            q.push({cur + 1, parent->right});
    }
    vector<vector<int>> res;
    for (auto cur : mp)
        res.push_back(cur.second);
    return res;
}
vector<vector<int>> dfs(TreeNode *root)
{
    if (!root)
        return {};
    map<int, vector<int>> mp;
    queue<pair<int, TreeNode *>> q;
    q.push({0, root});
    while (!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.second;
        int p = tmp.first;
        mp[p].push_back(cur->val);
        if (cur->left)
            q.push({p - 1, cur->left});
        if (cur->right)
            q.push({p + 1, cur->right});
    }
    vector<vector<int>> res;
    for (auto m : mp)
        res.push_back(m.second);
    return res;
}
vector<vector<int>> dfs(TreeNode *root)
{
    if (!root)
        return {};
    map<int, vector<int>> mp;
    queue<pair<int, TreeNode *>> q;
    q.push({0, root});
    while (!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.second;
        int p = tmp.first;
        mp[p].push_back(cur->val);
        if (cur->left)
            q.push({p - 1, cur->left});
        if (cur->right)
            q.push({p + 1, cur->right});
    }
    vector<vector<int>> res;
    for (auto m : mp)
        res.push_back(m.second);
    return res;
}
vector<vector<int>> dfs(TreeNode *root)
{
    if (!root)
        return {};
    map<int, vector<int>> mp;
    queue<pair<int, TreeNode *>> q;
    q.push({0, root});
    while (!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.second;
        int i = tmp.first;
        mp[i].push_back(cur->val);
        if (cur->left)
            q.push({i - 1, cur->left});
        if (cur->right)
            q.push({i + 1, cur->right});
    }
    vector<vector<int>> res;
    for (auto m : mp)
        res.push_back(m.second);
    return res;
}
// 这边有两个很巧妙的。。
// 1 他q存的是地址。。两个好处 既可以拿到他的值 来存在mp
// 也可以拿到他的左右节点。。来做层序遍历
// 这里 也是巧妙用了map的自动排序。和遍历的时候他是从小到大遍历的。
// 这个隐含条件。。。
// 可以说非常巧妙了。
// 没啥好说的 至少1000 慢慢刷吧。。天天刷。巩固树的优势。。
// 树是我很好的拿分点。。冲击困难的机会。
vector<vector<int>> soso(TreeNode *root)
{
    if (!root)
        return {};
    map<int, vector<int>> mp;
    queue<pair<TreeNode *, int>> q;
    mp[0].push_back(root->val);
    q.push({root, 0});
    while (q.size())
    {
        TreeNode *cur = q.front().first;
        int n = q.front().second;
        q.pop();
        if (cur->left)
        {
            q.push({cur->left, n - 1});
            mp[n - 1].push_back(cur->left->val);
        }
        if (cur->right)
        {
            q.push({cur->right, n + 1});
            mp[n - 1].push_back(cur->right->val);
        }
    }
    vector<vector<int>> ans;
    map<int, vector<int>>::iterator iter;
    for (iter = mp.begin(); iter != mp.end(); ++iter)
    {
        ans.push_back(iter->second);
    }
    return ans;
}
vector<vector<int>> soso(TreeNode *root)
{
    if (!root)
        return {};
    queue<pair<TreeNode *, int>> q;
    map<int, vector<int>> mp;
    q.push({root, 0});
    mp[0].push_back(root->val);
    while (q.size())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.first;
        int n = tmp.second;
        if (cur->left)
        {
            q.push({root->left, n - 1});
            mp[n - 1].push_back({root->left->val});
        }
        if (cur->right)
        {
            q.push({root->right, n + 1});
            mp[n + 1].push_back({root->left->val});
        }
    }
    map<int, vector<int>>::iterator it;
    vector<vector<int>> ans;
    for (it == mp.begin(); it != mp.end(); ++it)
        ans.push_back(it->second);
    return ans;
}
vector<vector<int>> soso(TreeNode *root)
{
    queue<pair<TreeNode *, int>> q;
    map<int, vector<int>> mp;
    if (!root)
        return {};
    q.push({root, 0});
    mp[0].push_back(root->val);
    while (q.size())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.first;
        int n = tmp.second;
        if (cur->left)
        {
            q.push({cur->left, n - 1});
            mp[n - 1].push_back(cur->left->val);
        }
        if (cur->right)
        {
            q.push({cur->right, n + 1});
            mp[n + 1].push_back(root->right->val);
        }
    }
    map<int, vector<int>>::iterator it;
    vector<vector<int>> res;
    for (it == mp.begin(); it != mp.end(); ++it)
        res.push_back(it->second);
    return res;
}
vector<vector<int>> soso(TreeNode *root)
{
    if (!root)
        return {};
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    map<int, vector<int>> mp;
    mp[0].push_back(root->val);
    while (q.size())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.first;
        int n = tmp.second;
        if (cur->left)
        {
            q.push({cur->left, n - 1});
            mp[n - 1].push_back(cur->left->val);
        }
        if (cur->right)
        {
            q.push({cur->right, n + 1});
            mp[n + 1].push_back(cur->right->val);
        }
    }
    map<int, vector<int>>::iterator it;
    vector<vector<int>> res;
    for (it = mp.begin(); it != mp.end(); ++it)
        res.push_back(it->second);
    return res;
}
vector<vector<int>> soso(TreeNode *root)
{
    if (!root)
        return {};
    queue<pair<TreeNode *, int>> q;
    map<int, vector<int>> mp;
    q.push({root, 0});
    mp[0].push_back(root->val);
    while (q.size())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.first;
        int n = tmp.second;
        if (cur->left)
        {
            q.push({cur->left, n - 1});
            mp[n - 1].push_back(cur->left->val);
        }
        if (cur->right)
        {
            q.push({cur->right, n + 1});
            mp[n + 1].push_back(cur->right->val);
        }
    }
    vector<vector<int>> res;
    map<int, vector<int>>::iterator i;
    for (i = mp.begin(); i != mp.end(); ++i)
        res.push_back(i->second);
    return res;
}
vector<vector<int>> soso(TreeNode *root)
{
    if (!root)
        return {};
    queue<pair<TreeNode *, int>> q;
    map<int, vector<int>> mp;
    q.push({root, 0});
    mp[0].push_back(root->val);
    while (q.size())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.first;
        int n = tmp.second;
        if (cur->left)
        {
            q.push({cur->left, n - 1});
            mp[n - 1].push_back(cur->left->val);
        }
        if (cur->right)
        {
            q.push({cur->right, n + 1});
            mp[n + 1].push_back(cur->right->val);
        }
    }
    map<int, vector<int>>::iterator i;
    vector<vector<int>> res;
    for (i = mp.begin(); i != mp.end(); ++i)
        res.push_back(i->second);
    return res;
}
vector<vector<int>> soso(TreeNode *root)
{
    if (!root)
        return {};
    queue<pair<TreeNode *, int>> q;
    map<int, vector<int>> mp;
    q.push({root, 0});
    mp[0].push_back(root->val);
    while (q.size())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.first;
        int n = tmp.second;
        if (cur->left)
        {
            q.push({cur->left, n - 1});
            mp[n - 1].push_back(cur->left->val);
        }
        if (cur->right)
        {
            q.push({cur->right, n + 1});
            mp[n + 1].push_back(cur->right->val);
        }
    }
    map<int, vector<int>>::iterator i;
    vector<vector<int>> res;
    for (i = mp.begin(); i != mp.end(); ++i)
        res.push_back(i->second);
    return res;
}
vector<vector<int>> soso(TreeNode *root)
{
    if (!root)
        return {};
    queue<pair<TreeNode *, int>> q;
    map<int, vector<int>> mp;
    q.push({root, 0});
    mp[0].push_back(root->val);
    while (q.size())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.first;
        int n = tmp.second;
        if (cur->left)
        {
            q.push({cur->left, n - 1});
            mp[n - 1].push_back(cur->left->val);
        }
        if (cur->right)
        {
            q.push({cur->right, n + 1});
            mp[n + 1].push_back(cur->right->val);
        }
    }
    vector<vector<int>> ans;
    map<int, vector<int>>::iterator i;
    for (i = mp.begin(); i != mp.end(); ++i)
        ans.push_back(i->second);
    return ans;
}
vector<vector<int>> soso(TreeNode *root)
{
    if (!root)
        return {};
    queue<pair<TreeNode *, int>> q;
    map<int, vector<int>> mp;
    // 无论map 还是哈希。都可以当做数组看。数组能放什么 他就能放什么。
    // 只有一个区别就是哈希表不能排序。
    q.push({root, 0});
    mp[0].push_back(root->val);
    while (q.size())
    {
        auto tmp = q.front();
        q.pop();
        TreeNode *cur = tmp.first;
        int n = tmp.second;
        if (cur->left)
        {
            q.push({cur->left, n - 1});
            mp[n - 1].push_back(cur->left->val);
        }
        if (cur->right)
        {
            q.push({cur->right, n + 1});
            mp[n + 1].push_back(root->right->val);
        }
    }
    vector<vector<int>> res;
    map<int, vector<int>>::iterator i;
    for (i = mp.begin(); i != mp.end(); ++i)
        res.push_back(i->second);
    return res;
}
// 循序渐进 一个个的煮熟了。。一步一个脚印。。走稳了 就行了。
// 我们开始的晚。。慢慢来吧。