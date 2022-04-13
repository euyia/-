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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *pre = new ListNode(0, head);
        ListNode *cur = head, *a, *b = head, *ppre;
        int f = k - 1;
        while (f--)
            cur = cur->next;
        head = cur;
        while (b != nullptr)
        {

            ppre = a = pre->next;
            b = a->next;
            while (b != cur->next)
            {
                ListNode *back = b->next;
                b->next = a;
                a = b;
                b = back;
            }
            pre->next->next = b;
            pre->next = a;
            int f = k - 1;
            while (f--)
                b = b->next;

            cur = b;
            pre = ppre;
        }
    }
};
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *pre = new ListNode(0, head);
        ListNode *cur = head, *a, *b = head, *ppre;
        int f = k - 1;
        while (f--)
            cur = cur->next;
        head = cur;

        while (b != nullptr)
        {

            ppre = a = pre->next;
            b = a->next;

            while (b != cur->next)
            {
                ListNode *back = b->next;
                b->next = a;
                a = b;
                b = back;
            }
            pre->next->next = b;
            pre->next = a;
            int f = k - 1;
            while (f--)
                b = b->next;

            cur = b;
            pre = ppre;
        }
        return head;
    }
};
// 你组合的要死要活的。人家直接封装个辅助的reverse函数 。。清晰简单的要死。

class Solution
{
public:
    void reverseListNode(ListNode *start, ListNode *end)
    {
        ListNode *p = start->next;
        start->next = NULL;
        ListNode *stop = end->next;
        while (p && p != stop)
        {
            ListNode *q = p->next;
            p->next = start;
            start = p;
            p = q;
        }
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (!head || !head->next || k == 1)
        {
            return head;
        }
        ListNode *first = new ListNode(0);
        first->next = head;
        ListNode *start = first, *end = first;
        int count = 0;
        while (end)
        {
            end = end->next;
            count++;
            if (!end && count < k)
            {
                break;
            }
            if (end && count == k)
            {
                ListNode *p = end->next;
                ListNode *q = start->next;
                reverseListNode(start->next, end);
                start->next = end;
                q->next = p;
                start = q;
                end = q;
                count = 0;
            }
        }
        return first->next;
    }
};
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *a = head;
        while (a != NULL)
        {

            vector<ListNode *> vec;
            vec.push_back(a);

            bool flag = 0;
            for (int i = 1; i < k; ++i)
            {
                a = (a->next);
                if (a == NULL)
                {
                    flag = 1;
                    break;
                }
                vec.push_back(a);
            }
            if (flag)
            {
                break;
            }

            for (int i = 0; i < k / 2; ++i)
            {
                swap(vec[i]->val, vec[vec.size() - 1 - i]->val);
            }

            a = (a->next);
        }
        return head;
    }
};
// 这个是把指针放到数组里。。然后通过数组上的指针访问链表上的值。。swap对应的链表上的值。。
// 其实作弊了两个地方。。
// 1 只改了值。。2都没动链表本身节点。。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *s = head;
        for (int i = 0; i < k; i++)
        {
            if (s == NULL)
            {
                return head;
            }
            s = s->next;
        }
        // 上面这部分 其实就是相当于去找到left而已。
        // 下面就dfs(left,k);
        ListNode *pre = reverseKGroup(s, k);
        ListNode *cur = head;
        //ListNode* pre = NULL;
        for (int i = 0; i < k; i++)
        {
            ListNode *temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};
// 链表也是树。。可以递归。。。
// 这太强了。。

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *dummy = new ListNode(0, head);
        if (head == nullptr)
            return nullptr;
        ListNode *front = dummy;
        ListNode *rear = head;
        while (rear->next)
        {
            ListNode *cur = rear->next;
            rear->next = cur->next;
            front->next = cur;
            cur->next = rear;
            front = rear;
            rear = rear->next;
        }
        return dummy->next;
    }
};