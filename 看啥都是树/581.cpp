#include <algorithm>
#include <vector>
using namespace std;
int find(vector<int> &nums)
{

  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0;
  int j = nums.size() - 1;
  while (i < nums.size())
  {
    if (nums[i] == res[i])
      i++;
  }
  if (i == nums.size() - 1)
    return 0;
  while (j >= 0)
  {
    if (nums[j] == res[j])
      j--;
  }
  return (j - i + 1);
}
int find(vector<int> &nums)
{
  vector<int> res(nums);
  int n = nums.size();
  int i = 0, j = n - 1;
  sort(res.begin(), res.end());

  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return (j - i + 1) > 0 ? j - i + 1 : 0;
}
int find(vector<int> &nums)
{
  vector<int> res(nums);
  int n = nums.size();
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j >= 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (nums[i] == res[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (nums[j] == res[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  vector<int> res(nums);
  int n = nums.size();
  sort(res.begin(), res.end());
  int i, j;
  i = 0;
  j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  vector<int> res(nums);
  int n = nums.size();
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
int find(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res(nums);
  sort(res.begin(), res.end());
  int i = 0, j = n - 1;
  while (i < n)
  {
    if (res[i] == nums[i])
      ++i;
    else
      break;
  }
  if (i == n)
    return 0;
  while (j > 0)
  {
    if (res[j] == nums[j])
      --j;
    else
      break;
  }
  return j - i + 1;
}
