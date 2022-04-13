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
class Solution
{
public:
    vector<int> index;
    TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
    {
        int n = preorder.size();
        index.resize(n);
        for (int i = 0; i < n; ++i)
            index[postorder[i]] = i;
        dfs(preorder, postorder, 0, n - 1, 0, n - 1);
    }
    TreeNode *dfs(vector<int> &pre, vector<int> &last, int pleft, int pright, int lleft, int lright)
    {

        if (pright - pleft == 3)
        {
            TreeNode *root = new TreeNode(pre[pleft]);
            root->left = new TreeNode(pre[pleft + 1]);
            root->right = new TreeNode(pre[pright]);
            return root;
        }
        int iroot = index[pre[pleft + 1]];
        int leftsize = iroot - lleft + 1;
        TreeNode *root = new TreeNode(pre[pleft]);
        root->left = dfs(pre, last, pleft + 1, pleft + leftsize, lleft, iroot);
        root->right = dfs(pre, last, pleft + leftsize + 1, pright, iroot + 1, lright - 1);
        return root;
    }
};
// 这题去年大年三十的题目。。简单题 。但是感觉被套路了。。
// 先写几遍把。。这个感觉要消化几天。
// 现在问题是里面结构什么样。。为什么还要一个int 然后top访问的是什么地方。。
//  这题还隐含了一个意思。。我们只需要存k个元素。。从大到小的存 就行了。。其他的不用保留。
// 他重载的是后面的仿函数()
class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> q;
    int k;
    KthLargest(int k, vector<int> &nums)
    {
        this->k = k;
        for (auto &x : nums)
        {
            add(x);
        }
    }

    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
        {
            q.pop();
        }
        return q.top();
    }
};
class soso
{

    priority_queue<int, vector<int>, greater<int>> q;
    int k;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (auto &x : nums)
            add(x);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
        {
            q.pop();
        }
        return q.top();
    }
};
class soso
{
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (auto &n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int val, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};
class soso
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    soso(int k, vector<int> &nums)
    {
        this->k = k;
        for (int n : nums)
            add(n);
    }
    int add(int val)
    {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};