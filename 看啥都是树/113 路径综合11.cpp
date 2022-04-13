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
vector<vector<int>> res;
vector<int> path;
void dfs(TreeNode *root, int t)
{
    if (root)
    {
        t -= root->val;
        path.push_back(root->val);
        if (!root->left && !root->right && t == 0)
            res.push_back(path);
        dfs(root->left, t);
        dfs(root->right, t);
        path.pop_back();
    }
}
class Solution
{
public:
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<int> path;
        vector<vector<int>> res;
        if (root == nullptr)
            return res;
        visit(root, targetSum, path, res);
        return res;
    }
    void visit(TreeNode *cur, int targetSum, vector<int> &path, vector<vector<int>> &res)
    {
        path.push_back(cur->val);
        if (cur->left == nullptr && cur->right == nullptr)
        {
            int sum = accumulate(path.begin(), path.end(), 0);
            if (sum == targetSum)
            {
                res.push_back(path);
                return;
            }
        }
        if (cur->left)
        {
            visit(cur->left, targetSum, path, res);
            path.pop_back();
        }
        if (cur->right)
        {
            visit(cur->right, targetSum, path, res);
            path.pop_back();
        }
    }
};
// 这个感觉是标准的好理解的回溯写法。。。。每个都分别popback。。恢复状态。
// 但是 我写的那种比较简练。。
void dfs(TreeNode *root, int t)
{
    if (root)
    {
        t -= root->val;
        path.push_back(root->val);
        if (!root->left && !root->right && t == 0)
            res.push_back(path);
        dfs(root->left, t);
        dfs(root->right, t);
        path.pop_back();
    }
}
// 回溯和深度优先的区别 就是 回溯 要统计的是要恢复状态的。。
// 他们都的路径是一样的。。但是要的答案是不一样的。
// dfs 他是走过的全部都会统计。。如果回溯的话。。你走过如果是错的。。他需要剔除掉。
void dfs(TreeNode *root, int t)
{
    if (root)
    {
        t -= root->val;
        if (!root->left && !root->right && t == 0)
            res.push_back(path);
        dfs(root->left, t);
        dfs(root->right, t);
        path.pop_back();
    }
}
void dfs(TreeNode *root, int t)
{
    if (root)
    {
        t -= root->val;
        if (!root->left && !root->right && t == 0)
            res.push_back(path);
        dfs(root->left, t);
        dfs(root->right, t);
        path.pop_back();
    }
}
void dfs(TreeNode *root, int t)
{
    if (root)
    {
        t -= root->val;
        if (!root->left && !root->right && t == 0)
            res.push_back(path);
        dfs(root->left, t);
        dfs(root->right, t);
        path.pop_back();
    }
}
void dfs(TreeNode *root, int t)
{
    if (root)
    {
        t -= root->val;
        path.push_back(root->val);
        if (!root->left && !root->right && t == 0)
            res.push_back(path);
        dfs(root->left, t);
        dfs(root->right, t);
        path.pop_back();
    }
}
void dfs(TreeNode *root, int t)
{
    if (root)
    {
        t -= root->val;
        path.push_back(root->val);
        if (!root->left && !root->right && t == 0)
            res.push_back(path);
        dfs(root->left, t);
        dfs(root->right, t);
        path.pop_back();
    }
}
// 学习更多更多更多的套路。。好的套路 。。什么叫好多套路 前100 的都算。
// 套路 1 多刷 记住框架 提取框架2 看视频理解 3 调试 理解。。
// 目的 掌握 更多更多的套路！！！！！！！！！