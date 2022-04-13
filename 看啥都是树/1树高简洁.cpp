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
class CBTInserter
{
private:
    queue<TreeNode *> que;
    TreeNode *root;

public:
    CBTInserter(TreeNode *root)
    {
        this->root = root;
        que.push(root);
        while (que.front()->left != nullptr && que.front()->right != nullptr)
        {
            que.push(que.front()->left);
            que.push(que.front()->right);
            que.pop();
        }
    }

    int insert(int v)
    {
        TreeNode *node = new TreeNode(v);
        TreeNode *fa = que.front();
        if (fa->left == nullptr)
        {
            fa->left = node;
        }
        else
        {
            fa->right = node;
            que.push(fa->left);
            que.push(fa->right);
            que.pop();
        }
        return fa->val;
    }

    TreeNode *get_root()
    {
        return this->root;
    }
};

class Solution
{
public:
    bool flag = true;
    bool isBalanced(TreeNode *root)
    {
        getheight(root);
        return flag;
    }

    int getheight(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = getheight(root->left);
        int r = getheight(root->right);
        if (abs(l - r) == 2)
            flag = false;
        int maxh = l > r ? l : r;
        return maxh + 1;
    }
};
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)

{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}
int get(TreeNode *root)
{
    if (!root)
        return 0;
    return max(get(root->left), get(root->right)) + 1;
}