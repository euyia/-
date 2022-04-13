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
    Node *left;
    Node *right;

    Node() {}

    Node(int _val)
    {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node *_left, Node *_right)
    {
        val = _val;
        left = _left;
        right = _right;
    }
};
// ===================

class Solution
{

private:
    Node *pre, *head;
    void dfs(Node *cur)
    {
        if (cur == nullptr)
            return;
        dfs(cur->left);
        if (pre != nullptr)
            pre->right = cur;
        else
            head = cur;
        // 这个pre默认为空吗？？？？不然怎么判断他是第一个？？？？？
        // shide
        cur->left = pre;
        pre = cur;
        dfs(cur->right);
    }

public:
    Node *treeToDoublyList(Node *root)
    {
        if (root == nullptr)
            return nullptr;
        dfs(root);
        head->left = pre;
        pre->right = head;
        return head;
    }
};

class Solution
{
private:
    Node *pre, *head;
    void dfs(Node *cur)
    {
        if (!cur)
            return;
        dfs(cur->left);
        if (pre != nullptr)
            pre->right = cur;
        else
            head = cur;

        cur->left = pre;
        pre = cur;
        dfs(cur->right);
    }
};
Node *pre, *head;
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
Node *soso(Node *root)
{
    if (!root)
        return nullptr;
    dfs(root);
    head->left = pre;
    pre->right = head;
    return head;
}
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
void dfs(Node *cur)
{
    if (!cur)
        return;
    dfs(cur->left);
    if (pre != nullptr)
        pre->right = cur;
    else
        head = cur;
    cur->left = pre;
    pre = cur;
    dfs(cur->right);
}
