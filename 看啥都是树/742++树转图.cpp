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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
    unordered_map<TreeNode *, vector<TreeNode *>> mp;
    unordered_set<TreeNode *> visisted;
    int findClosestLeaf(TreeNode *root, int k)
    {
        if (!root->left, !root->right)
            return root->val;
        build(root, nullptr);
        TreeNode *s;
        for (auto m : mp)
            if (m.first->val == k)
            {
                s = m.first;
                break;
            }
        queue<TreeNode *> q;
        q.push(s);
        visisted.insert(s);
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            if (!tmp->left && !tmp->right)
                return tmp->val;
            q.pop();
            for (TreeNode *m : mp[tmp])
                if (visisted.count(m) == 0)
                {
                    q.push(m);
                    visisted.insert(m);
                }
        }
    }
    void build(TreeNode *root, TreeNode *parent)
    {
        if (!root)
            return;
        if (parent)
        {
            mp[root].push_back(parent);
            mp[parent].push_back(root);
        }
        build(root->left, root);
        build(root->right, root);
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    unordered_map<TreeNode *, vector<TreeNode *>> graph; //将二叉树转化为图
    void dfs(TreeNode *node, TreeNode *parent)
    { //每次传入的参数为当前结点及其父节点
        if (!node)
            return;
        if (parent)
        {
            graph[node].push_back(parent);
            graph[parent].push_back(node); //父子结点间建立无向边
        }
        dfs(node->left, node);
        dfs(node->right, node);
    }
    int findClosestLeaf(TreeNode *root, int k)
    {
        if (!root->left && !root->right)
            return k; //当只有根结点时,无法建图,根节点即为最近的叶节点
        dfs(root, nullptr);
        queue<TreeNode *> q;
        unordered_set<TreeNode *> isVisited; //当前结点是否已访问
        TreeNode *start;
        for (auto g : graph)
        { //遍历图找到BFS的起始结点
            if (g.first->val == k)
            {
                start = g.first;
                break;
            }
        }
        q.push(start);
        isVisited.insert(start);
        while (!q.empty())
        {
            TreeNode *t = q.front();
            q.pop();
            if (!t->left && !t->right)
                return t->val; //寻找到的第一个叶子结点即为距离k最近的叶结点 不需要层序遍历的方式
            for (auto nbr : graph[t])
            {
                if (isVisited.count(nbr) == 0)
                {
                    q.push(nbr);
                    isVisited.insert(nbr);
                }
            }
        }
        return -1;
    }
};
unordered_map<TreeNode *, vector<TreeNode *>> mp;
unordered_set<TreeNode *> visited;
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
    build(root->left, root);
    build(root->right, root);
}
int find(TreeNode *root, int k)
{
    if (!root->left && !root->right)
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (!tmp->left && !tmp->right)
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (visited.count(m) == 0)
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
    build(root->left, root);
    build(root->right, root);
}
int find(TreeNode *root, int k)
{
    if (!root->left && !root->right)
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (!tmp->left && !tmp->right)
            return tmp->val;
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
    build(root->left, root);
    build(root->right, root);
}
bool isleaf(TreeNode *root)
{
    return !root->left && !root->right;
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
    build(root->left, root);
    build(root->right, root);
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[parent].push_back(root);
        mp[root].push_back(parent);
    }
    build(root->left, root);
    build(root->right, root);
}
int findClosestLeaf(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (isleaf(m))
                return m->val;
            else if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
    build(root->left, root);
    build(root->right, root);
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(root);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[parent].push_back(root);
        mp[root].push_back(parent);
    }
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
    build(root->left, root);
    build(root->right, root);
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
    build(root->left, root);
    build(root->right, root);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
    {
        mp[root->left].push_back(root);
        mp[root].push_back(root->left);
    }
    if (root->right)
    {
        mp[root->right].push_back(root);
        mp[root].push_back(root->right);
    }
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}
void build(TreeNode *root, TreeNode *parent)
{
    if (!root)
        return;
    if (parent)
    {
        mp[root].push_back(parent);
        mp[parent].push_back(root);
    }
    build(root->left, root);
    build(root->right, root);
}
int find(TreeNode *root, int k)
{
    if (isleaf(root))
        return k;
    build(root, nullptr);
    TreeNode *s;
    for (auto m : mp)
        if (m.first->val == k)
        {
            s = m.first;
            break;
        }
    queue<TreeNode *> q;
    q.push(s);
    visited.insert(s);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (isleaf(tmp))
            return tmp->val;
        q.pop();
        for (TreeNode *m : mp[tmp])
            if (!visited.count(m))
            {
                q.push(m);
                visited.insert(m);
            }
    }
    return -1;
}