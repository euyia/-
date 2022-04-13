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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int goodNodes(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        int res = 1;
        while (!q.empty())
        {
            int n = q.size();
            while (n--)
            {
                TreeNode *tmp = q.front();
                q.pop();
                if (tmp->left)
                {
                    q.push(tmp->left);
                    if (tmp->left->val > tmp->val)
                        res++;
                    else
                        tmp->left->val = tmp->val;
                }
                if (tmp->right)
                {
                    q.push(tmp->right);
                    if (tmp->right->val > tmp->val)
                        res++;
                    else
                        tmp->right->val = tmp->val;
                }
            }
        }
        return res;
    }
};
// 上面自己折腾的层序的。。而且还改了val。。。所以。。无论速度。。。很多层面都完败下面这个解法。。
// 他这边是利用一个参数。。巧妙的时刻更新和保存当前位置前缀最大值。。
class Solution
{
private:
    int result;
    void dfs(TreeNode *root, int maxval)
    {
        if (root != nullptr)
        {
            if (root->val >= maxval)
            {
                result++;
            }
            dfs(root->left, max(maxval, root->val));
            dfs(root->right, max(maxval, root->val));
        }
    }

public:
    int goodNodes(TreeNode *root)
    {
        dfs(root, INT_MIN);
        return result;
    }
};

int cnt;
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        ;
    cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        ;
    cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(root->val, maxt));
    dfs(root->right, max(root->val, maxt));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(root->val, maxt));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(maxt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(maxt, root->val));
    dfs(root->right, max(root->val, maxt));
}
void dfs(TreeNode *root, int mzt)
{
    if (!root)
        return;
    if (root->val >= mzt)
        cnt++;
    dfs(root->left, max(mzt, root->val));
    dfs(root->right, max(mzt, root->val));
}
void dfs(TreeNode *root, int maxt)
{
    if (!root)
        return;
    if (root->val >= maxt)
        cnt++;
    dfs(root->left, max(root->val, maxt));
    dfs(root->right, max(maxt, root->val));
}
// 感觉树就那些常见的思路。。要门后序。要么利用val改值。要么层序遍历
// 要么建树。。要么利用翻转。。。
// 这几天可以再回头看下。。巩固下。。不要白刷了。。
