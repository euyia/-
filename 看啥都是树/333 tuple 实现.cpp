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
// 自己的思路也是要自己养成。。在脑海里不断的走。
// 别人只是教你一次怎么走。但是你要自己把路走熟悉。
// 像这里 一个好的思路就是看哪个方向分类比较容易。就哪个方向。其他用else
// 一般是先true 后false 。。
// 可以先false的。然后else true

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
// 就是不能带引用。
// 这个设计巧妙在空节点。和非法节点的两个max min
// 一个稳定的触发 但是又能有效的规避值选。。
// 判断一个二叉树是否合法：左面子树中最大值<当前节点的值<右边子树中的最小值
// 我们进行递归判断，为空节点时，返回float("inf"), float("-inf")，这样它的任何父节点都将合法
// 如果当前节点不满足约束条件，返回float("-inf"), float("inf")，这样它的任何父节点都将不合法


class Solution
{
public:
   
    int largestBSTSubtree(TreeNode *root)
    {
        return get<2>(dfs(root));
    }
    tuple<int, int, int> t;
    // 最小 最大 个数
    tuple<int, int, int> dfs(TreeNode *root)
    {
        if (!root)
            return {INT_MAX, INT_MIN, 0};

        //  这边虽然不能识别。但是应该可以分解成[x,y,z][i,j,k]这样直接来用。
        // 等下可以试下。如果可以的话。。那就太好用了。。不用这样get。。费劲。。
        auto [x, y, z] = dfs(root->left);
        auto [i, j, k] = dfs(root->right);
        if (y < root->val && root->val < i)
            return {min(root->val, x), max(root->val, j), z + k + 1};
        else
            return {INT_MIN, INT_MAX, max(z, k)};
    }
};
// 这个解构 不用引用。
// 可以的。。那在一些场合 就非常方便了。
// 不过vscode编译不过去。很烦。如果能解决就好了。但是又涉及到编译。