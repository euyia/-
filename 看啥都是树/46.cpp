#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void backtrack(vector<vector<int>> &res, vector<int> &output, int first, int len)
    {
        // 所有数都填完了
        if (first == len)
        {
            res.emplace_back(output);
            return;
        }
        for (int i = first; i < len; ++i)
        {
            // 动态维护数组
            swap(output[i], output[first]);
            // 继续递归填下一个数
            backtrack(res, output, first + 1, len);
            // 撤销操作
            swap(output[i], output[first]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;
        backtrack(res, nums, 0, (int)nums.size());
        return res;
    }
};
//  就是学前人的套路啊。。
// 从1 进去
// 套路 递归。
// 最好的逃离这个层次的方式 就是往上爬到听不到 底下的嘈杂。
// 我现在理解是 这个swap 就是切换入口。。。。第一个进入的入口。。
// 因为 是从不同的位置 作为入口 。然后要全排列。。所以每个位置都要作为子入口。。
// 其实就是选择好一个入口之后 就一直走到底。然后退回来 换个入口 继续走走到底。。
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int> &nums, vector<bool> &used)
    {
        // 此时说明找到了一组
        if (path.size() == nums.size())
        {
            result.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (used[i] == true)
                continue; // path里已经收录的元素，直接跳过
            used[i] = true;
            path.push_back(nums[i]);
            backtracking(nums, used);
            path.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        result.clear();
        path.clear();
        vector<bool> used(nums.size(), false);
        backtracking(nums, used);
        return result;
    }
};
// 这是那个小天才总结的。。和上面这个人写法一样的。
// void backtrack(int[] nums, LinkedList<Integer> track) {
// if (track.size() == nums.length) {
//  res.add(new LinkedList(track));
// return;
//  }
// for (int i = 0; i < nums.length; i++) {
// if (track.contains(nums[i]))
// continue;
//  track.add(nums[i]);
// // 进⼊下⼀层决策树
//  backtrack(nums, track);
//  track.removeLast();
//  }
// /* 提取出 N 叉树遍历框架 */
// void backtrack(int[] nums, LinkedList<Integer> track) {
// for (int i = 0; i < nums.length; i++) {
//  backtrack(nums, track);
// }
// ⼆叉树框架可以扩展为 N 叉树的遍历框架：
/* 基本的 N 叉树节点 */
class TreeNode
{
public:
    int val;
    TreeNode *children[100];
};
void traverse(TreeNode *root)
{
    for (TreeNode *child : root->children)
        traverse(child);
}
void traverse(TreeNode *root)
{
    for (TreeNode *child : root->children)
        traverse(child);
}
void traverse(TreeNode *root)
{
    for (TreeNode *child : root->children)
        traverse(child);
}
// 这个是理解核心。。
class Solution
{
private:
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> visited;
    vector<int> &ret;

    vector<vector<int>> premute(vector<int> &nums)
    {
        visited.resize(nums.size(), false);
        for (int n : nums)
            ret.push_back(n);
        dfs();
        return res;
    }
    void dfs()
    {
        if (path.size() == ret.size())
        {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < ret.size(); ++i)
        {
            if (visited[i])
                continue;
            visited[i] = true;
            path.push_back(ret[i]);
            dfs();
            path.pop_back();
            visited[i] = false;
        }
    }
};
class Solution
{
private:
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> visited;

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        visited.resize(nums.size(), false);
        dfs(nums);
        return res;
    }
    void dfs(vector<int> &nums)
    {
        if (path.size() == nums.size())
        {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (visited[i])
                continue;
            visited[i] = true;
            path.emplace_back(nums[i]);
            dfs(nums);
            path.pop_back();
            visited[i] = false;
        }
    }
};
class Solution
{
private:
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> visited;

public:
    void dfs(vector<int> &nums)
    {
        if (path.size() == nums.size())
        {
            res.emplace_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (visited[i])
                continue;
            visited[i] = true;
            path.emplace_back(nums[i]);
            dfs(nums);
            path.pop_back();
            visited[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        visited.resize(nums.size(), false);
        dfs(nums);
        return res;
    }
};
class Solution
{
private:
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> visited;

public:
    void dfs(vector<int> &nums)
    {
        if (path.size() == nums.size())
        {
            res.emplace_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (visited[i])
                continue;
            visited[i] = true;
            path.push_back(nums[i]);
            dfs(nums);
            path.pop_back();
            visited[i] = false;
        }
    };
    vector<vector<int>> permute(vector<int> &nums)
    {
        visited.resize(nums.size(), false);
        dfs(nums);
        return res;
    }
};
class Solution
{
private:
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> visited;

public:
    void dfs(vector<int> &nums)
    {
        if (path.size() == nums.size())
        {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (visited[i])
                continue;
            visited[i] = true;
            path.push_back(nums[i]);
            dfs(nums);
            path.pop_back();
            visited[i] = false;
        }
    };
    vector<vector<int>> permute(vector<int> &nums)
    {
        visited.resize(nums.size(), false);
        dfs(nums);
        return res;
    }
};
class Solution
{
private:
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> visited;

public:
    void dfs(vector<int> &nums)
    {
        if (path.size() == nums.size())
        {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (visited[i])
                continue;
            visited[i] = true;
            path.push_back(nums[i]);
            dfs(nums);
            path.pop_back();
            visited[i] = false;
        }
    };
    vector<vector<int>> permute(vector<int> &nums)
    {
        visited.resize(nums.size(), false);
        dfs(nums);
        return res;
    }
};
class Solution
{
    private:
    vector<vector<int>>res;
    vector<int>path;
    vector<bool>visited;
    public:
    void dfs(vector<int>&nums)
    {
        if(path.size()==nums.size())
        {
            res.push_back(path);
            return ;
        }
        for(int i=0;i<nums.size();++i)
        {
            if(visited[i])
            continue;
            // continue continue continue continue continue continue 
            // continue continue continue continue continue continue
            visited[i]=true;
            path.push_back(nums[i]);
            dfs(nums);
            path.pop_back();
            visited[i]=false;
        }
    };
    vector<vector<int>>permute(vector<int>&nums)
    {
        visited.resize(nums.size(),false);
        dfs(nums);
        return res;
    }
};