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

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node() {}

    Node(int _val)
    {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node *_left, Node *_right)
    {
        val = _val;
        left = _left;
        right = _right;
    }
};
class Solution
{
public:
    vector<TreeNode *> generateTrees(int n)
    {
        if (!n)
            return {};
        return dfs(1, n);
    }
    vector<TreeNode *> dfs(int l, int r)
    {
        if (l > r)
            return {nullptr};
        vector<TreeNode *> res;

        for (int i = l; i < = r; i++)
        {
            auto left = dfs(l, i - 1), right = dfs(i + 1, r);
            for (auto l : left)
                for (auto r : right)
                {
                    auto root = new TreeNode(i);
                    root->left = l, root->right = r;
                    res.push_back(root);
                }
        }
        return res;
    }
};

class Solution
{
public:
    vector<TreeNode *> generateTrees(int n)
    {
        return dfs(1, n);
    }
    vector<TreeNode *> dfs(int l, int r)
    {
        if (l > r)
            return {nullptr};
        vector<TreeNode *> res;
        for (int i = l; i <= r; ++i)
        {
            auto left = dfs(l, i - 1), right = dfs(i + 1, r);
            for (auto l : left)
                for (auto r : right)
                {
                    TreeNode *root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    res.push_back(root);
                }
        }
        return res;
    }
};
vector<TreeNode *> dfs(int l, int r)
{
    if (l > r)
        return {nullptr};
    vector<TreeNode *> res;
    for (int i = l; i <= r; ++i)
    {
        auto left = dfs(l, i - 1), right = dfs(i + 1, r);
        for (auto l : left)
            for (auto r : right)
            {
                TreeNode *root = new TreeNode(i);
                root->left = l;
                root->right = r;
                res.push_back(root);
            }
    }
    return res;
}
