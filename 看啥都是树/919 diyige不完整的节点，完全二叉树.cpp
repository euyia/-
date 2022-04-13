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

class CBTInserter
{
public:
    TreeNode *head;
    queue<TreeNode *> q;
    CBTInserter(TreeNode *root) : head(root)
    {
        q.push(root);
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            if (tmp->left && tmp->right)
            {
                q.pop();
                q.push(tmp->left);
                q.push(tmp->right);
            }
            else
                break;
        }
    }

    int insert(int v)
    {
        TreeNode *parent = q.front();
        if (!parent->left)
            parent->left = new TreeNode(v);
        else
        {
            parent->right = new TreeNode(v);
            q.pop();
            q.push(parent->left);
            q.push(parent->right);
        }
        return parent->val;
    }

    TreeNode *get_root()
    {
        return head;
    }
};
class CBTInserter
{
public:
    TreeNode *head;
    queue<TreeNode *> q;
    CBTInserter(TreeNode *root) : head(root)
    {
        q.push(root);
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            if (tmp->left && tmp->right)
            {
                q.pop();
                q.push(tmp->left);
                q.push(tmp->right);
            }
            else
                break;
        }
    }

    int insert(int v)
    {
        TreeNode *parent = q.front();
        if (!parent->left)
            parent->left = new TreeNode(v);
        else
        {
            parent->right = new TreeNode(v);
            q.pop();
            q.push(parent->left);
            q.push(parent->right);
        }
        return parent->val;
    }

    TreeNode *get_root()
    {
        return head;
    }
};
class soso
{
public:
    TreeNode *head;
    queue<TreeNode *> q;
    soso(TreeNode *root) : head(root)
    {
        q.push(root);
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            if (tmp->left && tmp->right)
            {
                q.pop();
                q.push(tmp->left);
                q.push(tmp->right);
            }
            else
                break;
        }
    };
    int insert(int v)
    {
        TreeNode *parent = q.front();
        if (!parent->left)
            parent->left = new TreeNode(v);
        else
        {
            parent->right = new TreeNode(v);
            q.pop();
            q.push(parent->left);
            q.push(parent->right);
        }
        return parent->val;
    }
    TreeNode *get_root()
    {
        return head;
    }
};
class soso
{
public:
    queue<TreeNode *> q;
    TreeNode *head;
    soso(TreeNode *root) : head(root)
    {
        q.push(root);
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            if (tmp->left && tmp->right)
            {
                q.pop();
                q.push(tmp->left);
                q.push(tmp->right);
            }
            else
                break;
        }
    };
    int insert(int v)
    {
        TreeNode *parent = q.front();
        if (!parent->left)
            parent->left = new TreeNode(v);
        else
        {
            parent->right = new TreeNode(v);
            q.pop();
            q.push(parent->left);
            q.push(parent->right);
        }
        return parent->val;
    }
    TreeNode *get_root()
    {
        return head;
    }
};
class soso
{
public:
    queue<TreeNode *> q;
    TreeNode *head;
    soso(TreeNode *root) : head(root)
    {
        q.push(root);
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            if (tmp->left && tmp->right)
            {
                q.pop();
                q.push(tmp->left);
                q.push(tmp->right);
            }
            else
                break;
        }
    }
    int insert(int v)
    {
        TreeNode *parent = q.front();
        if (!parent->left)
            parent->left = new TreeNode(v);
        else
        {
            parent->right = new TreeNode(v);
            q.pop();
            q.push(parent->left);
            q.push(parent->right);
        }
        return parent->val;
    }
    TreeNode *get_root()
    {
        return head;
    }
};

// 这个可以多刷，很神奇的判断和视角。。是一个非常好的观察角度。。角度就是思路。。
// 一个新的角度 就是一个新的思路。。。
// 。。。so。。多切换视角。。思路无处不在。。
// 直接记录父节点的视角。。有时候非常好用。
// 比如这里 。就是父节点的视角。。然后建图也是父节点的视角。。非常nice。。
// 等下去把那题
queue<TreeNode *> q;
TreeNode *head;
class CBTInserter
{
public:
    CBTInserter(TreeNode *root)
    {
        q.push(root);
        while (!q.empty())
        {
            TreeNode *p = q.front();
            if (p->left && p->right)
            {
                q.pop();
                q.push(p->left);
                q.push(p->right);
            }
            else
                break;
        }
    }

    int insert(int val)
    {
        TreeNode *parent = q.front();
        if (parent->left)
        {

            parent->right = new TreeNode(val);
            q.pop();
            q.push(parent->left);
            q.push(parent->right);
        }
        else
            parent->left = new TreeNode(val);
        return parent->val;
    }

    TreeNode *get_root()
    {
        return head;
    }
};
void build(TreeNode *root)
{
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    p->left = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    p->left = new TreeNode(val);
    return p->val;
}
int isnert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    p->left = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    p->left = new TreeNode(val);
    return p->val;
}
void build(TreeNode *root)
{
    q.push(root);
    TreeNode *p = q.front();
    while (!q.empty())
    {

        if (p->left && p->right)
        {
            q.push(p->left);
            q.push(p->right);
            q.pop();
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    TreeNode *p = q.front();
    while (!q.empty())
    {
        if (p->left && p->right)
        {
            q.push(p->left);
            q.push(p->right);
            q.pop();
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
// 不要太功利化。。然后不要太急躁。。多刷 多投入。。十分熟练 炉火纯青
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {

            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
    {
        break;
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {

            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {

        TreeNode *p = q.front();
        if (p->left && p->right)

        {

            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
            break;
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
void build(TreeNode *root)
{

    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.pop();
            q.push(p->left);
            q.push(p->right);
        }
        else
        {
            break;
        }
    }
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        q.pop();
        q.push(p->left);
        p->right = new TreeNode(val);
        q.push(p->right);
    }
    else
    {
        p->left = new TreeNode(val);
    }
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        q.pop();
        p->right = new TreeNode(val);
        q.push(p->left);
        q.push(p->right);
    }
    else
    {
        p->left = new TreeNode(val);
    }
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        q.pop();
        p->right = new TreeNode(val);
        q.push(p->left);
        q.push(p->right);
    }
    else
    {
        p->left = new TreeNode(val);
    }
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        q.pop();
        p->right = new TreeNode(val);
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->left = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->left = new TreeNode(val);
    return p->val;
}
// 这ide 敲起来真的是舒服。。。
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->left = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->left = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->left = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->right = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->left = new TreeNode(val);
    return p->val;
}
int isnert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->left = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->right = new TreeNode(val);
    return p->val;
}
int insert(int val)
{
    TreeNode *p = q.front();
    if (p->left)
    {
        p->right = new TreeNode(val);
        q.pop();
        q.push(p->left);
        q.push(p->right);
    }
    else
        p->left = new TreeNode(val);
    return p->val;
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.push(p->left);
            q.push(p->right);
            q.pop();
        }
        else
            break;
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.push(p->left);
            q.push(p->right);
            q.pop();
        }
        else
            break;
    }
}
void build(TreeNode *root)
{
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        if (p->left && p->right)
        {
            q.push(p->left);
            q.push(p->right);
            q.pop();
        }
        else
            break;
    }
}
// 好的ide 敲代码就是一种享受。。。。炉火纯青 你就无法被忽略