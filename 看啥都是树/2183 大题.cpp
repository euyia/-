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
// 这个题 题目其实都没读懂。
// 没有搞清楚要怎么做才是满足题目要求。。
// ？？？
class Solution
{
public:
    int res = 0, s = 1;
    int dfs(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        int l = dfs(root->left), r = dfs(root->right);
        if (root->left && root->right)
        {
            res += !l && !r;
            s = !(l && r);
            return 1;
        }
        return l || r;
    }
    int navigation(TreeNode *root)
    {
        int l = dfs(root->left), r = dfs(root->right);
        return res + ((l && r) ? 0 : s);
    }
};
