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

class BSTIterator
{
public:
    stack<TreeNode *> s;
    TreeNode *cur;
    TreeNode *pre;
    stack<TreeNode *> s2;
    BSTIterator(TreeNode *root) : cur(root)
    {
    }

    bool hasNext()
    {
        return cur || !s.empty();
    }

    int next()
    {
        while (cur)
        {
            s.push(cur);
            cur = cur->left;
        }
        cur = s.top();
        int res = cur->val;
        s.pop();
        pre = cur;
        cur = cur->right;
        return res;
    }

    bool hasPrev()
    {
        return pre;
    }

    int prev()
    {
        while (cur)
        {
            s2.push(cur);
            cur = cur->right;
        }
        cur = s.top();
        int res = cur->val;
        s2.pop();
        pre = cur;
        cur = cur->left;
        return res;
    }
};

void dfs(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root)
        return;
    if (root == p || root == q)
        cnt++;
    dfs(root->right, p, q);
    dfs(root->left, p, q);
}

TreeNode *dfs2(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root || root == p || root == q)
        return root;
    TreeNode *l = dfs2(root->left, p, q);
    TreeNode *r = dfs2(root->right, p, q);
    if (!l)
        return r;
    if (!r)
        return l;
    return root;
}
// 也属于套路 了。
// 树坐久了 。。都忘记有vector 以前stack 哈希表
// 这些容器了。。
// 有时候可以扩展思路的 只要能实现 都是可以的。。那些都是你的武器。。只是最近不想用而已。
class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        int h = 0;
        while (!q.empty())
        {
            int n = q.size();
            while (n--)
            {
                TreeNode *tmp = q.front();
                q.pop();
                if (h % 2 == 0 && n != 0)
                {
                    if (tmp->val >= q.front()->val)
                        return false;
                }
                else if (h % 2 == 0 && n != 0)
                {
                    if (tmp->val <= q.front()->val)
                        return false;
                }
                if (tmp->left)
                    q.push(tmp->left);
                if (tmp->right)
                    q.push(tmp->right);
            }
            h++;
        }
        return true;
    }
};
// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};
class Solution 
{
public:
    Node* findRoot(vector<Node*> tree) 
    {
        //////// 看一个Node有没有父亲
        unordered_set<Node *> has_parent;
        for (auto x: tree)
            for (auto y: x->children)
                has_parent.insert(y);
        for (auto x: tree)
            if (has_parent.find(x) == has_parent.end())
                return x;
        
        return NULL;    //仅仅为了编译通过
    }
};
//  没有好好挖掘题目的信息。

