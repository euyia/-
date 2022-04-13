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
// 长的是图的样子。。因为不会有返回父节点。。所以 他的遍历又不用visit。。很有趣。。
// 而且有些题目的难点就理解题意。。所以一定要耐心审题。。这种就是看题10分钟 做题2分钟 其实是白给的。
// 这种题一旦准确理解题意 往往特别简单。。转治那种浮躁的人的。。
class ThroneInheritance
{
public:
    ThroneInheritance(string kingName) : king(kingName)
    {
    }

    void birth(string parentName, string childName)
    {
        relation[parentName].push_back(childName);
    }

    void death(string name)
    {
        deathFlag.insert(name);
    }

    vector<string> getInheritanceOrder()
    {
        vector<string> ans;
        dfs(king, ans);
        return ans;
    }

private:
    void dfs(string name, vector<string> &ans)
    {
        if (deathFlag.find(name) == deathFlag.end())
        {
            ans.push_back(name);
        }

        for (auto &child : relation[name])
        {
            dfs(child, ans);
        }
    }

private:
    string king;
    unordered_map<string, vector<string>> relation;
    unordered_set<string> deathFlag;
};
// 核心在于这个哈希表设计。。和set 设计。
// 遍历其实很简单。。
class ThroneInheritance
{
public:
    unordered_map<string, vector<string>> mp;
    unordered_set<string> _set;
    string k;
    ThroneInheritance(string kingName) : k(kingName)
    {
    }

    void birth(string parentName, string childName)
    {
        mp[parentName].push_back(childName);
    }

    void death(string name)
    {
        _set.insert(name);
    }

    vector<string> getInheritanceOrder()
    {
        vector<string> res;
        dfs(k, res);
        return res;
    }
    void dfs(string a, vector<string> &res)
    {
        if (_set.find(a) == _set.end())
            res.push_back(a);
        for (string c : mp[a])
            dfs(c, res);
    }
};
//  这道题  考察 散列表的结构设计。。你要记得有这个东西。。。
// 而是遍历。不回头。
// 刷的核心是建立新链接。以前不知道可以这样链接。。建立新的思路。。
// 所以刷不一定非要敲。可以再脑子里 重复这个新的思路。。
unordered_set<string> _set;
unordered_map<string, vector<string>> mp;
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
void dfs(string s, vector<string> &res)
{
    if (_set.find(s) == _set.end())
        res.push_back(s);
    for (string m : mp[s])
        dfs(m, res);
}
// 传这个s 就像root 一样 是整个树的一个起始点。。

class Solution
{

public:
    bool flag;
    bool isValidSequence(TreeNode *root, vector<int> &arr)
    {
        dfs(root, arr, 0);
        return flag;
    }
    void dfs(TreeNode *root, vector<int> &nums, int d)
    {

        if (!root)
            return;
        if (root->val == nums[d])
        {
            d++;
            if (d == nums.size())
                flag = true;
            dfs(root->left, nums, d);
            dfs(root->right, nums, d);
        }
        else
            return;
    }
};