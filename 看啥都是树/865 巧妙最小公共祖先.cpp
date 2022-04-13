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

class Solution
{
public:
    //求当前结点的深度
    int depth(TreeNode *root)
    {
        if (!root)
            return 0;

        int left = depth(root->left);
        int right = depth(root->right);

        return 1 + max(left, right);
    }
    TreeNode *subtreeWithAllDeepest(TreeNode *root)
    {
        if (!root)
            return NULL;

        int left = depth(root->left);   //左树深度
        int right = depth(root->right); //右树深度

        if (left == right)
        { //如果左右两边深度相等，那么当前结点就是最近公共祖先
            return root;
        }
        else if (left > right)
        { //左边更深，那么就去左边找
            return subtreeWithAllDeepest(root->left);
        }
        else
        {
            return subtreeWithAllDeepest(root->right);
        }
    }
};
unordered_map<TreeNode *, int> mp;
int cnt = 0;
int getheight(TreeNode *root)
{
    cnt++;
    if (!root)
        return 0;
    int left = getheight(root->left);
    int right = getheight(root->right);
    mp[root] = max(left, right) + 1;
    return max(left, right) + 1;
}
TreeNode *subtreeWithAllDeepest(TreeNode *root)
{
    printf("%d ", cnt);
    if (!root)
        return nullptr;
    int left = mp[root->left];
    int right = mp[root->right];
    if (left == right)
        return root;
    else if (left > right)
        return subtreeWithAllDeepest(root->left);
    else
        return subtreeWithAllDeepest(root->right);
}
// 这种解法 只适合求 最深节点的。。
// 证明1 个就是公共祖先
// 证明2  他是最小的公共祖先。因为你看图 再上去节点 他左右节点高度就不一样。
// 很巧妙 这题。。美。。。美啊。。。有味道。