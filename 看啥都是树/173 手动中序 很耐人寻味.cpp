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
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// 算是手写中序遍历了。。美妙。。。
// 手写非递归的好处 就是能做细节的处理。。
// 这里的next 他就一致能让cur停在我们要访问的下一个中序遍历的下一个节点上。。
// 美妙。。。。。。
class BSTIterator
{
private:
    TreeNode *cur;
    stack<TreeNode *> stk;

public:
    BSTIterator(TreeNode *root) : cur(root) {}

    int next()
    {
        while (cur != nullptr)
        {
            stk.push(cur);
            cur = cur->left;
        }
        cur = stk.top();
        stk.pop();
        // 他pop掉的是左节点。。
        // 在没有访问他的右节点之前 就被pop掉了。也是pop掉的同时去范文的。。
        // 。。。真他妈刺激。。
        int ret = cur->val;
        cur = cur->right;
        return ret;
    }

    bool hasNext()
    {
        return cur != nullptr || !stk.empty();
    }
};
TreeNode *cur;
stack<TreeNode *> s;
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int ret = cur->val;
    cur = cur->right;
    return ret;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int ret = cur->val;
    cur = cur->right;
    return ret;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int inorder()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.top();
    int res = cur->val;
    cur = cur->right;
    return res;
}
// 这个虽然看起来简单。。但是蕴含了非常大的力量  这个框架很好用。
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
// left 走尽头。。然后依靠s去拿right。。
// 这样来实现二维转到一维。。。
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
// left 走到底。。借助一次s 那right。。
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}

int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}

int next()
{
    while (cur)
    {
        s.push(cur);
        cur = cur->left;
    }
    cur = s.top();
    s.pop();
    int res = cur->val;
    cur = cur->right;
    return res;
}
// 就是要遍数要有。。
// 其实就是中序遍历拆分而已。。
// 要刷就去刷完整的那个。。