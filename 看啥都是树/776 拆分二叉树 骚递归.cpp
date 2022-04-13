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
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution
{
public:
    int res = INT_MAX;
    TreeNode *pre;
    int minDiffInBST(TreeNode *root)
    {
        dfs(root);
        return res;
    }
    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        dfs(root->left);
        if (pre)
        {
            int tmp = abs(pre->val - root->val);
            res = min(res, tmp);
        }
        else
            pre = root;
        dfs(root->right);
    }
};

class Solution
{
public:
    vector<TreeNode *> res;
    vector<TreeNode *> splitBST(TreeNode *root, int target)
    {
        res.push_back(dfs(root, target));
    }
    TreeNode *dfs(TreeNode *root, int k)
    {
        if (!root)
            return nullptr;
        TreeNode *left = dfs(root->left, k);
        TreeNode *right = dfs(root->right, k);
        if (root->val == k)
        {
            res.push_back(root->left);
            return right ? right : nullptr;
        }
        return root;
    }
};

class Solution
{
public:
    vector<TreeNode *> splitBST(TreeNode *root, int target)
    {
        if (!root)
            return {nullptr, nullptr};
        if (root->val <= target)
        {
            vector<TreeNode *> res = splitBST(root->right, target);
            root->right = res[0];
            res[0] = root;
            return res;
        }
        else
        {
            vector<TreeNode *> res = splitBST(root->left, target);
            root->left = res[1];
            res[1] = root;
            return res;
        }
    }
};
vector<TreeNode *> dfs(TreeNode *root, int k)
{
    if (!root)
        return {nullptr, nullptr};
    if (root->val < k)
    {
        vector<TreeNode *> res = dfs(root->right, k);
        root->right = res[0];
        res[0] = root;
        return res;
    }
    else
    {
        vector<TreeNode *> res = dfs(root->left, k);
        root->left = res[1];
        res[1] = root;
        return res;
    }
}
vector<TreeNode *> dfs(TreeNode *root, int k)
{
    if (!root)
        return {nullptr, nullptr};
    if (root->val > k)
    {
        vector<TreeNode *> res = dfs(root->left, k);
        root->left = res[1];
        res[1] = root;
        return res;
    }
    else
    {
        vector<TreeNode *> res = dfs(root->right, k);
        root->right = res[0];
        res[0] = root;
        return res;
    }
}
vector<TreeNode *> dfs(TreeNode *root, int k)
{
    if (!root)
        return {nullptr, nullptr};
    if (root->val > k)
    {
        vector<TreeNode *> res = dfs(root->left, k);
        root->left = res[1];
        res[1] = root;
        return res;
    }
    else
    {
        vector<TreeNode *> res = dfs(root->right, k);
        root->right = res[0];
        res[0] = root;
        return res;
    }
}
vector<TreeNode *> dfs(TreeNode *root, int k)
{
    if (!root)
        return {nullptr, nullptr};
    if (root->val > k)
    {
        vector<TreeNode *> res = dfs(root->left, k);
        root->left = res[1];
        res[1] = root;
        return res;
    }
    else
    {
        vector<TreeNode *> res = dfs(root->right, k);
        root->right = res[0];
        res[0] = root;
        return res;
    }
}
vector<TreeNode *> dfs(TreeNode *root, int k)
{
    if (!root)
        return {nullptr, nullptr};
    if (root->val > k)
    {
        vector<TreeNode *> res = dfs(root->left, k);
        root->left = res[1];
        res[1] = root;
        return res;
    }
    else
    {
        vector<TreeNode *> res = dfs(root->right, k);
        root->right = res[0];
        res[0] = root;
        return res;
    }
}
vector<TreeNode *> dfs(TreeNode *root, int k)
{
    if (!root)
        return {nullptr, nullptr};
    if (root->val < k)
    {
        vector<TreeNode *> res = dfs(root->right, k);
        root->right = res[0];
        res[0] = root;
        return res;
    }
    else
    {
        vector<TreeNode *> res = dfs(root->left, k);
        root->left = res[1];
        res[1] = root;
        return res;
    }
}
vector<TreeNode *> dfs(TreeNode *root, int k)
{
    if (!root)
        return {nullptr, nullptr};
    if (root->val < k)
    {
        vector<TreeNode *> res = dfs(root->right, k);
        root->right = res[0];
        res[0] = root;
        return res;
    }
    else
    {
        vector<TreeNode *> res = dfs(root->left, k);
        root->left = res[1];
        res[1] = root;
        return res;
    }
}
// 回头硬刷下 看有没有促进理解。。非常牛逼的设计。。
// 如果能够掌握。。那又是多了一个利器。。