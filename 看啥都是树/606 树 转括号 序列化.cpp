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
// 主要是分类
// 把叶节点和只有左节点的分别简化处理。
// 其他的统一处理。
class Solution
{
public:
    string tree2str(TreeNode *root)
    {
        if (!root)
            return "";
        if (!root->left && !root->right)
            return to_string(root->val);
        if (root->left && !root->right)
            return to_string(root->val) + "(" + tree2str(root->left) + ")";
        else
            return to_string(root->val) + "(" + tree2str(root->left) + ")" + "(" + tree2str(root->right) + ")";
    }
};
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    if (!root->left && !root->right)
        return to_string(root->val);
    if (root->left && !root->right)
        return to_string(root->val) + "(" + dfs(root->left) + ")";
    else
        return to_string(root->val) + "(" + dfs(root->left) + ")" + "(" + dfs(root->right) + ")";
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    if (!root->left && !root->right)
        return to_string(root->val);
    if (root->left && !root->right)
        return to_string(root->val) + "(" + dfs(root->left) + ")";
    else
        return to_string(root->val) + "(" + dfs(root->left) + ")" + "(" + dfs(root->right) + ")";
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    if (!root->left && !root->right)
        return to_string(root->val);
    if (root->left && !root->right)
        return to_string(root->val) + "(" + dfs(root->left) + ")";
    else
        return to_string(root->val) + "(" + dfs(root->left) + ")" + "(" + dfs(root->right) + ")";
}
// 其实还是观察 然后总结。。出来 两种特殊的情况进行分类处理。
// 其他就是后序统计了。没啥。
// 简单题不过分。
// 主要要发现这个规律。。当叶节点和只有左边节点的时候 没有的是可以省略的。