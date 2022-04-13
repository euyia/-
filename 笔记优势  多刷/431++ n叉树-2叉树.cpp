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
class Codec
{
public:
    // Encodes an n-ary tree to a binary tree.
    TreeNode *encode(Node *root)
    {
        if (!root)
            return nullptr;
        TreeNode *rt = new TreeNode(root->val);
        TreeNode *cur = rt;
        //    要留着rt的地址。然后用cur去迭代。。等下rt 要return回去给上一层。。不能直接用来迭代。
        for (int i = 0; i < root->children.size(); ++i)
        {
            if (i == 0)
            {
                cur->left = encode(root->children[i]);
                cur = cur->left;
            }
            else
            {
                cur->right = encode(root->children[i]);
                cur = cur->right;
            }
        }
        return rt;
    }

    // Decodes your binary tree to an n-ary tree.
    Node *decode(TreeNode *root)
    {
        if (!root)
            return nullptr;
        Node *node = new Node(root->val);
        root = root->left;
        while (root)
        {
            node->children.push_back(decode(root));
            root = root->right;
        }
        return node;
    }
};
// 这里很奇怪的一点是这node 他不能先放left节点进去。。然后再去迭代right。。
// 很诡异。。按理说应该可以。。leetcode 需要比较严格的条件判断？？
// 试了 也是可以。。但是要做很多条件判断。
// 还是这边统一来写。会好点。统一在while那边做条件判断。