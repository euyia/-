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
// 这题是用一堆小节点 来判断是否能建二叉搜索树。
// 里面主要考察逻辑。
// 三次检查。。要想的出来。。
// 实现不难。。也没有啥复杂的结构
// 就是建树的时候比较好玩。。他这建树那个小函数 很有趣。。
// 其实这题核心是这三个检查条件的判断。。。
//
class Solution
{
public:
    unordered_map<int, TreeNode *> root;
    void dfs(TreeNode *node)
    {
        if (node == nullptr)
        {
            return;
        }
        if (node->left == nullptr && node->right == nullptr)
        {
            auto it = root.find(node->val);
            if (it != root.end())
            {
                // 他这个find 会返回目标位置的迭代器 也就是地址。
                // 。。。各种用stl的知识。。
                // 不过这边确实是需要拿到他的迭代器。下面删除erase 要用。
                // 不能直接用key值删除吗。。还是说有不同的重载。
                // 这个有空可以去了解。
                node->left = it->second->left;
                node->right = it->second->right;
                root.erase(it);
                // 这个就是拼接了。。应该是建树
            }
        }
        dfs(node->left);
        dfs(node->right);
    }
    void dfs(TreeNode *node, vector<int> &seq)
    {
        // 这是中序遍历一棵树。应该是最后面要验证是否为二叉搜索树的时候用。
        if (node == nullptr)
        {
            return;
        }
        dfs(node->left, seq);
        seq.emplace_back(node->val);
        dfs(node->right, seq);
    }
    TreeNode *canMerge(vector<TreeNode *> &trees)
    {
        // 检查条件一
        unordered_set<int> check_set;
        for (auto t : trees)
        {
            if (t->left)
            {
                // 这里已经给人用到了stl的一个很细节的知识了。
                // 就是set的insert函数 他会返回一个pair
                // 第一个元素位置是你插入位置的迭代器位置
                // 第二就是插入是否成功。因为set 是不能重复的 所以有重复就会放回false。。
                // 这里就是利用了这点。
                if (check_set.insert(t->left->val).second == false)
                {
                    return nullptr;
                }
            }
            if (t->right)
            {
                if (check_set.insert(t->right->val).second == false)
                {
                    return nullptr;
                }
            }
        }
        // 检查条件二
        // 这边判断出来 根节点必须只有一个不在于叶节点里面。
        // 然后把那个根节点找出来。
        int count = 0;
        TreeNode *final_root = nullptr;
        for (auto t : trees)
        {
            if (check_set.count(t->val))
            {
                count++;
            }
            else
            {
                final_root = t;
            }
        }
        if (count + 1 != trees.size())
        {
            return nullptr;
        }
        // 检查完成

        // 构造 node->val 到 node 的映射
        for (auto t : trees)
        {
            // 他这边把所有的根记录下来。到时候可以通过别的树的val 去找到这个root，接起来
            // 这个思路就很牛逼。。
            if (t != final_root)
            {
                root[t->val] = t;
            }
        }
        // 开始合并
        dfs(final_root);
        if (!root.empty())
        {
            return nullptr;
        }
        // 中序遍历检查
        vector<int> seq;
        dfs(final_root, seq);
        // 遍历一遍 就可以了。。比我想的sort然后比较 更好。
        for (int i = 1; i < seq.size(); i++)
        {
            if (seq[i - 1] >= seq[i])
            {
                return nullptr;
            }
        }
        return final_root;
    }
};
class Solution
{
public:
    unordered_map<int, TreeNode *> mp;
    vector<int> res;
    TreeNode *canMerge(vector<TreeNode *> &trees)
    {
        // 先检查前两种非法情况
        // 1 有重复的叶节点
        // 2是用根节点去到那个set里面去判断。然后找出没有在叶节点的就是主根，然后
        // count数量不等于n-1的也是错的。。这个有点难理解。
        // 3 就建树
        // 4 建完树还要再检查mp 还有没有值。如果还有 说明 有环。也不行。
        // 5中序遍历。判断数组是否递增。来判断成型的二叉搜索树；
        // 1
        set<TreeNode *> _set;
        for (auto t : trees)
        {
            if (t->left)
                if (_set.insert(t->left).second == false)
                    return nullptr;
            if (t->right)
                if (_set.insert(t->right).second == false)
                    return nullptr;
        }
        // 2
        int count = 0;
        TreeNode *root = nullptr;
        for (auto t : trees)
        {
            auto it = _set.find(t);
            if (it != _set.end())
            {
                count++;
            }
            else
                root = t;
            if (count + 1 != trees.size())
                return nullptr;
        }
        // 3 建树。
        for (auto t : trees)
        {
            if (t != root)
                mp[t->val] = t;
        }
        build(root);
        if (!mp.empty())
            return nullptr;
        // 5 中序遍历已经成型的树
        if (dfs(root))
            return root;
        return nullptr;
    }
    //建树辅助函数
    void build(TreeNode *root)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
        {
            auto it = mp.find(root->val);
            if (it != mp.end())
            {
                root->left = it->second->left;
                root->right = it->second->right;
                mp.erase(it);
            }
        }
        build(root->left);
        build(root->right);
    };
    // 中序遍历辅助函数
    TreeNode *pre;
    bool dfs(TreeNode *root)
    {
        if (!root)
            return true;
        ;
        bool left = dfs(root->left);
        if (pre && pre->val >= root->val)
            return false;
        pre = root;
        bool right = dfs(root->right);

        return left && right;
    };
};
unordered_map<int, TreeNode *> mp;
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
            mp.erase(it);
        }
    }
    build(root->left);
    build(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    dfs(root->left);
    dfs(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
// 递归的框架一直都很简单。
// 就是2个点 1 你每个节点要做什么。。2 什么时候甩给下面的节点。
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
void build(TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        auto it = mp.find(root->val);
        if (it != mp.end())
        {
            root->left = it->second->left;
            root->right = it->second->right;
        }
    }
    build(root->left);
    build(root->right);
}
// 首先要判断需要处理的节点。就是在mp里面找的到头的叶节点
// 然后就是mp里面地址的技巧。。
// 最后就是把根对应左右节点赋值给新根。。