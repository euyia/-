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

struct Node
{
    char val;
    Node *left;
    Node *right;
    Node() : val(' '), left(nullptr), right(nullptr) {}
    Node(char x) : val(x), left(nullptr), right(nullptr) {}
    Node(char x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int val;
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        // 这会不会太简单了，如果只是找值，然后在另外一棵树查值？
        // 两个树同时递归。。在一个函数里面。。。我擦。。。。
        // 之前记得有一个人问过这个情况，原来克隆树就可以。。
        dfs(original, cloned, target);
        return cur;
    }
    TreeNode *cur;
    void dfs(TreeNode *a, TreeNode *b, TreeNode *t)
    {
        if (!a)
            return;
        if (a == t)
            cur = b;
        dfs(a->left, b->left, t);
        dfs(a->right, b->right, t);
    }
};
TreeNode *cur;
void dfs(TreeNode *a, TreeNode *b, TreeNode *t)
{
    if (!a)
        return;
    if (a == t)
        cur = b;
    dfs(a->left, b->left, t);
    dfs(a->left, b->left, t);
}
void dfs(TreeNode *a, TreeNode *b, TreeNode *t)
{
    if (!a)
        return;
    if (a == t)
        cur = b;
    dfs(a->left, b->left, t);
    dfs(a->right, b->right, t);
}
void dfs(TreeNode *a, TreeNode *b, TreeNode *t)
{
    if (!a)
        return;
    if (a == t)
        cur = b;
    dfs(a->left, b->left, t);
    dfs(a->right, b->right, t);
}