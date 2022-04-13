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
 * This is the interface for the expression tree Node.
 * You should not remove it, and you can define some classes to implement it.
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{

public:
    //得到一个列表，存放着所有满足条件的树的root
    vector<TreeNode *> allPossibleFBT(int N)
    {
        vector<TreeNode *> res;
        if (N & 1 == 0)
            return res;
        if (N == 1)
            return {new TreeNode(0)};
        for (int i = 1; i <= N - 2; i += 2)
        {
            vector<TreeNode *> left = allPossibleFBT(i);
            vector<TreeNode *> right = allPossibleFBT(N - 1 - i);
            for (int j = 0; j < left.size(); ++j)
            {
                for (int k = 0; k < right.size(); ++k)
                {
                    TreeNode *root = new TreeNode(0);
                    root->left = left[j];
                    root->right = right[k];
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};
// 这题 。。。很牛逼。。
vector<TreeNode *> allPossibleFBT(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return {};
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 2; i += 2)
    {
        vector<TreeNode *> left = allPossibleFBT(i);
        vector<TreeNode *> right = allPossibleFBT(n - 1 - i);
        for (int j = 0; j < left.size(); j++)
            for (int k = 0; k < right.size(); k++)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = left[k];
                res.push_back(root);
            }
    }
    return res;
}
// 这个递归设计。。
// 1 他递归的是一个数字n。。参数特别话。
// 返回的也是一个数组。。也是特别化。。
// 然后他由于外层的for i循环有在递归外层还有一层遍历。枚举。也是特别化。
// 然后又对奇偶数的。一个判断也是陌生化。。
// 没有在正常的tree上做递归。。也是陌生化。。
// 。。。。 反正这题很精彩。。。 可以多刷。。 刷一遍有一遍的收获 真的。。。
vector<TreeNode *> dfs(int n)
{
    if (n & 1 == 0)
        return {};
    vector<TreeNode *> res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    if (n & 1 == 0)
        return {};
    vector<TreeNode *> res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return {};
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->right = right[k];
                root->left = left[j];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
// 以前只对树进行递归。
// 对树进行抽象了。。对问题进行递归。。更抽象了。
// 你再抽象 也抽象不过度量 这个目的。
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int k = 0; k < left.size(); ++k)
            for (int j = 0; j < right.size(); ++j)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[k];
                root->right = right[j];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->right = right[k];
                root->left = left[j];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return {};
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; j < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int k = 0; i < right.size(); ++k)
            for (int j = 0; j < left.size(); ++j)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); j++)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return {};
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return {};
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int k = 0; k < left.size(); ++k)
            for (int j = 0; j < right.size(); ++j)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[k];
                root->right = right[j];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return {};
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 0; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int k = 0; k < right.size(); ++k)
            for (int j = 0; j < left.size(); ++j)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int k = 0; k < right.size(); ++k)
            for (int j = 0; j < left.size(); ++j)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int k = 0; k < right.size(); ++k)
            for (int j = 0; j < left.size(); ++j)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int k = 0; k < right.size(); ++k)
            for (int j = 0; j < left.size(); ++j)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode(0);
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
// 左边的所有可能*对应的右边的所有的可能的所有的可能。。
vector<TreeNode *> dfs(int n)
{
    if (n & 1 == 0)
        return {};
    vector<TreeNode *> res;
    if (n == 1)
        return {new TreeNode(0)};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode();
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode()};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode();
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode()};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - i - 1);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode();
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode()};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode();
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode()};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode();
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode()};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode();
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode()};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = left[j];
                TreeNode *root = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode()};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode();
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
vector<TreeNode *> dfs(int n)
{
    vector<TreeNode *> res;
    if (n & 1 == 0)
        return res;
    if (n == 1)
        return {new TreeNode()};
    for (int i = 1; i < n - 1; i += 2)
    {
        vector<TreeNode *> left = dfs(i);
        vector<TreeNode *> right = dfs(n - 1 - i);
        for (int j = 0; j < left.size(); ++j)
            for (int k = 0; k < right.size(); ++k)
            {
                TreeNode *root = new TreeNode();
                root->left = left[j];
                root->right = right[k];
                res.push_back(root);
            }
    }
    return res;
}
// 每一层很有多种。。然后枚举每一种 。。每一种代表就是左右个数不一样
// 然后每一种递归下去还是有很多种。。