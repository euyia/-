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
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
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
class Solution
{
public:
    int longestConsecutive(TreeNode *root)
    {
        dfs(root, nullptr, 1);
        return sum;
    }
    int sum;
    void dfs(TreeNode *root, TreeNode *p, int cnt)
    {
        if (!root)
            return;
        if (p)
        {
            if (p->va + 1 == root->val)
                cnt++;
            else
                cnt = 1;
            if (cnt > sum)
                sum = cnt;
        }
        dfs(root->left, root, cnt);
        dfs(root->right, root, cnt);
    }
};

class Solution
{
public:
    vector<vector<int>> verticalOrder(TreeNode *root)
    {
        // 印象是用一个map的排序功能处理左右的关系
        // 用层序遍历处理上下层关系。
        map<int, vector<int>> mp;
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});
        mp[0].push_back(root->val);
        vector<vector<int>> res;
        while (q.size())
        {
            auto tmp = q.front();
            q.pop();
            TreeNode *cur = tmp.first;
            int n = tmp.second;
            if (cur->left)
            {
                mp[n - 1].push_back(root->left->val);
                q.push({cur->left, n - 1});
            }
            if (cur->right)
            {
                mp[n + 1].push_back(root->right->val);
                q.push({cur->right, n + 1});
            }
        }
        for (auto m : mp)
            res.push_back(m.second);
        return res;
    }
};

class Solution
{
public:
    bool isValidSerialization(string s)
    {
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == ',')
                continue;
            a++;
            if (isdigit(s[i]))
            {
                b += 2;
                while (i < s.size() - 1 && isdigit(s[i + 1]))
                    i++;
            }
            if (a <= b)
                return false;
        }
        return a == b;
    }
};
class Solution
{
public:
    int largestBSTSubtree(TreeNode *root)
    {
    }
    int maxt = 0;
    pair<int, int> dfs(TreeNode *root)
    {
        if (!root)
            return {};
        auto left = dfs(root->left);
        auto right = dfs(root->right)
    }
};
class Solution
{
public:
    int rob(TreeNode *root)
    {
        // 一个节点他偷还是不偷的最大值。。
        auto tmp = dfs(root);
        return max(tmp.first, tmp.second);
    }
    pair<int, int> dfs(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        auto left = dfs(root->left);
        auto right = dfs(root->right);
        // 前为当前节点偷的最大值 。后面为 不偷的最大值。
        int l = 0, r = 0;
        l = left.second + right.second + root->val;
        r = max(left.first, left.second) + max(right.first, right.second) + root->val;
        return {l, r};
    }
};
// 还有好远。时间又好像不够。。的时候。。
class Solution
{
public:
    vector<int> path;
    vector<vector<int>> res;
    vector<vector<int>> findLeaves(TreeNode *root)
    {
        if (!root)
            return {};
        while (!root->left && !root->right)
        {
            dfs(root);
            res.push_back(path);
            path.clear();
        }
        res.push_back({root->val});
        return res;
    }
    // 从先序遍历的角度去删。
    TreeNode *dfs(TreeNode *root)
    {
        if (!root)
            return nullptr;
        if (!root->right && !root->left)
        {
            path.push_back(root->val);
            return nullptr;
        }
        root->left = dfs(root->left);
        root->right = dfs(root->right);
        return root;
    }
};

class Solution
{
public:
    vector<vector<int>> res;
    vector<vector<int>> findLeaves(TreeNode *root)
    {
        h(root);
        return res;
    }
    int h(TreeNode *root)
    {
        if (!root)
            return -1;
        int l = h(root->left);
        int r = h(root->right);
        int cur = 1 + max(h(root->left), h(root->right));
        if (res.size() > cur)
            res[cur].push_back(root->val);
        else
        {
            res.push_back({});
            res.back().push_back(root->val);
        }

        return cur;
    }
};
class Codec
{
public:
    // Encodes an n-ary tree to a binary tree.
    TreeNode *encode(Node *root)
    {
        if (!root)
            return nullptr;
        TreeNode *cur = new TreeNode(root->val);
        for (int i = 0; i < root->children.size(); ++i)
        {
            if (i == 0)
            {
                cur->left = encode(root->children[i]);
                cur = cur->left;
            }
            else
            {
                cur->right = encode(root->children[i]);
                cur = cur->right;
            }
        }
        return cur;
    }

    // Decodes your binary tree to an n-ary tree.
    Node *decode(TreeNode *root)
    {
        if (!root)
            return nullptr;
        Node *node = new Node(root->val);
        auto left = root->left;
        while (left)
        {
            node->children.push_back(decode(left->right));
            left = left->right;
        }
        return node;
    }
};

class Solution
{
public:
    bool winnerOfGame(string nums)
    {
        bool flag = false;
        // a当false的时候才能操作。。而且他可以不操作但是最好操作。。
        // b当true；的时候才可以操作 然后操作完转false
        for (int i = 1; i < nums.size() - 1; ++i)
        {
            if (nums[i - 1] == nums[i + 1] && nums[i - 1] == nums[i])
            {

                if (nums[i] == 'A' && flag == false)
                {
                    nums = nums[i - 1] + nums.substr(i + 1, nums.size());
                    i = 0;
                    flag = true;
                }
                else if (nums[i] == 'B' && flag == true)
                {
                    nums = nums[i - 1] + nums.substr(i + 1, nums.size());
                    i = 0;
                    flag = false;
                }
            }
        }

        return !flag;
    }
};

class Solution
{
public:
    bool winnerOfGame(string nums)
    {
        // 有连带的 要真删。要用递归
        for (int i = 1; i < nums.size() - 1; ++i)
        {
            if (nums[i - 1] == nums[i + 1] && nums[i] == nums[i])
            {

                if (nums[i] == 'A')
                    nums[i] = 'a';
                if (nums[i] == 'B')
                    nums[i] = 'b';
            }
        }
    }
};

class Codec
{
public:
    // Encodes an n-ary tree to a binary tree.
    TreeNode *encode(Node *root)
    {
        if (!root)
            return nullptr;
        TreeNode *cur = new TreeNode(root->val);
        TreeNode *ct = cur;
        for (int i = 0; i < root->children.size(); ++i)
        {
            if (i == 0)
            {
                ct->left = encode(root->children[i]);
                ct = ct->left;
            }
            else
            {
                ct->right = encode(root->children[i]);
                ct = ct->right;
            }
        }
        return cur;
    }

    // Decodes your binary tree to an n-ary tree.
    Node *decode(TreeNode *root)
    {
        if (!root)
            return nullptr;
        Node *node = new Node(root->val);
        node->children.push_back(decode(root->left));
        root = root->left;
        while (root)
        {
            node->children.push_back(decode(root->right));
            root = root->right;
        }
        return node;
    }
};