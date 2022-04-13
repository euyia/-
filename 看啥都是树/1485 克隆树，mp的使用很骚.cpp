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
    int val;
    Node *left;
    Node *right;
    Node *random;
    Node() : val(0), left(nullptr), right(nullptr), random(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr), random(nullptr) {}
    Node(int x, Node *left, Node *right, Node *random) : val(x), left(left), right(right), random(random) {}
};

struct NodeCopy
{
    int val;
    NodeCopy *left;
    NodeCopy *right;
    NodeCopy *random;
    NodeCopy() : val(0), left(nullptr), right(nullptr), random(nullptr) {}
    NodeCopy(int x) : val(x), left(nullptr), right(nullptr), random(nullptr) {}
    NodeCopy(int x, NodeCopy *left, NodeCopy *right, NodeCopy *random) : val(x), left(left), right(right), random(random) {}
};

class Solution
{
public:
    NodeCopy *copyRandomBinaryTree(Node *root)
    {
    }
};
// 相当于通过一棵树 建另外一棵树。
class Solution
{
private:
    unordered_map<Node *, NodeCopy *> mp;

public:
    NodeCopy *dfs(Node *root)
    {
        if (!root)
        {
            return nullptr;
        }

        if (mp.count(root))
        {
            return mp[root];
        }

        // 这边是存值的过程mp；
        mp[root] = new NodeCopy(root->val);
        // 不要怪别人声音大。。是你在的层级就是这样。。
        // 有本事就往上走。。
        mp[root]->left = dfs(root->left);
        mp[root]->right = dfs(root->right);
        mp[root]->random = dfs(root->random);

        return mp[root];
    }
};
