#include <tuple>
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
  ListNode *reverseEvenLengthGroups(ListNode *head)
  {
    int i = 0;
    ListNode *cur = head;
    ListNode *pre = nullptr;
    while (cur)
    {
      ++i;
      ListNode *it = cur;
      int len = 0;
      for (; len < i && it; ++len)
      {
        it = it->next;
      }

      if (len & 1)
      {
        for (int j = 1; j <= len; ++j)
        {
          tie(pre, cur) = tuple{cur, cur->next};
        }
      }
      else
      {
        for (int j = 1; j < len; ++j)
        {
          tie(pre->next, cur->next, cur->next->next) = tuple{cur->next, cur->next->next, pre->next};
        }
        tie(pre, cur) = tuple{cur, cur->next};
      }
    }
    return head;
  }
};
