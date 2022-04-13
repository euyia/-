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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    int ans;
    void dfs(TreeNode *root, int sum)
    {
        if (root == NULL)
            return;
        sum -= root->val;
        if (sum == 0)
            ans++;
        dfs(root->left, sum);
        dfs(root->right, sum);
    }
    int pathSum(TreeNode *root, int sum)
    {
        if (root == NULL)
            return 0;
        dfs(root, sum);
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        return ans;
    }
};

// 也不能直接遍历成一维的。。。因为一维的和树本身 相连的情况不一样了。。
// 抽象。。抽丝剥茧。。抽象能力。。
class Solution
{
public:
    vector<vector<int>> res;
    vector<int> path;
    int ans;
    int pathSum(TreeNode *root, int sum)
    {
        if (!root)
            return 0;
        dfs(root, sum);
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        return ans;
    }
    void dfs(TreeNode *root, int sum)
    {
        if (!root)
            return;
        sum -= root->val;
        if (sum == 0)
        {
            res.push_back(path);
            ans++;
        }
        path.push_back(root->val);
        dfs(root->left, sum);
        dfs(root->right, sum);
        path.pop_back();
    }
};
int res = 0;
void dfs(TreeNode *root, int sum)
{
    if (!root)
        return;
    sum -= root->val;
    if (sum == 0)
        res++;
    dfs(root->left, sum);
    dfs(root->right, sum);
}
int soso(TreeNode *root, int sum)
{
    if (!root)
        return 0;
    dfs(root, sum);
    soso(root->left, sum);
    soso(root->right, sum);
    return res;
}