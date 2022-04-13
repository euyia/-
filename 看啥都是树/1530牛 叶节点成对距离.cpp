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
// 这题很牛的。解法。。
// 他把目前节点所有的叶子结点的距离用一个数组统计起来。。
// 然后左右节点两两配对。如果小于dist 。。。就cnt++
// 核心是
// 他的统计方式。。和数据的抽象的思路。。非常的简洁。有效。
class Solution
{
public:
    int countPairs(TreeNode *root, int distance)
    {
        int ans = 0;
        dfs(root, distance, ans);
        return ans;
    }

    vector<int> dfs(TreeNode *root, int distance, int &ans)
    {
        if (root == nullptr)
            return {};
        if (root->left == nullptr && root->right == nullptr)
            return {0};

        vector<int> ret;
        auto left = dfs(root->left, distance, ans);
        for (auto &e : left)
        {
            if (++e > distance)
                continue;
            ret.push_back(e);
        }
        auto right = dfs(root->right, distance, ans);
        for (auto &e : right)
        {
            if (++e > distance)
                continue;
            ret.push_back(e);
        }

        for (auto l : left)
        {
            for (auto r : right)
            {
                ans += (l + r <= distance);
            }
        }

        return ret;
    }
};

class Solution
{
public:
    int countPairs(TreeNode *root, int distance)
    {
        int ans = 0;
        dfs(root, distance, ans);
        return ans;
    }
    vector<int> dfs(TreeNode *root, int distance, int &ans)
    {
        if (!root)
            return {};
        if (!root->left && !root->right)
            return {0};
        vector<int> res;
        vector<int> left = dfs(root->left, distance, ans);
        for (int l : left)
            if (++l > distance)
                continue;
            else
                res.push_back(l);
        vector<int> right = dfs(root->right, distance, ans);
        for (int r : right)
            if (++r > distance)
                continue;
            else
                res.push_back(r);
        for (int l : left)
            for (int r : right)
                ans += (r + l <= distance);
        return res;
    }
};
class Solution
{
public:
    int countPairs(TreeNode *root, int distance)
    {
        int ans = 0;
        soso(root, distance, ans);
        return ans;
    }
    vector<int> soso(TreeNode *root, int distance, int &ans)
    {
        if (!root)
            return {};
        if (!root->left && !root->right)
            return {0};
        vector<int> res;
        vector<int> left = soso(root->left, distance, ans);
        for (int &l : left)
            if (++l > distance)
                continue;
            else
                res.push_back(l);
        vector<int> right = soso(root->right, distance, ans);
        for (int &r : right)
            if (++r > distance)
                continue;
            else
                res.push_back(r);
        for (int l : left)
            for (int r : right)
                ans += (r + l <= distance);
        return res;
    }
};
vector<int> dfs(TreeNode *root, int distance, int &ans)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, distance, ans);
    for (int l : left)
        if (++l > distance)
            continue;
        else
            res.push_back(++l);
    vector<int> right = dfs(root->right, distance, ans);
    for (int r : right)
        if (++r >= distance)
            continue;
        else
            res.push_back(++r);
    for (int l : left)
        for (int r : right)
            ans += l + r <= distance;
    return res;
}
vector<int> dfs(TreeNode *root, int distance, int &ans)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, distance, ans);
    for (int l : left)
        if (++l > distance)
            continue;
        else
            res.push_back(++l);
    vector<int> right = dfs(root->right, distance, ans);
    for (int r : right)
        if (++r >= distance)
            continue;
        else
            res.push_back(++r);
    for (int l : left)
        for (int r : right)
            ans += (r + l <= distance);
    return res;
}

class Solution
{
public:
    int countPairs(TreeNode *root, int distance)
    {
        int cnt = 0;
        dfs(root, distance, cnt);
        return cnt;
    }
    vector<int> dfs(TreeNode *root, int d, int &cnt)
    {
        if (!root)
            return {0};
        vector<int> res;
        vector<int> a = dfs(root->left, d, cnt);
        for (int &cur : a)
            if (++cur < d)
                res.push_back(cur);

        vector<int> b = dfs(root->right, d, cnt);
        for (int &cur : b)
            if (++cur < d)
                res.push_back(cur);
        for (int k : a)
            for (int c : b)
                if (k + c <= d)
                    cnt++;
        return res;
    }
};
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->left, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (r + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;

    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r < d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}

vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    // 感觉如果你想让一个变量全局都能改。。跟随者。。就用引用
    // 如果要像有回溯的那种效果。。就用传值。。
    vector<int> res;
    if (!root)
        return res;
    if (!root->left && !root->right)
        return {0};
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    vector<int> res;
    if (!root)
        return res;
    if (!root->left && !root->right)
        return {0};
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
// 挺好的类型框架的。。。
// 这个框架类似层序遍历。。能接很多很多的题型。。
// 还有那个建图遍历。。然后用一个变量打穿的那个框架也是适用性很广。。
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->left)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
        if (++l < d)
            res.push_back(l);
    vector<int> right = dfs(root->right, d, cnt);
    for (int &r : right)
        if (++r < d)
            res.push_back(r);
    for (int l : left)
        for (int r : right)
            if (l + r <= d)
                cnt++;
    return res;
}
vector<int> dfs(TreeNode *root, int d, int &cnt)
{
    if (!root)
        return {};
    if (!root->left && !root->right)
        return {0};
    vector<int> res;
    vector<int> left = dfs(root->left, d, cnt);
    for (int &l : left)
}
class Solution
{
public:
    int countPairs(TreeNode *root, int distance)
    {
        this->d = distance;
        dfs(root);
        return cnt;
    }
    int d, cnt;
    vector<int> dfs(TreeNode *root)
    {
        if (!root)
            return {};
        if (!root->left && !root->right)
            return {0};
        vector<int> res;
        vector<int> left = dfs(root->left);
        for (auto &l : left)
            if (++l < d)
                res.push_back(l);
        vector<int> right = dfs(root->right);
        for (auto &r : right)
            if (++r < d)
                res.push_back(r);
        for (auto l : left)
            for (auto r : right)
                if (l + r <= d)
                    cnt++;
        return res;
    }
};
// 他这里就是用数组 非常一针见血的统计了每个节点到叶节点的路径长度。。
// 这个数据。。是我们唯一需要的。。他直接提取了。