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
// 这题就由于sum=0
// 的情况。。就不用直接用后序遍历。。而是要用哈希统计起来。
class Solution
{
    unordered_map<int, int> mp;

public:
    bool checkEqualTree(TreeNode *root)
    {
        int sum = dfs(root);
        if (sum == 0)
            return mp[0] > 1;
        return mp.count(sum / 2) && (sum % 2 == 0);
    }
    int dfs(TreeNode *root)
    {
        if (!root)
            return 0;
        int sum = root->val;
        sum += dfs(root->left);
        sum += dfs(root->right);
        mp[sum]++;
        return sum;
    }
};