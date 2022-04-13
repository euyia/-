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

class Solution
{
public:
    TreeNode *parent;
    int longestZigZag(TreeNode *root, TreeNode *parent)
    {
        mp[root] = -1;
        // 先序遍历，带父节点的，用一个标记的变量，如果父节点左，这个标记变量就怎么变然后比如如果传下来是1那么就让n等于加一，m等于重置，如果父节点传下来的是0就相反
        dfs(root);
        check(root, nullptr, 0, 0);
        return maxt;
    }
    unordered_map<TreeNode *, int> mp;
    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        if (root->left)
        {
            mp[root->left] = 0;
            dfs(root->left);
        }
        if (root->right)
        {
            mp[root->right] = 1;
            dfs(root->right);
        }
    }
    int maxt;
    void check(TreeNode *root, TreeNode *parent, int flag, int count)
    {
        if (!root)
            return;
        if (parent)
            if (mp[root] == -1)
            {
                count = 1;
            }
            else
            {
                if (flag != mp[parent])
                {
                    count++;
                    maxt = max(count, maxt);
                }
                else
                    count = 1;
            }

        check(root->left, root, 0, count);
        check(root->right, root, 1, count);
    }
};

class Solution
{
public:
    int longestZigZag(TreeNode *root)
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, 1);
        return maxt;
    }
    int maxt;
    void dfs(TreeNode *root, int flag, int len)
    {
        if (!root)
            return;
        maxt = max(maxt, len);
        if (flag)
        {
            dfs(root->left, 0, len + 1);
            dfs(root->right, 1, 1);
        }
        else
        {
            dfs(root->left, 0, 1);
            dfs(root->right, 1, len + 1);
        }
    }
};
// 他这个没有用parent 。。但是其实用到了那个思想。。
// 就是前序遍历的统计方式。。
// 。。。。真是题目的变化真的多。。
// 这个解法 是用先序遍历 携带parent的一个变体。。
int maxt;
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->right, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
void dfs(TreeNode *root, int flag, int len)
{
    if (!root)
        return;
    maxt = max(maxt, len);
    if (flag)
    {
        dfs(root->left, 0, len + 1);
        dfs(root->right, 1, 1);
    }
    else
    {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, len + 1);
    }
}
