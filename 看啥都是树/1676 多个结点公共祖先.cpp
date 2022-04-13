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

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};
// 下面两个分别是两种一个是找多个结点的公共祖先。。
// 一个是多叉树找公共祖先。。是两个方向的扩展。。
Node *find_same(Node *root, Node *p, Node *q)
{
    // 说明这个找祖先是可以的。
    if (!root || root == p || root == q)
        return root;
    Node *res = nullptr;
    int cnt = 0;
    for (Node *c : root->children)
    {
        Node *cur = find_same(c, p, q);
        if (cur)
        {
            cnt++;
            res = cur;
        }
    }
    if (cnt > 1)
        return root;
    else
        return res;
}
class Solution
{
public:
    TreeNode *dfs(TreeNode *root, vector<TreeNode *> &nodes)
    {
        if (!root)
            return nullptr;
        for (TreeNode *n : nodes)
            // 这个是核心。。
            if (root == n)
                return root;
        TreeNode *left = dfs(root->left, nodes);
        TreeNode *right = dfs(root->right, nodes);
        if (!left)
            return right;
        if (!right)
            return left;
        return root;
    }
};