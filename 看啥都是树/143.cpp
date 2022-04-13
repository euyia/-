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
class Solution
{
public:
    void reorderList(ListNode *head)
    {
        if (head->next == nullptr)
            return;
        deque<ListNode *> q;
        ListNode *a = head, *b = head;
        while (a)
        {
            q.push_back(a);
            ListNode *c = a;
            a = a->next;
            c->next = nullptr;
            //  这边重置next域。。。非常奈斯
        }
        q.pop_front();

        while (!q.empty())
        {
            b->next = q.back();
            q.pop_back();
            if (q.empty())
                break;
            b = b->next;
            b->next = q.front();
            q.pop_front();
            b = b->next;
        }
    }
};
class Solution
{
public:
    void reorderList(ListNode *head)
    {
        if (head == nullptr)
        {
            return;
        }
        vector<ListNode *> vec;
        ListNode *node = head;
        while (node != nullptr)
        {
            vec.emplace_back(node);
            node = node->next;
        }
        int i = 0, j = vec.size() - 1;
        while (i < j)
        {
            vec[i]->next = vec[j];
            i++;
            if (i == j)
            {
                break;
            }
            vec[j]->next = vec[i];
            j--;
        }
        vec[i]->next = nullptr;
    }
};

void soso(ListNode *head)
{
    vector<ListNode *> res;
    ListNode *rear = head;
    while (rear)
    {
        res.push_back(rear);
        rear = rear->next;
    }
    int i = 0, j = res.size() - 1;
    while (i < j)
    {
        res[i]->next = res[j];
        ++i;
        if (i == j)
            break;
        res[j]->next = res[i];
        --j;
    }
    res[j]->next = nullptr;
}
//  官方这个写法更加简洁 有系统。。
// 而且数组比deque好。。我套。。。原来数组可以如此。。
// deque 和数组 都可以实现双向取。。
void sosos(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int i = 0, j = res.size() - 1;
    while (i < j)
    {
        res[i]->next = res[j];
        ++i;
        if (i == j)
            break;
        res[j]->next = res[i];
        --j;
    }
    res[j]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int i = 0, j = res.size() - 1;
    while (i < j)
    {
        res[i]->next = res[j];
        ++i;
        if (i == j)
            break;
        res[j]->next = res[i];
        --j;
    }
    res[j]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int l = 0, r = res.size() - 1;
    while (l < r)
    {
        res[l]->next = res[r];
        ++l;
        if (l == r)
            break;
        res[r]->next = res[l];
        --r;
    }
    res[r]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int l = 0, r = res.size() - 1;
    while (l < r)
    {
        res[l]->next = res[r];
        ++l;
        if (l == r)
            break;
        res[r]->next = res[l];
        --r;
    }
    res[r]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int l = 0, r = res.size() - 1;
    while (l < r)
    {
        res[l]->next = res[r];
        ++l;
        if (l == r)
            break;
        res[r]->next = res[l];
        --r;
    }
    res[r]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int l = 0, r = res.size() - 1;
    while (l < r)
    {
        res[l]->next = res[r];
        ++l;
        if (l == r)
            break;
        res[r]->next = res[l];
        --r;
    }
    res[l]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int l = 0, r = res.size() - 1;
    while (l < r)
    {
        res[l]->next = res[r];
        ++l;
        if (r == l)
            break;
        res[r]->next = res[l];
        --r;
    }
    res[l]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int l = 0, r = res.size() - 1;
    while (l < r)
    {
        res[l]->next = res[r];
        ++l;
        if (l == r)
            break;
        res[r]->next = res[l];
        --r;
    }
    res[l]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int l = 0, r = res.size() - 1;
    while (l < r)
    {
        res[l]->next = res[r];
        ++l;
        if (l == r)
            break;
        res[r]->next = res[l];
        --r;
    }
    res[l]->next = nullptr;
}
void soso(ListNode *head)
{
    vector<ListNode *> res;
    while (head)
    {
        res.push_back(head);
        head = head->next;
    }
    int r = res.size() - 1, l = 0;
    while (l < r)
    {
        res[l]->next = res[r];
        ++l;
        if (l == r)
            break;
        res[r]->next = res[l];
        --r;
    }
    res[l]->next = nullptr;
}