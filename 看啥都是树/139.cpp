#include <vector>
#include <string>
#include <set>
using namespace std;
bool wordBreak(string &s, vector<string> &wordDict)
{
  vector<bool> dp(s.size() + 1, false);
  dp[0] = true;
  for (int i = 0; i < s.size(); i++)
  {
    if (!dp[i])
      continue;
    for (auto &word : wordDict)
      if (word.size() + i <= s.size() && s.substr(i, word.size()) == word)
        dp[i + word.size()] = true;
  }
  return dp[s.size()];
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  int t, p, q;
  vector<int> res;
  for (int i = 0; i < n; ++i)
    if (nums[i] != 0)
    {
      t = nums[i] * 100;
      for (int j = 0; j < n; ++j)
        if (j != i)
        {
          p = nums[j] * 10;
          for (int z = 0; z < n; ++z)
            if (z != j && z != i && !nums[z] % 2)
            {
              q = nums[z];
              res.emplace_back(t + p + q);
            }
        }
    }
  sort(res.begin(), res.end());
  vector<int> ret;
  ret.push_back(res[0]);
  for (int i = 1; i < res.size(); ++i)
  {
    if (res[i] == res[i - 1])
      ;
    ret.push_back(res[i]);
  }
  return ret;
}

class Solution
{
public:
  vector<int> findEvenNumbers(vector<int> &nums)
  {
    int n = nums.size();
    bool flag = false;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
      if (nums[i] % 2 == 0)
        flag = true;
      if (nums[i] == 0)
        ++count;
    }
    if (count == n)
      return vector<int>();
    if (flag == false)
      return vector<int>();
    int t, p, q;
    set<int> res;
    for (int i = 0; i < n; ++i)
      if (nums[i] != 0)
      {
        t = nums[i] * 100;
        for (int j = 0; j < n; ++j)
          if (j != i)
          {
            p = nums[j] * 10;
            for (int z = 0; z < n; ++z)
              if (z != j && z != i && nums[z] % 2 == 0)
              {
                q = nums[z];
                res.insert(t + p + q);
              }
          }
      }
    vector<int> ret;

    for (int r : res)
      ret.emplace_back(r);
    return ret;
  }
};