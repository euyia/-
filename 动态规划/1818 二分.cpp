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
// 两个数组的差值和。。替换其中的一个 得到最小的。
// 他也并没有找出来具体替换那个。
// 关键是 他抽象了。。这个变化前后的差别。。
// 能够度量出来。就是原来的差-改变之后的差的 差别最大化。。
// 这里第二个遍历 其实就在拆高压线了。就是logn*n的复杂度了。。
class Solution
{
public:
    int minAbsoluteSumDiff(vector<int> &a, vector<int> &b)
    {
        int mod = 1e9 + 7, maxt = 0, res = 0;
        for (int i = 0; i < a.size(); ++i)
        {
            res += (abs(a[i] - b[i]));
            res %= mod;
        }
        vector<int> cp(a);
        sort(cp.begin(), cp.end());
        for (int i = 0; i < b.size(); ++i)
        {
            int v = b[i];
            auto it = lower_bound(cp.begin(), cp.end(), v);
            if (it != cp.end())
                maxt = max(maxt, abs(b[i] - a[i]) - abs(*it - b[i]));
            if (it != cp.begin())
                maxt = max(maxt, abs(b[i] - a[i]) - abs(*(--it) - b[i]));
        }
        return (res - maxt + mod) % mod;
    }
};