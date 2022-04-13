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

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node() {}

    Node(int _val)
    {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node *_left, Node *_right)
    {
        val = _val;
        left = _left;
        right = _right;
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
    vector<vector<int>> graph;
    int deleteTreeNodes(int n, vector<int> &parent, vector<int> &value)
    {
        graph.resize(n);
        for (int i = 1; i < n; ++i)
            graph[parent[i]].push_back(i);
        // 这部看似简单。是整道题最核心的。一个建图。。
        return dfs(0, value)[1];
    }
    vector<int> dfs(int root, vector<int> &value)
    {
        int res = value[root];
        int ans = 1;
        for (int i = 0; i < graph[root].size(); ++i)
        {
            vector<int> k = dfs(graph[root][i], value);
            res += k[0];
            ans += k[1];
        }
        if (res != 0)
            return vector<int>{res, ans};
        else
            return vector<int>{0, 0};
    }
};

class Solution
{
public:
    int maxProduct(TreeNode *root)
    {
        dfs(root);
        k = val / 2;
        maxt = val - res;
        return (maxt * res) % (10 ^ 9 + 7);
    }
    int val, k, res, maxt;
    bool flag;
    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        val += root->val;
        dfs(root->left);
        dfs(root->right);
    }
    int dfs2(TreeNode *root)
    {

        if (!root)
            return 0;

        int left = dfs2(root->left);
        int right = dfs2(root->right);
        if (flag)
            return;
        res = root->val + left + right;
        if (res > k)
        {
            flag = true;
            return 0;
        }
        return res;
    }
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
class Solution
{
public:
    vector<long> sums;
    static const int mod = 1e9 + 7;
    int maxProduct(TreeNode *root)
    {
        postOrder(root);
        long res = -1;
        for (int i = 0; i < sums.size() - 1; ++i)
        {
            // 取最大值时不能取模，应该用long型存结果
            res = max(res, sums[i] * (sums.back() - sums[i]));
            // 就这行。。非常的nice。。可以说是精髓。。。
            // 以前没见过这样的循环方式。。
        }
        return (int)(res % mod);
    }

    long postOrder(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        long res = root->val + postOrder(root->left) + postOrder(root->right);
        sums.push_back(res);
        return res;
    }
};

// 他这个每次减一个点然后求和。的数组的运用方式。。
// 这个迭代方式。。非常的棒。。比我手写的那个好多了。。
// 这个有兴趣也可以刷下巩固下记忆。。以后可以随便取用。
// 这个属于小套路。。

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
const int mod = 1e9 + 7;

class Solution
{
public:
    unsigned long long res = 0;
    unsigned long long sum = 0;
    int maxProduct(TreeNode *root)
    {
        sum = dfs1(root);
        dfs2(root);
        return (int)(res % mod);
    }

    int dfs1(TreeNode *root)
    {
        if (!root)
            return 0;
        return root->val + dfs1(root->left) + dfs1(root->right);
    }

    int dfs2(TreeNode *root)
    {
        if (!root)
            return 0;
        unsigned long long t = root->val + dfs2(root->left) + dfs2(root->right);
        res = max(res, t * (sum - t));
        return t;
    }
};
// 为什么是后序遍历？？？他能够有效的把树用一条边分割。。前序中序都不行。。是不规则的。
// 你前序想下就知道了。他一直往下走。。右边的节点都没有顾及到的。。
// 130年都没弄清楚 就一直在用了。。it work；。
// 一点是这个mod的声明。。还有就是前缀和的的使用。还有返回时候转int
// 这些细节都是很牛逼的思维。。
// 特别是前缀和的应用。。
int mod = 1e9 + 7;
long long res;
long long sum;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return t;
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return t;
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return t;
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return t;
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return t;
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->right) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->right) + dfs(root->left);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->right) + dfs(root->left);
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->right) + dfs(root->left);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
// 这题的精髓都在这里。
// mod 然后返回取余的方式。后序遍历的特点。前缀和的巧妙运用。。就在这几行代码里。。
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->right) + dfs(root->left);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->right) + dfs(root->left);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->right) + dfs(root->left);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
int mod = 1e9 + 7;
int dfs(TreeNode *root)
{
    if (!root)
        return 0;
    long long t = root->val + dfs(root->left) + dfs(root->right);
    res = max(res, t * (sum - t));
    return (int)(t % mod);
}
// 都是小套路的组合而已。。就变成新题了。
// 一定要多刷经典题。然后以不变应万变。。