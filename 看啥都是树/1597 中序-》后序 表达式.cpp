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

struct Node
{
    char val;
    Node *left;
    Node *right;
    Node() : val(' '), left(nullptr), right(nullptr) {}
    Node(char x) : val(x), left(nullptr), right(nullptr) {}
    Node(char x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    queue<char> get_(string &s)
    {
        stack<char> sta1;
        queue<char> res;
        for (int i = 0; i < s.size(); ++i)
        {
            char a = s[i];
            if ((int)a >= (int)'0')
            {
                res.push(a);
            }
            else if (sta1.empty() || a == '(')
            {
                sta1.push(a);
            }
            else if (a == '+' || a == '-')
            {
                while (sta1.top() == '+' || sta1.top() == '-' || sta1.top() == '*' || sta1.top() == '/')
                {
                    res.push(sta1.top());
                    sta1.pop();
                    if (sta1.empty())
                        break;
                }
                sta1.push(a);
            }
            else if (a == '*' || a == '/')
            {
                while (sta1.top() == '*' || sta1.top() == '/')
                {
                    res.push(sta1.top());
                    sta1.pop();
                    if (sta1.empty())
                        break;
                }
                sta1.push(a);
            }
            else if (a == ')')
            {
                while (sta1.top() != '(')
                {
                    res.push(sta1.top());
                    sta1.pop();
                }
                sta1.pop();
            }
        }
        while (!sta1.empty())
        {
            res.push(sta1.top());
            sta1.pop();
        }
        return res;
    }
    Node *expTree(string s)
    {
        queue<char> sta_char = get_(s);
        stack<Node *> sta_node;
        while (!sta_char.empty())
        {
            Node *new_tree = new Node(sta_char.front());
            sta_char.pop();
            if ((int)new_tree->val < (int)'0')
            {
                new_tree->right = sta_node.top();
                sta_node.pop();
                new_tree->left = sta_node.top();
                sta_node.pop();
                sta_node.push(new_tree);
            }
            else
                sta_node.push(new_tree);
        }
        return sta_node.top();
    }
};
// 看着头疼 先放你一马。。
// 就是中序转后序。然后用后序建树。
// 这个题目。。在教材有。拿写没用的树来替代。