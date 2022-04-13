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
    vector<int> index;
    TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
    {
        int n = preorder.size();
        index.resize(n);
        for (int i = 0; i < n; ++i)
            index[postorder[i]] = i;
        dfs(preorder, postorder, 0, n - 1, 0, n - 1);
    }
    TreeNode *dfs(vector<int> &pre, vector<int> &last, int pleft, int pright, int lleft, int lright)
    {

        if (pright - pleft == 3)
        {
            TreeNode *root = new TreeNode(pre[pleft]);
            root->left = new TreeNode(pre[pleft + 1]);
            root->right = new TreeNode(pre[pright]);
            return root;
        }
        int iroot = index[pre[pleft + 1]];
        int leftsize = iroot - lleft + 1;
        TreeNode *root = new TreeNode(pre[pleft]);
        root->left = dfs(pre, last, pleft + 1, pleft + leftsize, lleft, iroot);
        root->right = dfs(pre, last, pleft + leftsize + 1, pright, iroot + 1, lright - 1);
        return root;
    }
};
// 二叉树 找和为k的。。
// 这是正常解。。下面是用非递归实现中序遍历。。也就是自己写栈。。
// 然后用前后双指针。。。
// 还是有学习的的地方的。。1是手写非递归遍历。。。。就这个就够学了。
// 下面这个是自己写的。
class Solution
{
public:
    unordered_map<int, int> mp;
    bool flag;
    bool findTarget(TreeNode *root, int k)
    {
        flag = false;
        findTarget2(root, k);
        return flag;
    }

    void findTarget2(TreeNode *root, int k)
    {
        if (mp[root->val] == 1)
        {
            flag = true;
            return;
        }
        mp[k - root->val] = 1;
        findTarget2(root->left, k);
        findTarget2(root->right, k);
    }
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
    bool findTarget(TreeNode *root, int k)
    {
        if (root == nullptr)
            return false;
        stack<TreeNode *> s;
        vector<int> a;
        while (!s.empty() || root != nullptr)
        {
            while (root != nullptr)
            {
                s.emplace(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            a.emplace_back(root->val);
            root = root->right;
        }
        int l = 0, r = a.size() - 1;
        while (l < r)
        {
            if (a[l] + a[r] == k)
                return true;
            if (a[l] + a[r] > k)
                --r;
            else
                ++l;
        }
        return false;
    }
};