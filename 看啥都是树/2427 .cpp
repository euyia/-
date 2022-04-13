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
// 难题想难图。肯定是要花更多的时间去消化。。
// 这不是刚好适合我这种很方便刷的人嘛。。
// 刚好可以非常集中的吸收。。提高了刷题的成长效率。。
// 只要刷的足够多。。一切皆可吸收。

class Solution
{
public:
    vector<vector<int>> res;
    vector<int> path;
    deque<TreeNode *> q;
    vector<vector<int>> BSTSequences(TreeNode *root)
    {
        if (!root)
            return {{}};
        q.push_back(root);
        dfs();
        return res;
    }
    // 队列本质上是什么东西 可以这样传的？？？？？
    void dfs()
    {
        if (q.empty())
        {
            res.push_back(path);
            return;
        }

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            TreeNode *cur = q.front();
            q.pop_front();
            path.push_back(cur->val);
            if (cur->left)
                q.push_back(cur->left);
            if (cur->right)
                q.push_back(cur->right);

            dfs();

            if (cur->left)
                q.pop_back();
            if (cur->right)
                q.pop_back();
            q.push_back(cur);
            path.pop_back();
        }
    }
};

vector<vector<int>> res;
vector<int> path;
deque<TreeNode *> q;
void dfs()
{
    if (q.empty())
    {
        res.push_back(path);
        return;
    }
    int n = q.size();
    while (n--)
    {
        TreeNode *tmp = q.front();
        q.pop_front();
        path.push_back(tmp->val);
        if (tmp->left)
            q.push_back(tmp->left);
        if (tmp->right)
            q.push_back(tmp->right);
        dfs();
        if (tmp->left)
            q.pop_back();
        if (tmp->right)
            q.pop_back();
        q.push_back(tmp);
        path.pop_back();
    }
}
void dfs()
{
    if (q.empty())
    {
        res.push_back(path);
        return;
    }
    int n = q.size();
    while (n--)
    {
        TreeNode *tmp = q.front();
        q.pop_front();
        path.push_back(tmp->val);
        if (tmp->left)
            q.push_back(tmp->left);
        if (tmp->right)
            q.push_back(tmp->right);
        dfs();
        if (tmp->left)
            q.pop_back();
        if (tmp->right)
            q.pop_back();
        q.push_back(tmp);
        path.pop_back();
    }
}
void dfs()
{
    if (q.empty())
    {
        res.push_back(path);
        return;
    }
    int n = q.size();
    while (n--)
    {
        TreeNode *tmp = q.front();
        q.pop_front();
        // 从前面拿掉。。
        path.push_back(tmp->val);
        if (tmp->left)
            q.push_back(tmp->left);
        if (tmp->right)
            q.push_back(tmp->right);
        dfs();
        if (tmp->left)
            q.pop_back();
        if (tmp->right)
            q.pop_back();
        q.push_back(tmp);
        // 放到后面去。。
        path.pop_back();
    }
}
// 可能就是这样回退。。能形成左右对称的枚举吧。。
