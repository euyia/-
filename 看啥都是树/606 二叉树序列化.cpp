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
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void preAccess(TreeNode* t, string & str)
    {
        if(t == NULL) return;
        str += to_string(t->val);
        if(t->left || t->right)
        {
            str += "(";
            preAccess(t->left, str);
            str += ")";
        }
        if(t->right)
        {
            str += "(";
            preAccess(t->right, str);
            str += ")";
        }
    }
    
    string tree2str(TreeNode* t) {
        string res = "";
        preAccess(t, res);
        return res;
    }
};
// 【标题完全内容】 前序遍历没什么好说的，难点在于加括号时区分左右子树。左子树加括号的条件是：1.左子树不空，2.左子树为空，但右子树不空；右子树加括号的条件是：右子树不空