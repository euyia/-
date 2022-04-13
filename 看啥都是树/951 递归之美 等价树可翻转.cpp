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
    bool flipEquiv(TreeNode *a, TreeNode *b)
    {
        if (!a && !b)
            return true;
        if (!a || !b || a->val != b->val)
            return false;
        return (flipEquiv(a->left, b->left) && flipEquiv(a->right, b->right)) || (flipEquiv(a->right, b->left) && flipEquiv(a->left, b->right));
    }
};
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val || b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
// 递归其实就是两个镜子互相照。。
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || b->val != a->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return true;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return true;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return true;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) &&
                                                                   dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
// 不知不觉 就200 行了。。这种感觉真好。。。
// 就这么简单的动作。。够用了。。大道至简。。就是刷量。。
// 量一定要足。。。。一定什么叫一定。。
// 然后先看会儿书。、做几道题吧。。把树的题目清了。。美滋滋。。
// 下午还是刷为主。把之前的好的题型刷巩固下。不然都要忘了。
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->right) && dfs(a->right, b->left) || dfs(a->left, b->left) && dfs(a->right, b->right);
}
// 1先处理当前节点情况。。分四类。。非常的简洁。。学到了
// 递归的甩给孩子。两种情况都可以算TRUE；就把可以的两种都写出来。就这么简单递归甩出去。
// 所以就用||
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    return dfs(a->left, b->left) && dfs(a->right, b->right) || dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;

    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return true;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
}
// 这两个语句。非常巧妙 的覆盖了四种情况。。有效又极度简洁。。

bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
    if (!a && !b)
        return true;
    if (!a || !b || a->val != b->val)
        return false;
}
// 巧妙的概括了  两者都为空  其中一个为空 两个都不为空的四种情况。。
// 这个概括方式。。非常的棒。。
// 其实总共有五种情况 最后一种就是ab 都有值且相等。
// 刷的过程中提速。。。。。。
 bool dfs(TreeNode*a,TreeNode*b)
 {
     if(!a&&!b)
     return true;
     if(!a||!b||a->val!=b->val)
     return false;
     if(!a&&!b)
     return true;
     if(!a||!b||a->val!=b->val)
     return false;
     if(!a&&!b)
     return true;
     if(!a||!b||a->val!=b->val)
     return false;
     if(!a&&!b)
     return true;
     if(!a||!b||a->val!=b->val)
     return false;
 }