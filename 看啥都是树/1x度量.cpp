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

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

// Definition for a Node.
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
class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (!root)
            return 0;
        int res = 0;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            res++;
            int n = q.size();
            while (n--)
            {
                Node *tmp = q.front();
                q.pop();
                for (auto c : tmp->children)
                    q.push(c);
            }
        }
        return res;
    }
};
// 刷是思维拉升的捷径。。。