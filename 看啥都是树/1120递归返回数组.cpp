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
//  这个主要是这个数组。。
// 非常的简洁有效。。干脆利落。。
// 比我那改val 和用哈希。。两路走的 好非常多。。
// 原来一个数组就能做到。。非常值得学习。
// 而且这个数组是每个递归函数都独立拥有的。又能通过返回值。。做数值传递。。
// 我感觉递归的返回值的位置。。能起到一个非常重要的作用。。
// 我平时都不敢用这个位置。。
// 他这里传返回值数组 。。效果非常好。。。。。。。。。使得代码非常简洁。
// 所以递归返回值 如果是数组。。效果非常好。。
class Solution
{
public:
    double res = 0;
    double maximumAverageSubtree(TreeNode *root)
    {
        dfs(root);
        return res;
    }
    vector<double> dfs(TreeNode *root)
    {
        vector<double> vec(2);
        // 0位置存个数   1位置存是和
        if (!root)
            return vec;
        vector<double> l = dfs(root->left);
        vector<double> r = dfs(root->right);
        vec[0] = l[0] + r[0] + 1;
        vec[1] = l[1] + r[1] + root->val;
        double ans = vec[1] / vec[0];
        res = max(res, ans);
        return vec;
    }
};
