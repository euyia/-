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
// 这是计算完全二叉树的节点数
// 题目应该是想考树高的关系。。但是这题有漏洞 就是可以直接遍历。人后用cnt++直接算出来
// 通过树高来求。。这个思路可以学下。不过感觉意义不是特别大。
class Solution
{
public:
    int countNodes(TreeNode *root)
    {

        // int res=0;
        if (root == nullptr)
            return 0;

        int l = height(root->left);
        int r = height(root->right);
        if (l == r)
        {
            return (1 << l) + countNodes(root->right);
        }
        else
        {
            return (1 << r) + countNodes(root->left);
        }
        // return res;
    }
    int height(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        return 1 + height(root->left);
    }
};
但这是一个普适的解法，对于此题给的完全二叉树的特点没有利用起来，进一步考虑如何使用完全二叉树的特点更快解出此题。

    首先需要明确完全二叉树的定义：它是一棵空树或者它的叶子节点只出在最后两层，若最后一层不满则叶子节点只在最左侧。

    再来回顾一下满二叉的节点个数怎么计算，如果满二叉树的层数为h，则总节点数为：2 ^
    h - 1. 那么我们来对 root 节点的左右子树进行高度统计，分别记为 left 和 right，有以下两种结果：

                left ==
        right。这说明，左子树一定是满二叉树，因为节点已经填充到右子树了，左子树必定已经填满了。所以左子树的节点总数我们可以直接得到，是 2 ^
    left - 1，加上当前这个 root 节点，则正好是 2 ^ left。再对右子树进行递归统计。 left != right。说明此时最后一层不满，但倒数第二层已经满了，可以直接得到右子树的节点个数。同理，右子树节点 + root 节点，总数为 2 ^ right。再对左子树进行递归查找。 关于如何计算二叉树的层数，可以利用下面的递归来算，当然对于完全二叉树，可以利用其特点，不用递归直接算，具体请参考最后的完整代码。
