#include <vector>
#include <list>
using namespace std;
int min(int a, int b)
{
  return a < b ? a : b;
};
class Solution
{
public:
  int timeRequiredToBuy(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
      // 遍历计算每个人所需时间
      if (i <= k)
      {
        res += min(tickets[i], tickets[k]);
      }
      else
      {
        res += min(tickets[i], tickets[k] - 1);
      }
    }
    return res;
  }
};

class Solution
{
public:
  int time(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Solutions
{
public:
  int time(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Solution
{
public:
  int time(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Soluntion
{
public:
  int time(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Solution
{
public:
  int time(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Solution
{
public:
  int tme(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class solution
{
public:
  int time(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Solution
{
public:
  int time(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
typedef struct ListNode
{
  int val;
  List next;
} * List;

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

// 方法一：对每个组进行两次遍历
// 思路与算法

// 我们可以从链表的首节点开始进行遍历，并且使用一个计数器 ii，它既表示当前遍历的组数，也表示当前的组最多能包含的节点个数。

// 记当前组的首节点为 \textit{cur}cur，其前驱节点为 \textit{pre}pre，那么我们可以当前组进行最多两次遍历：

// 第一次遍历时，我们的目的是获取当前组包含的节点个数。我们从 \textit{cur}cur 开始，遍历最多不超过 ii 个节点，并记录遍历到的节点个数，记为 \textit{len}len。

// 第二次遍历时，我们的目的是反转当前组包含的节点。如果 \textit{len}len 为偶数，那么我们就需要反转。具体的做法时，我们从 \textit{cur}cur 的后继节点开始遍历，遍历恰好 \textit{len} - 1len−1 个节点，每遍历到一个节点，就将该节点「插入」到 \textit{pre}pre 的后面，这样就能实现对链表的反转，读者也可以参考「206. 反转链表」的官方题解。

// 第三次遍历时，我们的目的是将 \textit{cur}cur 和 \textit{pre}pre 移动到下一个组的首节点以及其前驱节点。如果我们执行了第二次遍历（\textit{len}len 为偶数），那么 \textit{cur}cur 就从组的首节点变成了尾节点，即 \textit{cur}cur 的后继节点就是下一个组的首节点，而 \textit{cur}cur 本身就是下一个组的 \textit{pre}pre。如果我们没有执行第二次遍历，那么就需要将 \textit{pre}pre 和 \textit{cur}cur 分别向后移动 \textit{len}len 个节点。

// 可以发现，如果 \textit{len}len 为偶数，那么只需要执行第一和二次遍历，如果 \textit{len}len 为奇数，那么只需要执行第一和第三次遍历。因此每一个组最多会被遍历两次。

// 当 \textit{cur}cur 移动到空节点时，说明我们处理完了整个链表，此时就完成了遍历。

// 作者：LeetCode-Solution
// 链接：https://leetcode-cn.com/problems/reverse-nodes-in-even-length-groups/solution/fan-zhuan-ou-shu-chang-du-zu-de-jie-dian-owra/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
class Soluntion
{
public:
  int ticket(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Soluntion
{
public:
  int buy(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Solution
{
public:
  int buy(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i <= k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Solution
{
public:
  int buy(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i < k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class solution
{
public:
  int buy(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i < k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
class Solution
{
public:
  int buy(vector<int> &tickets, int k)
  {
    int n = tickets.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (i < k)
        res += min(tickets[i], tickets[k]);
      else
        res += min(tickets[i], tickets[k] - 1);
    }
    return res;
  }
};
// 反转链表。
class Solution
{
public:
  ListNode *reverseList(ListNode *head)
  {
    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr)
    {
      ListNode *next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;
  }
};
class Solution
{
public:
  ListNode *reverse(ListNode *head)
  {
    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr)
    {
      ListNode *next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;
  }
};
// 描述 三个相邻指针的一个关系。。围绕着。。
class solution
{
public:
  ListNode *reverse(ListNode *head)
  {
    ListNode *prev = nullptr;
    // pointer
    ListNode *curr = head;
    while (curr)
    {
      ListNode *next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;
  }
};

ListNode *revese(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *revese(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *revese(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *revese(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverve(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

class Solution
{
public:
  int rob(vector<int> &nums)
  {
    int tmp = 0, max = 0;
    int n = nums.size();
    for (int i = 0; i < 2; i++)
    {
      int j = i;
      while (j < n)
      {
        if (nums[j + 2] <= nums[j + 3])
        {
          tmp += nums[j];
          if (tmp >= max)
            max = tmp;
          if ((j == n - 1) || (j == n - 2))
          {
            tmp = 0;
            break;
          }
          j += 3;
        }
        else
        {
          tmp += nums[j];
          if (tmp >= max)
            max = tmp;
          if ((j == n - 1) || (j == n - 2))
          {
            tmp = 0;
            break;
          }
          j += 2;
        }
      }
    }
    return max;
  }
};
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
ListNode *reverse(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
int buy(vector<int> &t, int k)
{
  int res = 0;
  for (int i = 0; i < t.size(); ++i)
  {
    if (i < k)
      res += min(t[i], t[k]);
    else
      res += min(t[i], t[k] - 1);
  }
  return res;
}
ListNode *reverse(ListNode *root)
{
  ListNode *pre = nullptr;
  ListNode *curr = root;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *root)
{
  ListNode *pre = nullptr;
  ListNode *curr = root;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *root)
{
  ListNode *pre = nullptr;
  ListNode *curr = root;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *root)
{
  ListNode *pre = nullptr;
  ListNode *curr = root;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *root)
{
  ListNode *pre = nullptr;
  ListNode *curr = root;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *root)
{
  ListNode *pre = nullptr;
  ListNode *curr = root;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *root)
{
  ListNode *pre = nullptr;
  ListNode *curr = root;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *root)
{
  ListNode *pre = nullptr;
  ListNode *curr = root;

  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
#include <list>
class Solution
{
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {

    //

    ListNode *head = (ListNode *)malloc(sizeof(struct ListNode));
    ListNode *rear = head;
    while (list1 && list2)
    {
      if (list1->val < list2->val)
      {
        rear->next = list1;
        list1 = list1->next;
      }
      else
      {
        rear->next = list2;
        list2 = list2->next;
      }
      rear = rear->next;
    }
    while (list1)
    {
      rear->next = list1;
    }
    while (list2)
      rear->next = list2;
    return head->next;
  }
};
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;

    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {

    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *curr = t;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = pre;
    pre = curr;
    curr = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{

  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
ListNode *reverse(ListNode *t)
{
  ListNode *pre = nullptr;
  ListNode *cur = t;
  while (cur)
  {
    ListNode *next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}