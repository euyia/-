// 解法三、终极解法
// 上面两种解法用到了孙子节点，计算爷爷节点能偷的钱还要同时去计算孙子节点投的钱，虽然有了记忆化，但是还是有性能损耗。

// 我们换一种办法来定义此问题

// 每个节点可选择偷或者不偷两种状态，根据题目意思，相连节点不能一起偷

// 当前节点选择偷时，那么两个孩子节点就不能选择偷了
// 当前节点选择不偷时，两个孩子节点只需要拿最多的钱出来就行(两个孩子节点偷不偷没关系)
// 我们使用一个大小为 2 的数组来表示 int[] res = new int[2] 0 代表不偷，1 代表偷
// 任何一个节点能偷到的最大钱的状态可以定义为

// 当前节点选择不偷：当前节点能偷到的最大钱数 = 左孩子能偷到的钱 + 右孩子能偷到的钱
// 当前节点选择偷：当前节点能偷到的最大钱数 = 左孩子选择自己不偷时能得到的钱 + 右孩子选择不偷时能得到的钱 + 当前节点的钱数

// 作者：reals
// 链接：https://leetcode-cn.com/problems/house-robber-iii/solution/san-chong-fang-fa-jie-jue-shu-xing-dong-tai-gui-hu/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
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
class Solution
{
public:
    // first : not to choose current node
    // second : choose current node
    // 类似后续遍历 === 自底向上
    pair<int, int> helper(TreeNode *root)
    {
        if (root == NULL)
            return make_pair(0, 0);
        pair<int, int> left = helper(root->left);
        pair<int, int> right = helper(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), left.first + right.first + root->val);
    }
    int rob(TreeNode *root)
    {
        pair<int, int> res = helper(root);
        return max(res.first, res.second);
    }
};
#define pii pair<int, int>
class Solution
{
private:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + left.second);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.second);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pair<int, int> dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pair<int, int> left = dfs(root->left);
        pair<int, int> right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pair<int, int> res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + right.first + left.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.second);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.second, res.first);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.second, right.first), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.second, right.first), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.second);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.second, right.first), root->val + left.first + right.first);
    }
    int rob(TreeNode *root)
    {
        pii res = dfs(root);
        return max(res.first, res.second);
    }
};
class Solution
{
public:
    pii dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pii left = dfs(root->left);
        pii right = dfs(root->right);
        return make_pair(max(left.first, left.second) + max(right.first, right.second), root->val + left.first + right.second);
    }
    int rob(TreeNode *root)
    {
        pii left = dfs(root);
        return max(left.first, left.second);
    }
};