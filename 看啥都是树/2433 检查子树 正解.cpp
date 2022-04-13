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
// 正解在下面。。
class Solution
{
public:
    bool checkSubTree(TreeNode *t1, TreeNode *t2)
    {
        dfs(t1);
        string k = dfs2(t2);
        if (mp.count(k))
            return true;
        return false;
    }
    unordered_map<string, int> mp;
    string dfs(TreeNode *root)
    {
        if (!root)
            return "";
        string k = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
        mp[k]++;
        return k;
    }
    string dfs2(TreeNode *root)
    {
        if (!root)
            return "";
        string k = to_string(root->val) + "," + dfs2(root->left) + "," + dfs2(root->right);
        return k;
    }
};
// 这个才是这道题的正解。
// 之前是用的
class Solution
{
public:
    bool checkSubTree(TreeNode *t1, TreeNode *t2)
    {
        if (t1 == NULL && t2 == NULL)
            return true;
        if (t1 == NULL ^ t2 == NULL)
            return false;
        if (t1->val != t2->val)
        {
            return checkSubTree(t1->left, t2) || checkSubTree(t1->right, t2);
        }
        else
        {
            return checkSubTree(t1->left, t2->left) && checkSubTree(t1->right, t2->right);
        }
    }
};
bool checkSubTree(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return true;
    if (!a || !b)
        return false;
    if (a->val != b->val)
        return checkSubTree(a->left, b) || checkSubTree(a->right, b);
    else
        return checkSubTree(a->left, b->left) && checkSubTree(a->right, b->right);
}

class Solution
{
public:
    bool isSubPath(ListNode *head, TreeNode *root)
    {
        if (!head)
            return true;
        if (!root)
            return false;
        if (head->val != root->val)
            return isSubPath(head, root->left) || isSubPath(head, root->right);
        else
            return isSubPath(head->next, root->left) || isSubPath(head->next, root->right);
    }
};
// 和链表的对比 不知道为啥不过了。
// 那只能老实的写每个个节点的递归了。。
