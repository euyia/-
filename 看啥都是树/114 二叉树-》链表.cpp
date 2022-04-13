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
// 这题很有趣的。。
// 我感觉出题的人 是想要考擦 牛逼的写法的这种。。遍历方式
// 可以说 是体现了这种遍历 先right 然后left 这种遍历方式的一个价值 和应用场景
// 朴素的那种也可以刷下。。算是后序的。。中规中矩的从底下开始处理。。注意left的置空。
// 收获嘛。。就是这两种框架吧。。还有这种特殊的遍历方式。。

class Solution
{
public:
    TreeNode *last;

    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        dfs(root->right);
        dfs(root->left);
        root->right = last;
        root->left = nullptr;
        last = root;
    }
};
TreeNode *last, *pre, *head;
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->right);
    dfs(root->left);
    while (root->right)
        root = root->right;
    root->right = last;
    pre = root->left;
    root->left = nullptr;
    last = root;
}
TreeNode *pre;
TreeNode *dfs1(TreeNode *root)
{
    if (!root)
        return nullptr;
    TreeNode *left = dfs1(root->left);
    TreeNode *right = dfs1(root->right);
    if (!left)
        root->right = right;
    else
    {
        root->right = left;
        while (left->right)
            left = left->right;
        left->right = right;
        root->left = nullptr;
    }
    return root;
}
// 两种解法。。
// 第二种还是比较朴素的。。
//
// 很妙的反中序遍历。。这个可以。。那么。。。正中序。。正前序 。。各种顺序的迭代应该也都是可以的。。
// 所以这个模板在套用在二叉树转链表 就非常有价值了。。。
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->right);
    root->right = last;
    last = root;
    dfs(root->left);
    root->left = nullptr;
}