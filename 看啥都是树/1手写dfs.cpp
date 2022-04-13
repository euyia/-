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

// 为什么中序遍历 和二叉搜索树 是吻合的。。

TreeNode *dfs(TreeNode *root, TreeNode *p)
{
    stack<TreeNode *> s;
    bool flag = false;
    while (root || !s.empty())
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        root = s.top();
        s.pop();
        if (flag)
            return root;
        if (root == p)
            flag = true;
        root = root->right;
    }
    return nullptr;
}
// 为什么中序遍历 和二叉搜索树 是吻合的。。
// 访问的第一个节点是最左边的叶节点 不是最深的。
// 先序是 第一次都在到节点的时候 就访问。。+我们直到走的路径 很容易想象。。
// 但是中序。。他访问节点的时机。就比较难想象？？？？？？？？
// 后序也很好想象。。从左到右 然后一个节点只要他的孩子节点范文完就立刻访问他。