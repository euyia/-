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

class Solution
{
public:
    vector<int> pathInZigZagTree(int num)
    {
        int k = num;
        vector<int> res;
        res.push_back(num);
        while (k != 1 && k != 0)
        {
            k = k / 2;
            res.push_back(k);
        }
        if (res.size() < 2)
            return res;

        for (int i = 1; i < res.size() - 1; i += 2)
        {
            int j = res.size() - i;
            int sum = pow(2, j) - 1;
            res[i] = sum - res[i] + pow(2, j - 1);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// 我这个是方向做处理。。然后把它奇偶性避开了。。。。醉了。。
class Solution
{
public:
    vector<int> pathInZigZagTree(int label)
    {
        vector<int> ans;
        while (label)
        {
            ans.push_back(label);
            label >>= 1;
        }
        reverse(ans.begin(), ans.end());
        int l, r, deep = ans.size();
        for (int i = 0; i < deep; i++)
        {
            if ((deep & 1) != (i & 1))
                continue; // 判断第 i 层是否需要修改
            l = (1 << i);
            r = l + l - 1;
            ans[i] = r - ans[i] + l;
        }
        return ans;
    }
};
// 全部都是用位运算。。而且还判断奇偶。。
// 不得不说用位运算 做一次2除 好方便。

// 我那解法。。电脑好走。。人脑不好走啊。
// 这题主要是怎么判断出来 倒数第二行开始 需要翻转。。
// 并不是细节操作。而是逻辑。。从哪里来。
