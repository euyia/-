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
// 题目可以在这里描述。。
// 就是在一个现成的树后面再加一个值。
// 形成一颗 类似最大堆的 树。。
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *isnert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = isnert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}
TreeNode *insert(TreeNode *root, int val)
{
    if (!root || root->val < val)
        root = new TreeNode(val, root, nullptr);
    else
        root->right = insert(root->right, val);
    return root;
}