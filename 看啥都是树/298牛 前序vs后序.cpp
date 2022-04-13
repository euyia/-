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
// 有些题目刚开始看可能没思路 。过一阵子可能就有了。
// 所以那些没解的题目 都可以再看看。\
// 前序 后序 两种解法。。。
// 前序 牛在parent
// 后序牛在一个变量解决分类问题。。
class Solution
{
public:
    int longestConsecutive(TreeNode *root)
    {
        dfs(root);
        return res;
    }
    int res;
    int dfs(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        int cur_len = 1;
        if (root->left && root->val + 1 == root->left->val)
            cur_len = max(cur_len, left + 1);
        if (root->right && root->val + 1 == root->right->val)
            cur_len = max(cur_len, right + 1);
        res = max(res, cur_len);
        return cur_len;
    }
};
int res;
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    else
        cur_len = 1;
    res = max(res, cur_len);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *root, TreeNode *parent, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *root, TreeNode *parent, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *root, TreeNode *parent, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root->left, root, cur_len);
    dfs(root->right, root, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(res, cur_len);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(res, cur_len);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(cur_len, res);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(res, cur_len);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(res, cur_len);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(res, cur_len);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
void dfs(TreeNode *parent, TreeNode *root, int parent_len)
{
    if (!root)
        return;
    int cur_len = 1;
    if (parent && parent->val + 1 == root->val)
        cur_len = parent_len + 1;
    res = max(res, cur_len);
    dfs(root, root->left, cur_len);
    dfs(root, root->right, cur_len);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(left + 1, cur_len);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(right + 1, cur_len);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->right->val == root->val + 1)
        cur_len = max(cur_len, right + 1);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->right->val == root->val + 1)
        cur_len = max(cur_len, right + 1);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(res, cur_len);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->right->val == root->val + 1)
        cur_len = max(cur_len, right + 1);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(res, cur_len);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(res, cur_len);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(left + 1, cur_len);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(right + 1, cur_len);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(left + 1, cur_len);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(right + 1, cur_len);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->left->val == root->val + 1)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->right->val == root->val + 1)
        cur_len = max(cur_len, right + 1);
    res = max(cur_len, res);
    return cur_len;
}
// 刷题的时候要体验 。。他这个算法 美妙的那些点。。刷多了就吸收了。。
// 比如这里后序遍历的cur_len 就很秒
// 前序遍历的parent 就很秒。。。就是解决了一些我之前解决不了的。。他这里出现的
// 方法。或者说是新的思路。。
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int cur_len = 1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(res, cur_len);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int cur_len = 1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val + 1)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->right->val == root->val + 1)
        cur_len = max(cur_len, right + 1);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int cur_len = 1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val + 1)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->right->val == root->val + 1)
        cur_len = max(cur_len, left + 1);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int cur_len = 1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->left->val == root->val + 1)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->right->val == root->val + 1)
        cur_len = max(cur_len, right + 1);
    res = max(cur_len, res);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(res, cur_len);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(res, cur_len);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int cur_len = 1;
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    if (root->right && root->right->val == root->val + 1)
        cur_len = max(cur_len, left + 1);
    res = max(res, cur_len);
    return cur_len;
}

void dfs(TreeNode *root, TreeNode *p, int len)
{
    if (!root)
        return;
    int cur = 1;
    if (p && p->val + 1 == root->val)
        cur = len + 1;
    res = max(res, cur);
    dfs(root->left, root, cur);
    dfs(root->right, root, cur);
}
void dfs(TreeNode *root, TreeNode *p, int len)
{
    if (!root)
        return;
    int cur = 1;
    if (p && p->val + 1 == root->val)
        cur = len + 1;
    res = max(res, cur);
    dfs(root->left, root, cur);
    dfs(root->right, root, cur);
}
void dfs(TreeNode *root, TreeNode *p, int len)
{
    if (!root)
        return;
    int cur = 1;
    if (p && p->val + 1 == root->val)
        cur = len + 1;
    res = max(res, cur);
    dfs(root->left, root, cur);
    dfs(root->right, root, cur);
}
void dfs(TreeNode *root, TreeNode *p, int len)
{
    if (!root)
        return;
    int cur = 1;
    if (p && p->val + 1 == root->val)
        cur = len + 1;
    res = max(res, cur);
    dfs(root->left, root, cur);
    dfs(root->right, root, cur);
}
void dfs(TreeNode *root, TreeNode *p, int len)
{
    if (!root)
        return;
    int cur = 1;
    if (p && p->val + 1 == root->val)
        cur = len + 1;
    res = max(res, cur);
    dfs(root->left, root, cur);
    dfs(root->right, root, cur);
}
void dfs(TreeNode *root, TreeNode *p, int len)
{
    if (!root)

        return;
    int cur = 1;
    if (p && p->val + 1 == root->val)
        cur = len + 1;
    res = max(res, cur);
    dfs(root->left, root, cur);
    dfs(root->right, root, cur);
}
void dfs(TreeNode *root, TreeNode *p, int len)
{
    if (!root)
        return;
    int cur = 1;
    if (p && p->val + 1 == root->val)
        cur = len + 1;
    res = max(res, cur);
    dfs(root->left, root, cur);
    dfs(root->right, root, cur);
}
void dfs(TreeNode *root, TreeNode *p, int len)
{
    if (!root)
        return;
    int cur = 1;
    if (p && p->val + 1 == root->val)
        cur = len + 1;
    res = max(res, cur);
    dfs(root->left, root, cur);
    dfs(root->right, root, cur);
}
// 加速 加速 加速
int maxt;
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
// 进化版。。这个。。之前还要对maxt进行分类。。然后。。还要在每个里面重新声明。。
// 其实都不用。。
// 这个写法 以前觉得很牛逼的。。现在回头回头看 。。就很自然。。
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(res, len);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(res, len);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(res, len);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(res, len);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(res, len);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
void dfs(TreeNode *root, TreeNode *parent, int len)
{
    if (!root)
        return;
    if (parent && parent->val + 1 == root->val)
        len += 1;
    else
        len = 1;
    res = max(len, res);
    dfs(root->left, root, len);
    dfs(root->right, root, len);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int len = 1;
    if (root->left && root->left->val + 1 == root->val)
        len = left + 1;
    if (root->right && root->right->val + 1 == root->val)
        len = max(len, right + 1);
    maxt = max(maxt, len);
    return len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int cur_len = 1;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if (root->left && root->val + 1 == root->left->val)
        cur_len = max(cur_len, left + 1);
    // 第一轮可以省去赛选。
    if (root->right && root->val + 1 == root->right->val)
        cur_len = max(cur_len, right + 1);
    res = max(res, cur_len);
    return cur_len;
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    int len = 1;
    if (root->left && root->left->val + 1 == root->val)
        len = left + 1;
    if (root->right && root->right->val + 1 == root->val)
        len = max(len, right + 1);
    maxt = max(maxt, len);
    return len;
}
