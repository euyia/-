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

// 这题很牛逼的。。1 把节点的val拿来用了。。以前都没动过他。。用他来记录非常的
// 树节点的val 是非常灵活的一直支撑点。。
// 然后就是数值缩小
// 这题思维开拓性非常大。。。非常值得刷。。。
class Solution
{
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        // 保存最大的宽度
        int res = 0;

        // 队列用于广度优先遍历
        queue<TreeNode *> q;

        // 对于根节点的编号为0
        root->val = 0;
        q.push(root);

        while (!q.empty())
        {
            // 基于目前队列头和尾获得当前层的宽度
            res = max(res, q.back()->val - q.front()->val + 1);

            // 编号缩小的差值
            int offset = q.front()->val;

            // 遍历完当前层
            int n = q.size();
            for (int i = 0; i < n; ++i)
            {
                TreeNode *curr = q.front();
                q.pop();
                // 缩小数值
                curr->val -= offset;

                if (curr->left)
                {
                    // 转换为对应的编号
                    curr->left->val = curr->val * 2;
                    q.push(curr->left);
                }
                if (curr->right)
                {
                    // 转换为对应的编号
                    curr->right->val = curr->val * 2 + 1;
                    q.push(curr->right);
                }
            }
        }

        return res;
    }
};
int soso(TreeNode *root)
{
    if (!root)
        return 0;
    queue<TreeNode *> q;
    q.push(root);
    root->val = 0;
    int res = 0;
    while (!q.empty())
    {
        int n = q.size();
        res = max(res, q.back()->val - q.front()->val + 1);
        int cutoff = q.front()->val;
        while (n--)
        {
            TreeNode *tmp = q.front();
            q.pop();
            tmp->val -= cutoff;
            if (tmp->left)
            {
                q.push(tmp->left);
                tmp->left->val = 2 * tmp->val;
            }
            if (tmp->right)
            {
                q.push(tmp->right);
                tmp->right->val = 2 * tmp->val + 1;
            }
        }
    }
    return res;
}
int soso(TreeNode *root)
{
    if (!root)
        return 0;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    int res = 0;
    while (!q.empty())
    {
        int n = q.size();
        res = max(res, q.back().second - q.front().second + 1);
        int cutoff = q.front().first->val;
        while (n--)
        {
            TreeNode *tmp = q.front().first;
            q.pop();

            if (tmp->left)
                q.push({tmp->left, 2 * (tmp->val - cutoff)});
            if (tmp->right)
                q.push({tmp->right, 2 * (tmp->val - cutoff) + 1});
        }
    }
    return res;
}
int widthOfBinaryTree(TreeNode *root)
{
    queue<pair<TreeNode *, int>> q;
    int res = 0;
    if (!root)
        return res;
    q.push({root, 0});
    while (!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        res = max(res, q.back().second - tmp.second + 1);
        int offset = tmp.first->val;
        if (tmp.first->left)
        {
            q.push({tmp.first->left, 2 * (tmp.first->val - offset)});
        }
        if (tmp.first->right)
        {
            q.push({tmp.first->right, 2 * (tmp.first->val - offset) + 1});
        }
    }
    return res;
}
int widthOfBinaryTree(TreeNode *root)
{
    if (!root)
        return 0;
    int res = 0;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        int n = q.size();
        res = max(res, q.back().second - q.front().second + 1);
        int offset = q.front().first->val;
        while (n--)
        {
            TreeNode *tmp = q.front().first;
            if (tmp->left)
                q.push({tmp->left, 2 * (tmp->val - offset)});
            if (tmp->right)
                q.push({tmp->right, 2 * (tmp->val - offset) + 1});
        }
    }
    return res;
}
// 这边这样还不行。。芭比Q了啊。。
// 目前自能改val。。才能跑的下来。。
// 回头在看吧。。。。