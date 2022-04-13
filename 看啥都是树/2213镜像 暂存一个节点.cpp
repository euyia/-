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
    TreeNode *mirrorTree(TreeNode *root)
    {
        if (root)
        {
            TreeNode *tmp = root->left;
            root->left = mirrorTree(root->right);
            root->right = mirrorTree(tmp);
            return root;
        }
        return nullptr;
    }
};
// 如果没有暂存 发生什么。。。
TreeNode *dfs(TreeNode *root)
{
    if (!root)
        return nullptr;
    TreeNode *tmp = root->left;
    root->left = dfs(root->right);
    root->right = dfs(tmp);
    return root;
}