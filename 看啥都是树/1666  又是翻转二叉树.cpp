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

// Definition for a Node.
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
    Node *flipBinaryTree(Node *root, Node *leaf)
    {
        Node *pNewFather = nullptr;
        for (Node *pNode = leaf; pNode != root; pNewFather = pNode, pNode = pNode->left)
        {
            if (pNode->left != nullptr && pNode->left != pNewFather)
            {
                pNode->right = pNode->left;
            }
            pNode->left = pNode->parent;
            pNode->parent = pNewFather;
        }
        root->parent = pNewFather;
        if (root->left == pNewFather)
        {
            root->left = nullptr;
        }

        if (root->right == pNewFather)
        {
            root->right = nullptr;
        }
        return leaf;
    }
};