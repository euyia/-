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
    bool isValidSerialization(string s)
    {
        s.push_back(',');
        int slot = 1;
        int start = 0, cur = 0;
        for (; cur < s.size(); ++cur)
        {
            if (s[cur] == ',')
            {
                string k = s.substr(start, cur - start);
                if (slot == 0)
                    return false;
                if (k == "#")
                    slot -= 1;
                else
                    slot += 1;
                start = cur + 1;
            }
        }
        return slot == 0;
    }
    deque<string> split(string s, char c)
    {
        deque<string> res;
        int start = 0, cur = 0;
        for (; cur < s.size(); ++cur)
            if (s[cur] == c)
            {
                res.push_back(s.substr(start, cur - start));
                start = cur + 1;
            }
        return res;
    }
};
class Solution
{
public:
    bool isValidSerialization(string preorder)
    {
        preorder.push_back(',');
        int k;
        for (char p : preorder)
            if (p >= '0' && p <= '9')
                k += p;

        deque<string> res = split(preorder, ',');
        TreeNode *root = build(res);
        dfs(root);
        return k == cnt;
    }
    deque<string> split(string s, char c)
    {
        deque<string> res;
        int start = 0, cur = 0;
        for (; cur < s.size(); ++cur)
            if (s[cur] == c)
            {
                res.push_back(s.substr(start, cur - start));
                start = cur + 1;
            }
        return res;
    }
    TreeNode *build(deque<string> &str)
    {
        string s = str.front();
        str.pop_front();
        if (s == "#")
            return nullptr;
        TreeNode *root = new TreeNode(stoi(s));
        root->left = build(str);
        root->right = build(str);
        return root;
    }
    int cnt;
    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        cnt += root->val;
        dfs(root->left);
        dfs(root->right);
    }
};
// 上面是当时自己写的。。反正各种转来转去。。。也没成。。

bool isValidSerialization(string s)
{
    s.push_back(',');
    int slot = 1;
    int start = 0, cur = 0;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == ',')
        {
            string k = s.substr(start, cur - start);
            if (slot == 0)
                return false;
            if (k == "#")
                slot -= 1;
            else
                slot += 1;
            start = cur + 1;
        }
    }
    return slot == 0;
}

class Solution
{
public:
    bool flag = true;
    void dfs(string &preorder, int &u)
    {
        if (u == preorder.size())
        {
            flag = false;
            return;
        }
        if (preorder[u] == '#')
        {
            u += 2;
            return;
        }
        while (preorder[u] != ',')
            u++;
        u++;
        dfs(preorder, u);
        dfs(preorder, u);
    }
    bool isValidSerialization(string preorder)
    {
        preorder += ',';
        int u = 0;
        dfs(preorder, u);
        return flag && u == preorder.size();
    }
};
