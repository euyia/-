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

// ---------------------
// 这个是我解的。。
class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        string k;
        queue<TreeNode *> q;
        if (!root)
            return k;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *tmp = q.front();
            if (tmp != nullptr)
                k += to_string(tmp->val) + ",";
            else
                k += "n,";
            q.pop();
            if (tmp != nullptr)
            {

                if (tmp->left)
                    q.push(tmp->left);
                else
                    q.push(nullptr);
                if (tmp->right)
                    q.push(tmp->right);
                else
                    q.push(nullptr);
            }
        }
        printf("%s", k.c_str());

        return k;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string k)
    {
        vector<int> res;
        int i = 0;
        while (i < k.size())
        {
            int sum = 0;
            while (k[i] != ',')
            {
                if (k[i] == 'n')
                    res.push_back(-1);
                else
                {
                    sum = 10 * sum + k[i] - '0';
                }
                i++;
            }

            if (sum != 0)
                res.push_back(sum);
            sum = 0;
            i++;
        }
        return bfs(res, 0);
    }
    TreeNode *bfs(vector<int> &res, int i)
    {
        if (res[i] == -1)
            return nullptr;
        TreeNode *root = new TreeNode(res[i]);
        if (i < res.size() - 1)
            root->left = bfs(res, i + 1);
        if (i < res.size() - 1)
            root->right = bfs(res, i + 1);
        return root;
    }
};
// ===========================
class Solution
{

public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        if (root == NULL)
            return "X,";
        string leftNode = serialize(root->left);
        string rightNode = serialize(root->right);
        return to_string(root->val) + "," + leftNode + rightNode;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        list<string> list = split(data, ',');
        TreeNode *res = buildTree(list);
        return res;
    }

    TreeNode *buildTree(list<string> &strList)
    {
        string strtmp = strList.front();
        strList.pop_front();
        if (strtmp == "X")
            return NULL;
        TreeNode *node = new TreeNode(stoi(strtmp));
        node->left = buildTree(strList);
        node->right = buildTree(strList);
        return node;
    }

    list<string> split(string s, char c)
    {
        list<string> res;
        for (int lastpos = -1, pos = 0; pos < s.length(); pos++)
        {
            if (s[pos] == c)
            {
                res.push_back(s.substr(++lastpos, pos - lastpos));
                lastpos = pos;
            }
        }
        return res;
    }
};
string dfs(TreeNode *root)
{
    if (!root)
        return "x,";
    string left = dfs(root->left);
    string right = dfs(root->right);
    return to_string(root->val) + "," + left + right;
}
// 这个后序用的是非常巧妙。。
string dfs(TreeNode *root)
{
    if (!root)
        return "x,";
    string left = dfs(root->left);
    string right = dfs(root->right);
    return to_string(root->val) + "," + left + right;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "x,";
    string left = dfs(root->left);
    string right = dfs(root->right);
    return to_string(root->val) + "," + left + right;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "x,";
    string left = dfs(root->left);
    string right = dfs(root->right);
    return to_string(root->val) + "," + left + right;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "x,";
    string l = dfs(root->left);
    string r = dfs(root->right);
    return to_string(root->val) + "," + l + r;
}
string dfs(TreeNode *root)
{
    if (!root)
        return "x,";
    string left = dfs(root->left);
    string right = dfs(root->right);
    return to_string(root->val) + "," + left + right;
}
list<string> split(string s, char c)
{
    list<string> res;
    for (int start = -1, cur = 0; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(++start, cur - start));
            start = cur;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int i = 0, j = 0;
    list<string> res;
    for (; j < s.size(); ++j)
    {
        if (s[j] == c)
        {
            res.push_back(s.substr(i, j - 1));
            i = j + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> splist(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
// 天下武功 唯快不破。。。。。刷就要手速 快。。。刷成肌肉记忆。。思维肌肉记忆。
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        ;
    return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *buildTree(list<string> &strList)
{
    string strtmp = strList.front();
    strList.pop_front();
    if (strtmp == "X")
        return NULL;
    TreeNode *node = new TreeNode(stoi(strtmp));
    node->left = buildTree(strList);
    node->right = buildTree(strList);
    return node;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->left = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    // stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi
    // stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi
    // stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi
    // stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi
    // stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi
    // stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi stoi
}
TreeNode *bulid(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
list<string> split(string s, char c)
{
    int start = 0, cur = 0;
    list<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
deque<string> splt(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    deque<string> res;
    int start = 0, cur = 0;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    deque<string> res;
    int start = 0, cur = 0;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    deque<string> res;
    int start = 0, cur = 0;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    deque<string> res;
    int start = 0, cur = 0;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
deque<string> soso(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(list<string> &str)
{
    string s = str.front();
    str.pop_front();
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
TreeNode *build(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    TreeNode *root = new TreeNode(stoi(s));
    root->left = build(str);
    root->right = build(str);
    return root;
}
deque<string> splits(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
    {
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    }
    return res;
}
deque<string> splits(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
deque<string> splits(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); ++cur)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}
deque<string> splits(string s, char c)
{
    int start = 0, cur = 0;
    deque<string> res;
    for (; cur < s.size(); cur++)
        if (s[cur] == c)
        {
            res.push_back(s.substr(start, cur - start));
            start = cur + 1;
        }
    return res;
}

// 那个返回
// “x, 那个string的拼凑很讲究的。。逗号要最后要有。。不然会split的时候会漏 而且会报错。
//
// 这个其实有三个小套路。。
// 都很经典 1是双指针切分。2是递归用序列化的来建树。3 后序的统计。。
deque<string> splits(string s, char c)
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
deque<string> splits(string s, char c)
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
TreeNode *dfs(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = dfs(str);
    root->right = dfs(str);
    return root;
}
string build(TreeNode *root)
{
    if (!root)
        return "x,";
    return to_string(root->val) + "," + build(root->left) + build(root->right);
}

TreeNode *soso(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = soso(str);
    root->right = soso(str);
}
TreeNode *soso(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = soso(str);
    root->right = soso(str);
}
// 其实遍历 限度深度遍历。本质上就是线性的。。
// 你看他这里。就是和str上面的string 顺序是一致的。。
// 建树的时候的递归的点 就是str的数组的顺序。。
// 这是没有后序处理的。。如果单单在先序位置。。
// 无论是那个序。。单单对于一个序来说。遍历就是一遍而已。。
// 如果
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        dfs(root);
        return {};
    }
    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        printf("%d的先\n", root->val);
        dfs(root->left);
        printf("%d的中\n", root->val);
        dfs(root->right);
        printf("%d的后\n", root->val);
    }
};
// 他转成string的时候是后序的？
// 虽然是后序的位置统计的。。但是它出来的是先序的 因为是root +left+right；
// 虽然是后序的位置统计的。。但是它出来的是先序的 因为是root +left+right；
// 虽然是后序的位置统计的。。但是它出来的是先序的 因为是root +left+right；
// 建的时候是先序的？？？？
// 这样怎么匹配上的。。
TreeNode *soso(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = soso(str);
    root->right = soso(str);
    return root;
}
// 遍历就是这样线性的。。一个个的拆掉str
TreeNode *soso(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = soso(str);
    root->left = soso(str);
    return root;
}
TreeNode *soso(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = soso(str);
    root->right = soso(str);
    return root;
}
TreeNode *soso(deque<string> &str)
{
    string s = str.front();
    str.pop_front();
    if (s == "x")
        return nullptr;
    TreeNode *root = new TreeNode(stoi(s));
    root->left = soso(str);
    root->right = soso(str);
    return root;
}
// ..还不够。。
// 多体验不断拆分str和这个递归那string s的过程。。
// 线性 和递归 。路线是一致的。。
// 也就是递归的复杂度也是线性的。。他的个数是 0 n n节点个数。
// 如果但是如果回溯  数组的话。。递归他 就是n叉树
// 每个节点又扩散n叉。。然后又n叉。。就不单单是正方形n平方个数了。
// 他遍历的复杂度是n叉树的节点个数没错。。但是它不是2的n次方-1个。而是n的n次方。。
