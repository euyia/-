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
// 给你一个用括号包裹的。。前序序列。让你建树。
//  你要一直走。。走到灯火通明。
class Solution
{
public:
    TreeNode *str2tree(string s)
    {
        if (s.size() == 0) //dfs 剪枝
            return nullptr;
        int pos = s.find('(');                   //第一个左括号的idx,也是左子树那一部分的起点
        int root_val = stoi(s.substr(0, pos));   //第一个数
        TreeNode *root = new TreeNode(root_val); //建立根结点

        if (pos == string::npos) //若没有做括号，就一个数，那就只有一个点
            return root;

        int start = pos;
        int cnt = 0;
        for (int i = pos; i < s.size(); i++)
        {
            if (s[i] == '(')
                cnt++;
            else if (s[i] == ')')
                cnt--;
            if (cnt == 0 && start == pos) //左半部分
            {
                root->left = str2tree(s.substr(start + 1, i - start - 1)); //抠掉两边的括号
                start = i + 1;                                             //右半部分的起点，都是右子的部分了
            }
            else if (cnt == 0 && start != pos) //必须是else if.否则左子树的刚判断完，立马就进来了
            {
                root->right = str2tree(s.substr(start + 1, i - start - 1));
            }
        }
        return root;
    }
};
// 看能不能优化。。不要for 后面都是白走的。
// 我们只要走到第一个）就可以了。剩下的
TreeNode *str2tree(string s)
{
    if (s.size() == 0) //dfs 剪枝
        return nullptr;
    int pos = s.find('(');
    // （的序列号 就是他前一位的个数
    // 这里不能直接用1 表示pos 因为他这里节点val 不一定是一位。
    TreeNode *root = new TreeNode(stoi(s.substr(0, pos)));
    if (s.size() == pos)
        return root;

    int start = pos;
    int cnt = 0;
    for (int i = pos; i < s.size(); i++)
    {
        if (s[i] == '(')
            cnt++;
        else if (s[i] == ')')
            cnt--;
        if (cnt == 0 && start == pos) //左半部分
        {
            root->left = str2tree(s.substr(start + 1, i - start - 1)); //抠掉两边的括号
            start = i + 1;                                             //右半部分的起点，都是右子的部分了
        }
        else if (cnt == 0 && start != pos) //必须是else if.否则左子树的刚判断完，立马就进来了
        {
            root->right = str2tree(s.substr(start + 1, i - start - 1));
        }
    }
    return root;
}
TreeNode *str2tree(string s)
{
    if (s.size() == 0)
        return nullptr;
    int pos = s.find('(');
    TreeNode *root = new TreeNode(stoi(s.substr(0, pos)));
    if (s.size() == pos)
        return root;

    int start = pos;
    int count = 0;
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '(')
            count++;
        else if (s[i] == ')')
            count--;
        if (count == 0)
            break;
        i++;
    }
    str2tree(s.substr(start + 1, i - start - 1));
    if (i != s.size() - 1)
        str2tree(s.substr(i + 2, s.size() - i - 3));
}
// 最后的时候pos
//  是会返回-1的。。
//  因为每次 我们都剥离了外层的括号。
//  所以最后是没有括号的。
//  。。然后right部分。。我想优化。。但是会报错。。不知道为啥。回头再看吧。。
//  调试还是很发现很多问题的。
//  这样去摸细节。。很有价值。
//  但是我要去刷了。。早上才刷了一点