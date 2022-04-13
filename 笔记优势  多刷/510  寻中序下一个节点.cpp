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

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *parent;
};

class Solution
{
public:
    Node *inorderSuccessor(Node *root)
    {
        // 1有右节点的情况
        if (root->right)
        {
            Node *node = root->right;
            while (node->left)
                node = node->left;
            return node;
        }
        //没有右节点的情况
        while (root->parent && root->parent->right == root)
            root = root->parent;
        return root->parent;
    }
};