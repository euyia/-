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
// 他这样写更漂亮。。
// 逻辑更清晰
// 最长路径和。。双向统计的方式。。
// 这个种题型 可以当做一个框架了。。。

class Solution
{
public:
    int longestUnivaluePath(TreeNode *root)
    {
        if (!root)
            return 0;
        longestPath(root);
        return res;
    }

    int longestPath(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = longestPath(root->left), right = longestPath(root->right);
        // 如果存在左子节点和根节点同值，更新左最长路径;否则左最长路径为0
        if (root->left && root->val == root->left->val)
            left++;
        else
            left = 0;
        if (root->right && root->val == root->right->val)
            right++;
        else
            right = 0;
        res = max(res, left + right);
        return max(left, right);
    }

private:
    int res = 0;
};
// 他这样写更漂亮。。
// 逻辑更清晰
int res = 0;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
//  叶节点 他边数 记作0的 所以 不能用left带题root->left。
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(right + left, res);
    return max(right, left);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->val == root->right->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->right->val == root->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val)
        left++;
    else
        left = 0;
    if (root->right && root->val == root->right->val)
        right++;
    else
        right = 0;
    res = max(res, left + right);
    return max(left, right);
}
// 这个框架很简洁。
// 1 在后序处理之前。对left和right传上来的数据进行再次整理。
// 2 他这里的left right做分类的时候。角度非常好。只有相等时候才++ 其他else 全部=0；