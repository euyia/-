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
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *dummy = new ListNode(0, head);

        ListNode *a = dummy, *b = head;
        int k = left - 1;
        while (k--)
            a = a->next;
        while (right--)
            b = b->next;
        ListNode *c = a->next;
        while (c->next != b)
        {
            ListNode *d = c->next;
            c->next = c->next->next;
            d->next = a->next;
            a->next = d;
        }
        return dummy->next;
    }
};
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *a = dummy, *b = head;
    int k = left - 1;
    while (k--)
        a = a->next;
    while (right--)
        b = b->next;
    ListNode *pre = a->next;
    while (pre->next != b)
    {
        ListNode *d = pre->next;
        pre->next = d->next;
        d->next = a->next;
        a->next = d;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *rear = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        rear = rear->next;
    ListNode *cur = front->next;
    while (cur->next != rear)
    {
        ListNode *next = cur->next;
        cur->next = next->next;
        next->next = front->next;
        front->next = next;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
// rear 就是一直移动的最前节点。front 和back分别表示要翻转的链表的前驱结点和后置节点
// cur 就是要被拿到前面插入的那个 会随着rear移动 一直变化飞来飞去的节点。。

ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    int k = left - 1;
    while (k--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int left, int right)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    left--;
    while (left--)
        front = front->next;
    while (right--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int l, int r)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    l--;
    while (l--)
        front = front->next;
    while (r--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int l, int r)
{
    ListNode *dummy = new ListNode(0, head), *front = dummy, *back = head;
    l--;
    while (l--)
        front = front->next;
    while (r--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int l, int r)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *front = dummy, *back = head;
    l--;
    while (l--)
        front = front->next;
    while (r--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int l, int r)
{
    ListNode *dummy = new ListNode(0, head),
             *front = dummy, *back = head;
    l--;
    while (l--)
        front = front->next;
    while (r--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int l, int r)
{
    ListNode *dummy = new ListNode(0, head),
             *front = dummy, *back = head;
    l--;
    while (l--)
        front = front->next;
    while (r--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
ListNode *soso(ListNode *head, int l, int r)
{
    ListNode *dummy = new ListNode(0, head),
             *front = dummy, *back = head;
    l--;
    while (l--)
        front = front->next;
    while (r--)
        back = back->next;
    ListNode *rear = front->next;
    while (rear->next != back)
    {
        ListNode *cur = rear->next;
        rear->next = cur->next;
        cur->next = front->next;
        front->next = cur;
    }
    return dummy->next;
}
