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
// 这个典型的思路。。应该要会才是
// 然后这里。。重复判断为空。。也是有点费劲。。递归里面不是判断了吗

class Solution
{
public:
    bool checkSubTree(TreeNode *t1, TreeNode *t2)

    {
        if (!t1 && !t2)
            return true;
        if (!t1 || !t2)
            return false;
        return dfs(t1, t2) || checkSubTree(t1->left, t2) || checkSubTree(t1->right, t2);
    }
    bool dfs(TreeNode *a, TreeNode *b)
    {
        if (!a && !b)
            return true;
        if (!a || !b)
            return false;
        return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
    }
};