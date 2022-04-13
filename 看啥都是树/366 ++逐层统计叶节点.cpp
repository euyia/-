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
// 这个解法。。牛死了。。
// 他发现了一个规律。。
//同一个层数在同一个数组里面。。
// 而且他这里。。把空节点定义为-1
// 这样和数组下标吻合。
class Solution
{
public:
    vector<vector<int>> findLeaves(TreeNode *root)
    {
        dfs(root);
        return res;
    }
    vector<vector<int>> res;
    int dfs(TreeNode *root)
    {
        if (!root)
            return -1;
        int left = dfs(root->left);
        int right = dfs(root->right);
        int sum = max(left, right) + 1;
        if (sum > res.size())
            res.push_back({});
        res[sum].push_back(root->val);
        return sum;
    }
};
vector<vector<int>> res;
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
vector<vector<int>> res;
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
vector<vector<int>> res;
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->right);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
int dfs(TreeNode *root)
{
    if (!root)
        return -1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur = max(left, right) + 1;
    if (cur > res.size())
        res.push_back({});
    res[cur].push_back(root->val);
    return cur;
}
// 这里有些细节没想透彻。
// 就是为什么他这里遍历的顺序刚好能实现题目要求的 从左到右 从外到内的放到数组。
// 从外到内好理解。因为后序遍历。所以肯定是逐渐的+1 。。数组下标也是逐渐+1.
// 那为啥都是从做到又呢。