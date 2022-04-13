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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// 这个解法非常简洁 很酷。。但是有很多stl的东西。。
class Solution
{
public:
    TreeNode *recoverFromPreorder(string traversal)
    {
        stack<TreeNode *> path;
        TreeNode *root = nullptr;
        stringstream s;
        s << traversal;
        char c;
        while (s.rdbuf()->in_avail() != 0)
        {
            int d = 0;
            while (s.peek() == '-')
            {
                ++d;
                s >> c;
            }
            int val;
            s >> val;
            TreeNode *node = new TreeNode(val);
            if (path.size() == d)
            {
                if (!path.empty())
                    path.top()->left = node;
                else
                    root = node;
            }
            else
            {
                while (d != path.size())
                    path.pop();
                path.top()->right = node;
            }
            path.push(node);
        }

        return root;
    }
};