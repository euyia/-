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
    bool isSubPath(ListNode *head, TreeNode *root)
    {
        if (!root)
            return false;
        // 核心是这里。。这里不能像下面一样写那些判断。。但是为什么呢。。
        // 而且这个root的判断不能没有。。。
        // 为什么呢。
        return dfs(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
    bool dfs(ListNode *head, TreeNode *root)
    {
        if (!head && !root)
            return true;
        if (!head)
            return true;
        if (!root || head->val != root->val)
            return false;
        return dfs(head->next, root->left) || dfs(head->next, root->right);
    }
};