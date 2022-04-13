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
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
// class Solution {
//     int res=0;
// int distributeCoins(TreeNode root) {
//         //后序遍历，先让左右子树拿走金币使左右子树满足条件,再计算使根节点金币数为1需要拿走的金币数目
//         //如果左右子树金币多，那么从根节点拿负数个金币==从左右子树取出对应数目的金币给根节点
//         if(dfs(root)==0) return res;
//         else return -1;
//     }
//     int dfs(TreeNode node){//返回使当前节点的金币数为1的，需要拿出的金币数目
//         if(node==null) return 0;
//         int l=dfs(node.left);//要使左子树满足题意，需要从左子树拿走的金币数目,可能==0，正数或负数
//         res+=Math.abs(l);//移动次数即拿走的金币绝对值
//         int r=dfs(node.right);
//         res+=Math.abs(r);
//         return l+r+node.val-1;//此时当前节点node金币数目为（l+r+node.val），返回保留一个金币需要拿走的金币数
//     }
// }

class Solution
{
public:
    int distributeCoins(TreeNode *root)
    {
        dfs(root);
        return res;
    }
    int res;
    int dfs(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = dfs(root->left);
        int r = dfs(root->right);
        res += abs(l) + abs(r);
        return root->val + l + r - 1;
    }
};