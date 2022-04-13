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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
// 这边它把问题转化成了。。统计一条线路的最大值和最小值。。
// 而且这边传入子节点的是本节点的值。。和maxt 之间的比较。
// 而不是子节点自己的。。
// 这题自己的优化 递归的时候 视角最好是root本身。
class Solution
{
public:
    int ans = 0;
    void dfs(TreeNode *node, int max_val, int min_val)
    {
        if (node == nullptr)
        {
            ans = max(ans, max_val - min_val);
        }
        else
        {
            dfs(node->left, max(max_val, node->val), min(min_val, node->val));
            dfs(node->right, max(max_val, node->val), min(min_val, node->val));
        }
    }
    int maxAncestorDiff(TreeNode *root)
    {
        dfs(root, 0, INT_MAX);
        return ans;
    }
};

class Solution
{
public:
    int maxAncestorDiff(TreeNode *root)
    {
        dfs(root, root->val, root->val);
        return res;
    }
    int cnt1 = 0, cnt2 = 0;
    int res = 0;
    bool isleaf(TreeNode *root)
    {
        return !root->left && !root->right;
    }
    void dfs(TreeNode *root, int maxt, int mint)
    {
        cnt1++;
        if (isleaf(root))
        {
            res = max(res, maxt - mint);
            return;
        }
        else
        {
            cnt2++;
            TreeNode *left = root->left;
            TreeNode *right = root->right;
            if (left)
                dfs(left, max(maxt, left->val), min(mint, left->val));
            if (right)
                dfs(right, max(maxt, right->val), min(mint, right->val));
        }
    }
};
bool isleaf(TreeNode *root)
{
    return !root->left && !root->right;
}
int res;
void dfs(TreeNode *root, int maxt, int mint)
{
    if (isleaf(root))
        res = max(res, maxt - mint);
    else
    {
        TreeNode *l = root->left;
        TreeNode *r = root->right;
        if (l)
            dfs(l, max(maxt, l->val), min(mint, l->val));
        if (r)
            dfs(r, max(maxt, r->val), min(mint, r->val));
    }
}
void dfs(TreeNode *root, int maxt, int mint)
{
    if (isleaf(root))
        res = max(res, maxt, mint);
    else
    {
        TreeNode *l = root->left;
        TreeNode *r = root->right;
        if (l)
            dfs(l, max(maxt, l->val), min(mint, l->val));
        if (r)
            dfs(r, max(maxt, r->val), min(mint, r->val));
    }
}
void dfs(TreeNode *root, int maxt, int mint)
{
    if (isleaf(root))
        res = max(res, maxt - mint);
    else
    {
        TreeNode *l = root->left;
        TreeNode *r = root->right;
        if (l)
            dfs(l, max(maxt, l->val), min(mint, l->val));
        if (r)
            dfs(r, max(maxt, r->val), min(mint, r->val));
    }
}
void dfs(TreeNode *root, int maxt, int mint)
{
    if (isleaf(root))
        res = max(res, maxt - mint);
    else
    {
        TreeNode *l = root->left;
        TreeNode *r = root->right;
        if (l)
            dfs(l, max(maxt, l->val), min(mint, l->val));
        if (r)
            dfs(r, max(maxt, r->val), min(mint, r->val));
    }
}
void dfs(TreeNode *root, int maxt, int mint)
{
    if (isleaf(root))
        res = max(res, maxt - mint);
    else
    {
        TreeNode *l = root->left;
        TreeNode *r = root->right;
        if (l)
            dfs(l, max(maxt, l->val), min(mint, l->val));
        if (r)
            dfs(r, max(maxt, r->val), min(mint, r->val));
    }
}
void dfs(TreeNode *root, int maxt, int mint)
{
    if (isleaf(root))
        res = max(res, maxt - mint);
    else
    {
        TreeNode *l = root->left;
        TreeNode *r = root->right;
        if (l)
            dfs(l, max(maxt, l->val), min(mint, l->val));
        if (r)
            dfs(r, max(maxt, r->val), min(r->val, mint));
    }
}
void dfs(TreeNode *root, int maxt, int mint)
{
    if (isleaf(root))
        res = max(res, maxt - mint);
    else
    {
        TreeNode *l = root->left;
        TreeNode *r = root->right;
        if (l)
            dfs(l, max(maxt, l->val), min(mint, l->val));
        if (r)
            dfs(r, max(maxt, r->val), min(mint, r->val));
    }
}
void dfs(TreeNode *root, int maxt, int mint)
{
    if (isleaf(root))
        res = max(res, maxt - mint);
    else
    {
        TreeNode *l = root->left;
        TreeNode *r = root->right;
        if (l)
            dfs(l, max(maxt, l->val), min(mint, l->val));
        if (r)
            dfs(r, max(maxt, r->val), min(mint, r->val));
    }
}

/**
 * @param {number} target
 * @param {number} maxDoubles
 * @return {number}
 */
int minMoves(int target,int maxDoubles) {
   
};
