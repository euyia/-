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
class Solution
{
public:
    TreeNode *trimBST(TreeNode *root, int l, int r)
    {
        if (!root)
            return nullptr;
        if (root->val > r)
            return root->left = trimBST(root->left, l, r);
        if (root->val < l)
            return root->right = trimBST(root->right, l, r);
        root->left = trimBST(root->left, l, r);
        root->right = trimBST(root->right, l, r);
        return root;
    }
};
// 这种递归设计真的很离谱。。
// 会产生非常神奇的效果。。如此简洁的写法。