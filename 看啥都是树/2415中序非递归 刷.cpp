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
TreeNode *sufficientSubset(TreeNode *root, int limit)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    //到根结点了
    if (root->left == root->right)
    {
        if (root->val < limit)
        {
            return nullptr;
        }
        return root;
    }
    root->left = sufficientSubset(root->left, limit - root->val);
    root->right = sufficientSubset(root->right, limit - root->val);
    //左右子树都为空，意味着这个子树上没有被保留的路径，那么这个结点也没有保留的必要了
    if (root->left == nullptr && root->right == nullptr)
    {
        return nullptr;
    }
    return root;
}

class Solution
{
public:
    vector<int> closestKValues(TreeNode *root, double target, int k)
    {
        vector<int> res;
        dfs(root, target, k);
        while (!q.empty())
        {
            res.push_back(q.top().second);
            q.pop();
        }
        return res;
    }
    priority_queue<pair<double, int>> q;
    unordered_map<double, int> mp;
    void add(double val, int b, int k)
    {
        q.push({val, b});
        if (q.size() > k)
            q.pop();
    }
    void dfs(TreeNode *root, double a, int k)
    {
        if (!root)
            return;
        double b = abs(a - root->val);
        add(b, root->val, k);

        dfs(root->left, a, k);
        dfs(root->right, a, k);
    }
};

class KthLargest
{

public:
    priority_queue<int, vector<int>, greater<int>> q;
    int k;
    KthLargest(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }

    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

class Solution
{
public:
    bool flag = true;
    TreeNode *pre;
    bool isValidBST(TreeNode *root)
    {
        if (!root)
            return true;
        isValidBST(root->left);
        if (pre && pre->val > root->val)
            flag = false;
        pre = root;
        isValidBST(root->right);
        return flag;
    }
};
TreeNode *pre;
bool dfs(TreeNode *root)
{
    stack<TreeNode *> s;
    while (root || !s.empty())
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            if (pre && pre->val >= root->val)
                return false;
            s.pop();
            pre = root;
            root = root->right;
        }
    }
    return true;
}
void dfss(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (root || !s.empty())
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            if (pre && pre->val >= root->val)
                return;
            pre = root;
            root = root->right;
        }
    }
    return;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (root || !s.empty())
    {
        while (root)
        {

            s.push(root);
            root = root->left;
        }
    }
    if (!s.empty())
    {
        root = s.top();
        s.pop();
        if (pre && pre->val >= root->val)
            return false;
        pre = root;
        root = root->right;
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (root || !s.empty())
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
    }
    if (!s.empty())
    {
        root = s.top();
        s.pop();
        if (pre && pre->val >= root->val)
            return false;
        pre = root;
        root = root->right;
    }
    return true;
}
// 判断是否为二叉搜索树的中序写法 非递归。。
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }

        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
// 都到最后是哪里。。右边的最后一个节点。？
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
// 1 输出的量要大。。。。然后才是品质上的追求。
// 就像跑跑 你一定是跑的多。然后才去追求成绩。
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre = nullptr;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre = nullptr;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre = nullptr;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre = nullptr;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre = nullptr;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre = nullptr;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}
bool dfs(TreeNode *root)
{
    TreeNode *pre = nullptr;
    stack<TreeNode *> s;
    while (!s.empty() || root)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
        if (!s.empty())
        {
            root = s.top();
            s.pop();
            if (pre && pre->val >= root->val)
                return false;
            pre = root;
            root = root->right;
        }
    }
    return true;
}