#include <vector>
using namespace std;
vector<int> find(vector<int> &nums)
{
  int n = nums.size();
  for (auto &num : nums)
  {
    int x = (num - 1) % n;
    nums[x] += n;
  }
  vector<int> res;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] <= n)
      res.push_back(i + 1);
  }
  return res;
}
// ????????????