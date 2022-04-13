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
// 这题是给你一个先序数组
// 一棵树
// 然后让你判断那个是不是通过对树的翻转能够实现的先序数组。。
// 1 是这里诠释了。。根左右 根右左的先序遍历的灵活运用。。
// 2 就是对于参数是用值还是用引用的。。的实践。
// 3 就是这个函数设计。。bool返回的秒。。

// 其实是普通的递归判断而已。
// 只不过中间要更加一下路线。。
class Solution
{
public:
    vector<int> res;
    vector<int> flipMatchVoyage(TreeNode *root, vector<int> &voyage)
    {
        int k = 0;
        if (dfs(root, voyage, k))
            return res;
        return {-1};
    }
    bool dfs(TreeNode *root, vector<int> &a, int &k)
    {
        if (!root)
            return true;
        if (root->val != a[k])
            return false;
        k++;
        if (root->left && root->left->val != a[k])
        {
            res.push_back(root->val);
            return dfs(root->right, a, k) && dfs(root->left, a, k);
        }
        else
        {
            return dfs(root->left, a, k) && dfs(root->right, a, k);
        }
    }
};
vector<int> res;
vector<int> a;
bool dfs(TreeNode *root, vector<int> &a, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, a, k) && dfs(root->left, a, k);
    }
    else
        return dfs(root->left, a, k) && dfs(root->right, a, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->right, k) && dfs(root->left, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (!root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return true;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    return dfs(root->left, k) && dfs(root->right, k);
}
// 就是刷的时候尝试加速啊。。不然你什么时候要练速度??>>

bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->right, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
// 无非就是根据需要 调整遍历的顺序而已。。
// 基础还是普通的最简单的递归遍历
// 这种情况我们就先往左走。那种情况先往右走。
// 通过这题就知道 可以动态的调整递归的顺序。。
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
}
bool dfs(TreeNode *root, int &k)
{
    if (!root)
        return true;
    if (root->val != a[k])
        return false;
    k++;
    if (root->left && root->left->val != a[k])
    {
        res.push_back(root->val);
        return dfs(root->right, k) && dfs(root->left, k);
    }
    else
        return dfs(root->left, k) && dfs(root->right, k);
} // 无非就是根据需要 调整遍历的顺序而已。。
  // 基础还是普通的最简单的递归遍历
  // 这种情况我们就先往左走。那种情况先往右走。
  // 通过这题就知道 可以动态的调整递归的顺序。。