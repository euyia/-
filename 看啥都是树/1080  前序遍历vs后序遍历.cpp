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
// 这题折腾了我4个小时。。
// 这题说实话。。题意非常隐晦。。
// 如果一个子树。他的左右节点 都被清理。那么他 也不活了= =
TreeNode *sufficientSubset(TreeNode *root, int limit)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    //到根结点了
    if (root->left == root->right)
    {
        if (root->val < limit)
        {
            return nullptr;
        }
        return root;
    }
    root->left = sufficientSubset(root->left, limit - root->val);
    root->right = sufficientSubset(root->right, limit - root->val);
    //左右子树都为空，意味着这个子树上没有被保留的路径，那么这个结点也没有保留的必要了
    if (root->left == nullptr && root->right == nullptr)
    {
        return nullptr;
    }
    return root;
}