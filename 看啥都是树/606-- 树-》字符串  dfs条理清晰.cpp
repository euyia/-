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
    string tree2str(TreeNode *root)
    {
        dfs(root);
        return t;
    }
    string t;
    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        t += to_string(root->val);
        if (!root->left && !root->right)
            return;
        t += '(';
        dfs(root->left);
        t += ')';
        if (root->right)
        {
            t += '(';
            dfs(root->right);
            t += ')';
        }
    }
};
string s;
void dfs(TreeNode *root)
{
    if (!root)
        return;
    s += to_string(root->val);
    if (!root->left && !root->right)
        return;
    s += '(';
    dfs(root->left);
    s += ')';
    if (root->right)
    {
        s += '(';
        dfs(root->right);
        s += ')';
    }
}
// 这题虽然是简单题。。但是很值得刷的。
// 1 是这里总结的好。。2 是代码实现逻辑清晰。