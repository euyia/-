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
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {

            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}
void dfs(TreeNode *root, string k, vector<string> &res)
{
    if (root)
    {
        k += to_string(root->val);
        if (!root->left && !root->right)
        {
            res.push_back(k);
            return;
        }
        else
        {
            k += "->";
            dfs(root->left, k, res);
            dfs(root->right, k, res);
        }
    }
}

class Solution
{
public:
    int getMinimumDifference(TreeNode *root)
    {
        dfs(root);
        return res;
    }
    int res = INT_MAX;
    TreeNode *pre;
    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        dfs(root->left);
        if (pre)
            res = min(res, abs(pre->val - root->val));
        pre = root;
        dfs(root->right);
    }
};

class Solution
{
public:
    vector<int> boundaryOfBinaryTree(TreeNode *root)
    {
        int h = getheight(root);
        int d = h;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            h--;
            int n = q.size();
            if (h != 0)
                a.push_back(q.front()->val);
            if (h != 0 && h != d - 1)
                b.push_back(q.back()->val);
            while (n--)
            {
                TreeNode *tmp = q.front();
                if (h == 0)
                    c.push_back(tmp->val);
                q.pop();
                if (tmp->left)
                    q.push(tmp->left);
                if (tmp->right)
                    q.push(tmp->right);
            }
        }
        reverse(b.begin(), b.end());
        for (int cc : c)
            a.push_back(cc);
        for (int bb : c)
            a.push_back(bb);
        return a;
    }
    int getheight(TreeNode *root)
    {
        if (root)
            return 0;
        return max(getheight(root->left), getheight(root->right)) + 1;
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
    vector<int> res;
    vector<int> postorder(Node *root)
    {
        dfs(root);
        return res;
    }
    void dfs(Node *root)
    {
        if (!root)
            return;
        for (Node *r : root->children)
            dfs(r);
        res.push_back(root->val);
    }
};

class Solution
{
public:
    string tree2str(TreeNode *root)
    {
        if (!root)
            return "()";
        return to_string(root->val) + "(" + tree2str(root->left) + ")" + "(" + tree2str(root->right) + ")";
    }
};