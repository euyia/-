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
    int minimumTime(string s)
    {
        int l = 0, r = 0, cur = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '1')
                continue;
            // 这边还要再分段找下一个出现i的地方。
            string left = s.substr(l, i + 1);
            int k = s.size() - i - 1;
            string right = s.substr(i, k);
            vector<int> pre(i + 1);
            vector<int> suf(k);
            // 这边自己尝试写的。。。
            // 还想去硬分割。。。
            // 。。。
        }
    }
};
// 人家根本不用分。。就是在原来s上面算。。。
int minimumTime(string s)
{
    int n = s.size();
    vector<int> back(n + 1);
    for (int i = n - 1; i >= 0; i--)
    {
        // 这里为什么有0
        back[i] = s[i] == '0' ? back[i + 1] : min(back[i + 1] + 2, n - i);
    }
    int ans = 0, pre = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            // 这里为什么是1的时候分
            pre = min(pre + 2, i + 1);
            ans = min(ans, pre + back[i + 1]);
        }
    }
    return ans;
}