#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
vector<string> soso(vector<int> &sore)
{
  int n = sore.size();
  string o[3] = {"1", "2", "3"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; i++)
  {
    arr.emplace_back(-sore[i], i);
  }
  sort(arr.begin(), arr.end());
  vector<string> res(n);
  for (int i = 0; i < n; i++)
  {
    if (i < 3)
      res[arr[i].second] = o[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}

vector<string> soso(vector<int> &nums)
{
  string kk[3] = {"1", "2", "3"};
  vector<pair<int, int>> arr;
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    arr.emplace_back(-nums[i], i);
  }
  sort(arr.begin(), arr.end());
  vector<string> res(n);
  for (int i = 0; i < n; ++i)
  {
    res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"1", "2", "tree"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
    arr.emplace_back(-nums[i], i);
  vector<string> res(n);
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"2", "2", "22"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; i++)
    arr.emplace_back(-nums[i], i);
  vector<string> res;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"1", "2", "333"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
    arr.emplace_back(-nums[i], i);
  vector<string> res;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"one", "two", "three"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
  {
    arr.emplace_back(-nums[i], i);
  }
  vector<string> res;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"one", "two", "three"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
    arr.emplace_back(-nums[i], i);
  vector<string> res;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"one", "two", "three"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
  {
    arr.emplace_back(-nums[i], i);
  }
  vector<string> res;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"ont", "two", "three"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
    arr.emplace_back(-nums[i], i);
  vector<string> res;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"one", "two", "three"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
    arr.emplace_back(-nums[i], i);
  vector<string> res;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"i", "to", "truee"};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
  {
    arr.emplace_back(-nums[i], i);
  }
  vector<string> res(n);
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"", "", ""};
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; ++i)
  {
    arr.emplace_back(-nums[i], i);
  }
  sort(arr.begin(), arr.end());
  vector<string> res;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      res[arr[i].second] = kk[i];
    else
      res[arr[i].second] = to_string(i + 1);
  }
  return res;
}
vector<string> soso(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"", "", ""};
  vector<pair<int, int>> res;
  for (int i = 0; i < n; ++i)
    res.push_back({-nums[i], i});
  sort(res.begin(), res.end());
  vector<string> arr;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      arr[res[i].second] = kk[i];
    else
      arr[res[i].second] = to_string(i + 1);
  }
  return arr;
}
vector<string> sosos(vector<int> &nums)
{
  int n = nums.size();
  string kk[3] = {"", "", ""};
  vector<pair<int, int>> res;
  for (int i = 0; i < n; ++i)
    res.push_back({nums[i], i});
  sort(res.rbegin(), res.rend());
  vector<string> arr;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      arr[res[i].second] = kk[i];
    else
      arr[res[i].second] = to_string(i + 1);
  }
  return arr;
}
vector<string> soso(vector<int> &num)
{
  vector<pair<int, int>> res;
  int n = num.size();
  for (int i = 0; i < n; ++i)
    res.push_back({num[i], i});
  string kk[3] = {"", "", ""};
  sort(res.rbegin(), res.rend());
  vector<string> arr;
  for (int i = 0; i < n; ++i)
  {
    if (i < 3)
      arr[res[i].second] = kk[i];
    else
      arr[res[i].second] = to_string(i + 1);
  }
  return arr;
}