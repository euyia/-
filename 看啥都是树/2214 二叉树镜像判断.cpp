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
// 这题看着超级简单。但是很容易和别的算法题混淆的。。写不出来的。
// 而且要写个辅助函数。。有时候转不过来来弯的。。

bool isSymmetric(TreeNode *root)
{
    if (!root)
        return true;
    return dfs(root->left, root->right);
};
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a && b || !b && a || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a && b || !b && a || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->right, b->left) && dfs(a->left, b->right);
}