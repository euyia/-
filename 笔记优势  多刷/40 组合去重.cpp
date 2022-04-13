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
// 即使不会。。抄下来也是非常值得。
// 来学 学学 做题的 心态要放好。不然会很不舒服的。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 一步一步的攀登上去。
class Solution
{
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<int> nums;
    int t, cnt;
    vector<vector<int>> combinationSum2(vector<int> &_nums, int _t)
    {
        nums = _nums, t = _t;
        sort(nums.begin(), nums.end());
        dfs(0, 0);
        return res;
    }
    void dfs(int l, int maxt)
    {
        if (maxt == t)
        {
            res.push_back(path);
            return;
        }
        for (int i = l; i < nums.size(); ++i)
        {
            if (i != l && nums[i] == nums[i - 1])
            // 这个去重的手法非常的nice。。
            // 比如三个1 1 1  
            // 他只放第一个1 其他两个1 在这一层就跳过去了。
            // 这个判断语句 巧妙的抓住了需要过滤 和不要过滤的那些数的一个临界点。
                continue;
            if (nums[i] + maxt > t)
                break;
            path.push_back(nums[i]);
            dfs(i + 1, maxt + nums[i]);
            path.pop_back();
        }
    }
};