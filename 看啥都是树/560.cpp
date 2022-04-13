#include <vector>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{
  int n = nums.size();
  int res = 0;
  int ret = 0;
  for (int i = 0; i < n; i++)
  {
    res = nums[i];
    for (int j = i + 1; j < n; j++)
    {
      if (res < k)
        res += nums[j];
      if (res > k)
        break;
      if (res == k)
      {
        ++ret;
        break;
      }
    }
  }
  return ret;
}
class Solution
{
public:
  long long cnt = 0;
  long long maxRunTime(int n, vector<int> &nums)
  {
    long long res;
    for (int n : nums)
      res += n;
    cnt = res / n;
    return cnt;
  }
};
class Solution
{
public:
  long long cnt = 0;
  long long maxRunTime(int n, vector<int> &nums)
  {
    sort(nums.rbegin(), nums.rend());
    bool flag = false;
    while (!flag)
    {

      for (int i = 0; i < n; ++i)
      {
        nums[i] -= 1;
        if (nums[i] < 0)
        {
          flag = true;
          break;
        }
      }
      if (flag)
        return cnt;
      else
        cnt++;
      sort(nums.rbegin(), nums.rend());
    }
    return cnt;
  }
};

class Solution
{
public:
  int minMoves(int target, int cnt)
  {
    vector<pair<int, int>> dp(target + 1);
    dp[1].first = 1;
    dp[1].second = cnt;
    for (int i = 0; i < target + 1; ++i)
    {
      if (i / 2 > 0 && dp[i / 2].second > 0)
      {
        if (dp[i - 1].first > dp[i / 2].first)
        {
          dp[i].first = dp[i / 2].first;
          dp[i].second = dp[i / 2].second - 1;
        }
      }
      else
      {
        dp[i].first = dp[i - 1].first + 1;
        dp[i].second = dp[i - 1].second;
      }
    }
    return dp[target].first;
  }
};