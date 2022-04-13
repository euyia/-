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
/**
 * Definition for a binary tree node.

 */
#include <vector>
#include <unordered_map>
using namespace std;

// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

/********递归想法*********/
/*
1、当前节点的子树和为：roo->val + 左子树 + 右子树
2、当遇到更大的频数时清空ans数组，重新赋值
*/
class Solution
{
public:
    vector<int> findFrequentTreeSum(TreeNode *root)
    {
        treeSum(root);
        return ans;
    }

private:
    vector<int> ans;
    unordered_map<int, int> freqs;
    int max_freq = -1;
    int treeSum(TreeNode *root)
    {
        if (!root)
            return 0;
        int sum = root->val + treeSum(root->left) + treeSum(root->right);
        int freq = ++freqs[sum];
        if (freq > max_freq)
        {
            max_freq = freq;
            ans.clear();
        }
        if (freq == max_freq)
        {
            ans.push_back(sum);
        }
        return sum;
    }
};

class Solution
{
public:
    unordered_map<int, int> mp;
    vector<int> res;
    int max_cur = -1;
    vector<int> findFrequentTreeSum(TreeNode *root)
    {
        dfs(root);
        return res;
    }
    int dfs(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        int sum = root->val + left + right;
        int cur = ++mp[sum];
        if (cur > max_cur)
        {
            max_cur = cur;
            res.clear();
            // res.push_back(sum);这边不用加进入 。。费解。。
        }
        if (cur == max_cur)
            res.push_back(sum);
        return sum;
    }
};
