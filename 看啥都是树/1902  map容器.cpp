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
// 这题 map 容器使用。。
// 这题是   给定二叉搜索树的插入顺序求深度
// map 这个容器被他秀的没边了。

class Solution
{
public:
    int maxDepthBST(vector<int> &order)
    {
        int res = 0;
        map<int, int> m;
        // 里面就是放key对的。。红黑树。用来快速差早。可以说就是二分搜索的api实现。。
        // 实现二分搜索的性能。。可以放到这个里面。
        m[0] = 0;
        for (int i : order)
        {
            auto it = --m.upper_bound(i);
            m[i + 1] = ++it->second;
            res = max(res, it->second);
        }
        return res;
    }
};
// 这题就先这样算过了吧。。
// 主要是。。看不是很懂。。