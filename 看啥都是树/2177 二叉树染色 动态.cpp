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
// 动态规划的题。。
class Solution
{
    vector<int> dfs(TreeNode *root, int k)
    {
        vector<int> f(k + 1, 0);
        if (!root)
            return f;
        auto l = dfs(root->left, k);
        auto r = dfs(root->right, k);
        f[0] = *max_element(l.begin(), l.end()) + *max_element(r.begin(), r.end());
        for (int i = 1; i <= k; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                f[i] = max(f[i], root->val + l[j] + r[i - j - 1]);
            }
        }
        return f;
    }

public:
    int maxValue(TreeNode *root, int k)
    {
        auto f = dfs(root, k);
        return *max_element(f.begin(), f.end());
    }
};
