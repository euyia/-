#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
  }
};

int majorityElement(vector<int> &nums)
{
  int n = nums.size();
  vector<int> a;
  for (int i = 0; i < n; i++)
    a[nums[i]] = 0;
  for (int i = 0; i < n; i++)
    a[nums[i]]++;
  int tmp = 0;
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (tmp < a[nums[i]])
      tmp = a[nums[i]];
    j = i;
  }
  return j;
}
// >??????????????????????
vector<int> findDisappearedNumbers(vector<int> &nums)
{
  int n = nums.size();
  vector<int> res;
  sort(nums.begin(), nums.end());
  int k = 1;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] != k)
    {
      res.push_back(k);
      i--;
    }
    else
      k++;
  }
  return res;
}