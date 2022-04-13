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
    int sumOfLeftLeaves(TreeNode *root)
    {
        queue<TreeNode *> q;
        if (!root)
            return 0;
        int res = 0;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            q.pop();
            if (tmp->left && !tmp->left->left && !tmp->left->right)
                res += tmp->left->val;
            if (tmp->left)
                q.push(tmp->left);
            if (tmp->right)
                q.push(tmp->right);
        }
        return res;
    }
};
// 这个是正解。。
// 看起来比我原来那个dfs 舒服多了。。
//  这么简单的题 我第一次碰到 。还是做了将近一个小时。。所以 刷题 经验对做题速度 有一个非常关键的影响。。
// 题型有没有有刷过。。速度上质的区别。差一个数量级的时间。
class Solution
{
public:
    bool isLeafNode(TreeNode *node)
    {
        return !node->left && !node->right;
    }

    int dfs(TreeNode *node)
    {
        int ans = 0;
        if (node->left)
        {
            ans += isLeafNode(node->left) ? node->left->val : dfs(node->left);
        }
        if (node->right && !isLeafNode(node->right))
        {
            ans += dfs(node->right);
        }
        return ans;
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        return root ? dfs(root) : 0;
    }
};
bool isleaf(TreeNode *root)
{
    return !root->left && !root->right;
}
int dfs(TreeNode *root)
{
    int ans = 0;
    if (root->left)
        ans += isleaf(root->left) ? root->left->val : dfs(root->left);
    if (root->right)
        ans += dfs(root->right);
    return ans;
}
class Solution
{
public:
    bool isLeafNode(TreeNode *node)
    {
        return !node->left && !node->right;
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }

        queue<TreeNode *> q;
        q.push(root);
        int ans = 0;
        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            if (node->left)
            {
                if (isLeafNode(node->left))
                {
                    ans += node->left->val;
                }
                else
                {
                    q.push(node->left);
                }
            }
            if (node->right)
            {
                if (!isLeafNode(node->right))
                {
                    q.push(node->right);
                }
            }
        }
        return ans;
    }
};

//  官方的剪纸是更加充分的。。他直接不然进入递归。而不是我们是让他进入 返回0；
// 而且相对两个层序的写法。。官方的思路 更加清晰。。具有结构性。

bool isLeafNode(TreeNode *node)
{
    return !node->left && !node->right;
}
int sumOfLeftLeaves(TreeNode *root)
{
    if (!root)
        return 0;
    queue<TreeNode *> q;
    q.push(root);
    int res = 0;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp->left)
            if (isleaf(root->left))
                res += root->left->val;
            else
                q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->left);
    }
}
int soso(TreeNode *root)
{
    int res = 0;
    queue<TreeNode *> q;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp->left)
            if (isleaf(tmp->left))
                res += tmp->left->val;
            else
                q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return res;
}
int soso(TreeNode *root)
{
    int res = 0;
    queue<TreeNode *> q;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp->left)
            if (isLeafNode(tmp->left))
                res += tmp->left->val;
            else
                q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return res;
}
int soso(TreeNode *root)
{
    int res = 0;
    queue<TreeNode *> q;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp->left)
            if (isleaf(tmp->left))
                res += tmp->left->val;
            else
                q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return res;
}
int soso(TreeNode *root)
{
    if (!root)
        return 0;
    queue<TreeNode *> q;
    q.push(root);
    int res = 0;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp->left)
            if (isleaf(tmp->left))
                res += tmp->left->val;
            else
                q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return res;
}
int soso(TreeNode *root)
{
    if (!root)
        return 0;
    queue<TreeNode *> q;
    q.push(root);
    int res = 0;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp->left)
            if (isleaf(tmp->left))
                res += tmp->left->val;
            else
                q.push(root->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return res;
}
int soso(TreeNode *root)
{
    if (!root)
        return 0;
    queue<TreeNode *> q;
    q.push(root);
    int res = 0;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp->left)
            if (isleaf(tmp->left))
                res += tmp->left->val;
            else
                q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return res;
}
int soso(TreeNode *root)
{
    if (!root)
        return 0;
    queue<TreeNode *> q;
    q.push(root);
    int res = 0;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp->left)
            if (isleaf(tmp->left))
                res += tmp->left->val;
            else
                q.push(tmp->left);
        if (tmp->right)
            if (!isleaf(tmp->right))
                q.push(tmp->right);
    }
    return res;
}