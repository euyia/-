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
// public boolean isCompleteTree(TreeNode root) {
//     Queue<TreeNode> q = new LinkedList<>();
//     q.offer(root);
//     boolean reachedEnd = false;
//     while(!q.isEmpty()){
//         TreeNode cur = q.poll();
//         if(reachedEnd && cur != null){
//             return false;
//         }
//         if(cur == null){
//             reachedEnd = true;
//             continue;
//         }
//         q.offer(cur.left);
//         q.offer(cur.right);
//     }
//     return true;
// }

// 作者：dian-dao-de-hu-die
// 链接：https://leetcode-cn.com/problems/check-completeness-of-a-binary-tree/solution/ceng-xu-bian-li-by-dian-dao-de-hu-die-681d/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

// 这个题。。收获了。。判断完全额人茶树的方法。。
// 还有层序遍历 的另外小区别的框架
// 也就是要把null的情况也加入的。。
// 。。。每题 都可以写这种总结。。。很好。。
class Solution
{
public:
    bool isCompleteTree(TreeNode *root)
    {
        if (!root)
            return true;
        queue<TreeNode *> q;
        q.push(root);
        bool flag = false;
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            q.pop();
            if (flag && tmp != nullptr)
                return false;
            if (tmp == nullptr)
            {
                flag = true;
                continue;
            }
            if (tmp->left)
                q.push(tmp->left);
            else
                q.push(nullptr);
            if (tmp->right)
                q.push(tmp->right);
            else
                q.push(nullptr);
        }
        return true;
    }
};

class Solution
{
public:
    bool isCompleteTree(TreeNode *root)
    {
        if (!root)
            return true;
        queue<TreeNode *> q;
        q.push(root);
        int flag = 0;
        while (!q.empty())
        {
            TreeNode *t = q.front();
            if (t && flag)
                return false;
            q.pop();
            if (!t)
                flag = 1;
            else
            {
                q.push(t->left);
                q.push(t->right);
            }
        }
        return true;
    }
};
bool soso(TreeNode *root)
{
    if (!root)
        return true;
    queue<TreeNode *> q;
    q.push(root);
    bool flag = false;
    if (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
bool soso(TreeNode *root)
{
    if (!root)
        return true;
    bool flag = false;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
bool soso(TreeNode *root)
{
    if (!root)
        return true;
    bool flag = false;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
bool soso(TreeNode *root)
{
    if (!root)
        return true;
    bool flag = false;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
// 好题 啊好。。。
bool soso(TreeNode *root)
{
    if (!root)
        return true;
    queue<TreeNode *> q;
    bool flag = false;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
bool soso(TreeNode *root)
{
    if (!root)
        return true;
    queue<TreeNode *> q;
    q.push(root);
    bool flag = false;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
bool soso(TreeNode *root)
{
    bool flag = false;
    if (!root)
        return true;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
bool soso(TreeNode *root)
{
    bool flag = false;
    if (!root)
        return true;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
bool soso(TreeNode *root)
{
    if (!root)
        return true;
    bool flag = false;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}
bool soso(TreeNode *root)
{
    bool flag = false;
    queue<TreeNode *> q;
    if (!root)
        return true;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();
        if (tmp && flag)
            return false;
        if (!tmp)
            flag = true;
        else
        {
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
}