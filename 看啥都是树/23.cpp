#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
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

// =============z===========

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        int n = lists.size();
        if (!n)
            return nullptr;
        if ((n == 1) && lists[0] == nullptr)
            return nullptr;
        ListNode *res = new ListNode(0);
        ListNode *rear = res;
        vector<int> ret;

        for (int i = 0; i < n; ++i)
        {
            if (lists[i] != nullptr)
            {

                ret.emplace_back(lists[i]->val);
                while (lists[i]->next)
                {
                    lists[i] = lists[i]->next;
                    ret.emplace_back(lists[i]->val);
                }
            }
        }
        sort(ret.begin(), ret.end());
        for (int i = 0; i < ret.size(); ++i)
        {
            ListNode *tmp = new ListNode(ret[i]);
            rear->next = tmp;
            rear = rear->next;
        }
        return res->next;
    }
};
// 取巧的。。把人家转成数组  合并之后 又转成链表。。但是速度很快。。。。比正规做法还快。。
// 也是有些细节的。。现在回想 当时也挺厉害的。