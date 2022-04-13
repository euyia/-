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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// 这题是错位的。二叉搜索树  有两个节点错误的位置
// 关键是如何去找出来。那两个点。
// 题解 发现了一个巧妙的方法。。就是中序遍历。。
// 第一个降序的前 和第二个降序的后一个
// 。。也是个发现。
class Solution
{
public:
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
    TreeNode *cur = nullptr;
    // int cur;

    void traverse(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        traverse(root->left);
        //中序遍历代码位置
        if (cur != nullptr)
        {
            if (root->val < cur->val)
            { //出现排序错误
                if (left == nullptr)
                { //第一次出现
                    left = cur;
                    right = root;
                }
                else
                { //第二次出现
                    right = root;
                }
            }
        }
        cur = root;
        traverse(root->right);
    }
    void recoverTree(TreeNode *root)
    {
        traverse(root);
        TreeNode temp = *left;
        left->val = right->val;
        right->val = temp.val;
    }
};

class Solution
{
public:
    TreeNode *pre, *a, *b;
    void recoverTree(TreeNode *root)
    {
    }
    void dfs(TreeNode *root)
    {
    }
};
// 自己写一下。。无论什么情况 都是自己能写就自己写。。发现了。这点。。自己写才是自己的。。