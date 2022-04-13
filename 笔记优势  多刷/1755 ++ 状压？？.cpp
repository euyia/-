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
    int minAbsDifference(vector<int> &nums, int goal)
    {
        int n = nums.size();
        int half = n / 2;
        int ls = half, rs = n - half;

        vector<int> lsum(1 << ls, 0);
        int ret = INT_MAX;
        for (int i = 1; i < (1 << ls); i++)
        {
            for (int j = 0; j < ls; j++)
            {
                if ((i & (1 << j)) == 0)
                    continue;
                lsum[i] = lsum[i ^ (1 << j)] + nums[j],
                ret = min(ret, abs(goal - lsum[i]));
                break;
                // 这个break；？？？？？
            }
        }
        // 这种dp求子序列的方式。还是比较陌生。习惯dfs
        // 这种dp的方式还是要习惯下。。感觉和dfs也是类似的。。
        //  之前一个人总结过 dp 和dfs 就是一个从上往下 一个从下往上的区别而已。？？？？
        vector<int> rsum(1 << rs, 0);
        for (int i = 1; i < (1 << rs); i++)
        {
            for (int j = 0; j < rs; j++)
            {
                if ((i & (1 << j)) == 0)
                    continue;
                rsum[i] = rsum[i ^ (1 << j)] + nums[ls + j],
                ret = min(ret, abs(goal - rsum[i]));
                break;
            }
        }
        sort(lsum.begin(), lsum.end());
        sort(rsum.begin(), rsum.end());

        // for (int x : lsum)
        // {
        //     ret = min(ret, abs(goal - x));
        // }
        // for (int x : rsum)
        // {
        //     ret = min(ret, abs(goal - x));
        // }

        // 上面是两个数组 各自分别去求
        int i = 0, j = rsum.size() - 1;
        while (i < lsum.size() && j >= 0)
        {
            int s = lsum[i] + rsum[j];
            ret = min(ret, abs(goal - s));
            if (s > goal)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return ret;
    }
};
// 这个算法理解是很好理解。。就是拆分成两个数组
// 降低时间复杂度。
// 然后把问题转化成求两个数组中的元素匹配。之后 abs 最小的。
// 一个是求子序列。一个是两个合并求和的一个贴近值。
// 主要是卡在这种dp求子序列的方式。以前不用的。
// 但是这里又特别方便。
// 估计要回头去看那个组合  系列题。。
https: //leetcode-cn.com/problems/combination-sum-ii/solution/zu-he-zong-he-ii-by-leetcode-solution/
// 如果短期弄不明白 就先看他是怎么做的。先不想他为什么这么做。。
// 先往前走。看下视频 帮助理解
https://leetcode-cn.com/problems/coin-change-2/