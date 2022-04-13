#include <vector>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
};

bool isok(ListNode *head)

{
  vector<int> res;
  while (head)
  {
    res.emplace_back(head->val);
    head = head->next;
  }
  for (int i = 0, j = res.size() - 1; i < j; ++i, --j)
  {
    if (res[i] != res[j])
      return false;
  }
  return true;
}
void moveZeroes(vector<int> &nums)
{
  int i, p;
  int n = nums.size();
  for (i = 0; i < n; i++)
    if (i = 0)
      break;
  p = i;
  for (; i < n; i++)
    if (i != 0)
      nums[p++] = nums[i];
  for (; p < n; p++)
    nums[p] = 0;
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
  {
    if (nums[i])

      swap(nums[p++], nums[i]);
  }
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}

void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; ++i)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  if (nums[i])
    swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; ++i)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void change(vector<int> &nums)
{
  int i = 0, p = 0;
  int n = nums.size();
  for (; i < n; i++)
    if (nums[i])
      swap(nums[p++], nums[i]);
}
void soso(vector<int> &nums)
{
  int l = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    if (nums[i])
      swap(nums[l++], nums[i]);
  }
}
void soso(vector<int> &nums)
{
  int l = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++)
    if (nums[i])
      swap(nums[l++], nums[i]);
}
void soso(vector<int> &nums)
{
  int l = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++)
    if (nums[i])
      swap(nums[l++], nums[i]);
}
void soso(vector<int> &nums)
{
  int l = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++)
    if (nums[i])
      swap(nums[l++], nums[i]);
}
bool isPalindrome(ListNode *head)
{
  vector<int> res;
  while (head)
  {
    res.push_back(head->val);
    head = head->next;
  }
  for (int i = 0, j = res.size() - 1; i < j; ++i, --j)
    if (res[i] != res[j])
      return false;
  return true;
}
// 用数组两头检索  很适合回文题。。