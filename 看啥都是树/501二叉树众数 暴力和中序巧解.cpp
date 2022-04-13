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
// 这题挺好的题目。。无论哪种解法。
// 暴力的话 也体现了 对于数据结构的操控能力。。特别是哈希表。简直玩透了哈希表。
// 正解。。是二叉搜索树和中序遍历的强强联合。。。

class Solution
{
private:
    void searchBST(TreeNode *cur, unordered_map<int, int> &map)
    { // 前序遍历
        if (cur == NULL)
            return;
        map[cur->val]++; // 统计元素频率
        searchBST(cur->left, map);
        searchBST(cur->right, map);
        return;
    }
    bool static cmp(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.second > b.second;
    }

public:
    vector<int> findMode(TreeNode *root)
    {
        unordered_map<int, int> map;
        vector<int> result;
        if (root == NULL)
            return result;
        searchBST(root, map);
        vector<pair<int, int>> vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), cmp); // 给频率排个序
        result.push_back(vec[0].first);
        for (int i = 1; i < vec.size(); i++)
        {
            if (vec[i].second == vec[0].second)
                result.push_back(vec[i].first);
            else
                break;
        }
        return result;
    }
};
// 这题应该是要考中序遍历。。
class Solution
{
private:
    int max_cnt = 0;         // 最大频次
    int cnt = 0;             // 当前元素出现频次
    TreeNode *pre = nullptr; // 前驱节点
    vector<int> res;         // 保存众数
    void dfs(TreeNode *root) // 中序遍历
    {
        if (root == nullptr)
            return;
        dfs(root->left);
        if (pre && pre->val == root->val)
            cnt++; // 与前驱相同，频次++
        else
            cnt = 1;        // 是没前驱的首个节点，或非重复元素，频次初始化
        if (cnt == max_cnt) // 成为了众数之一
            res.push_back(root->val);
        if (cnt > max_cnt) // 频次突破新高，成为众数，并且之前的众数无效了
        {
            res.clear();
            max_cnt = cnt;
            res.push_back(root->val);
        }
        pre = root; // 更新前驱
        dfs(root->right);
    }

public:
    vector<int> findMode(TreeNode *root)
    {
        dfs(root);
        return res;
    }
};
class Solution
{
public:
    vector<int> res;
    int cnt = 0, maxx = 1;
    TreeNode *pre;
    void dfs(TreeNode *root)
    {
        if (!root)
            return;
        dfs(root->left);
        if (pre && pre->val == root->val)
            cnt++;
        else
            cnt = 1;
        if (cnt == maxx)
            res.push_back(root->val);
        if (cnt > maxx)
        {
            res.clear();
            maxx = cnt;
            res.push_back(root->val);
        }
        pre = root;
        dfs(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        dfs(root);
        return res;
    }
};
vector<int> res;
int cnt, sum;
TreeNode *pre;
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        sum = cnt;
        res.clear();
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        sum = cnt;
        res.clear();
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        sum = cnt;
        res.clear();
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        res.clear();
        sum = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
unordered_map<int, int> mp;
void dfs(TreeNode *root)
{
    if (!root)
        return;
    mp[root->val]++;
    dfs(root->left);
    dfs(root->right);
}
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second > b.second;
}
vector<int> ans;
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
    {
        ans.push_back(res[count].first);
        count++;
    }
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
    {
        ans.push_back(res[count].first);
        count++;
    }
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
    {
        ans.push_back(res[count].first);
        count++;
    }
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
    {
        ans.push_back(res[count].first);
        count++;
    }
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}

vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
// 要刷就刷到熟透。。不然就不要刷 因为没效果。
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
vector<int> soso(TreeNode *root)
{
    dfs(root);
    vector<pair<int, int>> res(mp.begin(), mp.end());
    sort(res.begin(), res.end(), cmp);
    ans.push_back(res[0].first);
    int count = 1;
    while (count < res.size() && res[count].second == res[0].second)
        ans.push_back(res[count++].first);
    return ans;
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        res.clear();
        sum = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
//  这个结构就非常适合做这个算法。。简直很舒服的。。数据结构+算法的搭配。。
// 中序 他没有改变他的值。所以可以这样吧。。。
// 他只是做数据上的一个统计而已。。并没有改变树的结构。。
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        res.clear();
        sum = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        res.clear();
        sum = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        res.clear();
        sum = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == sum)
        res.push_back(root->val);
    if (cnt > sum)
    {
        res.clear();
        sum = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
int max_cnt;
// 这种下划线 来做变量的名称就给人很专业很高级 而且看起来很容易识别。以后就写成这样吧。
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == max_cnt)
        res.push_back(root->val);
    if (cnt > max_cnt)
    {
        res.clear();
        max_cnt = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == max_cnt)
        res.push_back(root->val);
    if (cnt > max_cnt)
    {
        res.clear();
        max_cnt = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == max_cnt)
        res.push_back(root->val);
    if (cnt > max_cnt)
    {
        res.clear();
        max_cnt = cnt;
        res.push_back(root->val);
    }
    pre = root;
    dfs(root->right);
}
// max_cnt
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt > max_cnt)
    {
        res.clear();
        max_cnt = cnt;
        res.push_back(root->val);
    }
    if (cnt == max_cnt)
        res.push_back(root->val);
    dfs(root->right);
}
void dfs(TreeNode *root)
{
    if (!root)
        return;
    dfs(root->left);
    if (pre && pre->val == root->val)
        cnt++;
    else
        cnt = 1;
    if (cnt == max_cnt)
        res.push_back(root->val);
    if (cnt > max_cnt)
    {
        res.clear();
        max_cnt = cnt;
        res.push_back(root->val);
    }
    dfs(root->right);
}
