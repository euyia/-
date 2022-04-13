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
// 青蛙跳台 最小次数。
// 更多是套路的见识吧。。。这个真没什么有用的框架。。
// 和套路的品。。
//
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int start = 0;
        int end = 1;
        int n = nums.size();
        int cnt = 0;
        while (end < n)
        {
            int maxt = 0;
            for (int i = start; i < end; ++i)
            {
                maxt = max(maxt, i + nums[i]);
            }
            start = end;
            end = maxt + 1;
            // 这个end 和start的迭代 。。是否加1 这种细节要模拟场景去想象的。
            cnt++;
        }
        return cnt;
    }
};
// 这题主要是每次跳跃。。都把能涉及的范围框起来。。然后下次再迭代计算最大范围。
// dp感觉更多的是拓宽见识。。
// 做个100 题然后就可以去看下理论升华下。
// 更多的是思路。。思维模式的建立。
// 是一种巧用力。