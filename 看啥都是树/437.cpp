
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
    int target, ans;
    int pathSum(TreeNode *root, int targetSum)
    {
        if (root == NULL)
            return 0;
        target = targetSum;
        dfs(root);
        return ans;
    }

    void dfs(TreeNode *node)
    {
        dfs2(node, 0);
        if (node->left != NULL)
            dfs(node->left);
        if (node->right != NULL)
            dfs(node->right);
    }

    void dfs2(TreeNode *node, int sum)
    {
        sum += node->val;
        if (sum == target)
            ++ans;
        if (node->left != NULL)
            dfs2(node->left, sum);
        if (node->right != NULL)
            dfs2(node->right, sum);
    }
};

// 作者：bianchengxiong
// 链接：https://leetcode-cn.com/problems/path-sum-iii/solution/acmjin-pai-ti-jie-dfs-shu-shang-qian-zhu-zu3k/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
class Solution
{
private:
    int target, res;
    int soso(TreeNode *root, int targetnum)
    {
        target = targetnum;
        dfs(root);
        return res;
    }
    void dfs(TreeNode *root)
    {
        if (root)
        {
            dfs2(root, 0);
            dfs(root->left);
            dfs(root->right);
        }
    }
    void dfs2(TreeNode *root, int nums)
    {
        if (root)
        {
            nums += root->val;

            if (nums == target)
                ++res;
            dfs2(root->left, nums);
            dfs2(root->right, nums);
        }
    }
};
class Solution
{
private:
    int target, res;

public:
    int soso(TreeNode *root, int t)
    {
        target = t;
        dfs(root);
        return res;
    }
    void dfs(TreeNode *root)
    {
        if (root)
        {
            df(root, 0);
            dfs(root->left);
            dfs(root->right);
        }
    }
    void df(TreeNode *root, int sum)
    {
        if (root)
        {

            sum += root->val;
            if (sum == target)
                ++res;
            df(root->left, sum);
            df(root->right, sum);
        }
    }
};
class Solution
{
private:
    int target, res;

public:
    int soso(TreeNode *root, int t)
    {
        target = t;
        dfs(root);
        return res;
    }
    void dfs(TreeNode *root)
    {
        if (root)
        {
            df(root, 0);
            dfs(root->left);
            dfs(root->right);
        }
    }
    void df(TreeNode *root, int sum)
    {
        if (root)
        {
            sum += root->val;
            if (sum == target)
                ++res;
            df(root->left, sum);
            df(root->right, sum);
        }
    }
};
class Solution
{
private:
    int target, res;

public:
    void df(TreeNode *root, int sum)
    {
        if (root)
        {
            sum += root->val;
            if (sum == target)
                ++res;
            df(root->left, sum);
            df(root->right, sum);
        }
    }
    void dfs(TreeNode *root)
    {
        if (root)
        {
            df(root, 0);
            dfs(root->left);
            dfs(root->right);
        }
    }
    int soso(TreeNode *root, int t)
    {
        target = t;
        dfs(root);
        return res;
    }
};
