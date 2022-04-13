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

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node() {}

    Node(int _val)
    {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node *_left, Node *_right)
    {
        val = _val;
        left = _left;
        right = _right;
    }
};

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

class Solution
{
public:
    vector<TreeNode *> findDuplicateSubtrees(TreeNode *root)
    {
        vector<TreeNode *> res;
        unordered_map<string, int> mp;
        dfs(root, res, mp);
        return res;
    }

    string dfs(TreeNode *root, vector<TreeNode *> &res, unordered_map<string, int> &mp)
    {
        if (root == 0)
            return "";
        //二叉树先序序列化
        string str = to_string(root->val) + "," + dfs(root->left, res, mp) + "," + dfs(root->right, res, mp);

        if (mp[str] == 1)
        {
            res.push_back(root);
        }
        mp[str]++;
        return str;
    }
};
//  序列化 mp  牛啊 牛。。。秒啊秒。。
// 调试果然是好的东西。。就是之前的调试 我才知道 序列化的过程 是字底向上 每次递归 统计 。每个节点 都有一个独有的str。。
vector<TreeNode *> res;
unordered_map<string, int> mp;
string dfs(TreeNode *root)
{
    if (!root)
        return " ";
    string str = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[str] == 1)
        res.push_back(root);
    mp[str]++;
    return str;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string i = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[i] == 1)
        res.push_back(root);
    mp[i]++;
    return i;
}
string dfs(TreeNode *root)
{
    if (!root)
        return ":";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->right) + "," + dfs(root->left);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + "," + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "";
    string s = to_string(root->val) + dfs(root->left) + "," + dfs(root->right);
    if (mp[s] == 1)
        res.push_back(root);
    mp[s]++;
    return s;
}
// 得思路者为王。。
// 得思路者为王。。
// 得思路者为王。。