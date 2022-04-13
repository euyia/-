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
    TreeNode *last;
    TreeNode *increasingBST(TreeNode *root)
    {
        if (!root)
            return nullptr;
        increasingBST(root->right);
        root->right = last;
        last = root->right;
        increasingBST(root->left);
        root->left = nullptr;
    }
};

class Solution
{
public:
    TreeNode *increasingBST(TreeNode *root, TreeNode *tail = nullptr)
    {
        if (!root)
            return tail;
        auto head = increasingBST(root->left, root);
        root->left = nullptr;
        root->right = increasingBST(root->right, tail);
        return head;
    }
};
// 而且他这里教会了我如何给原始函数添加参数。就是要自己附上初值。。
// 这个很牛逼了。