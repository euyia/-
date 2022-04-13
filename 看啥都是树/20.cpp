#include <unordered_map>
#include <string>
#include <stack>
#include <vector>
using namespace std;
#define pcc unordered_map<char, char>
class Solution
{
public:
  bool isValid(string s)
  {
    int n = s.size();
    if (n % 2 == 1)
      return false;

    pcc mp =
        {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };
    stack<char> res;
    for (char k : s)
    {
      if (mp.count(k))
      {
        if (res.empty() || mp[k] != res.top())
          return false;
        res.pop();
      }
      else
        res.push(k);
    }
    return res.empty();
  }
};
//  有效 其实隐含了一个条件。。就是先来的后匹配。后来的先匹配。才是有效的。。
// 比较不习惯的是左括号 push  右括号 匹配。 分开的方式。。分别处理。
// 题目虽然标的是简单。。但是自己不会 而且很经典 就要刷。~~~
// 分类也比较多。。左括号比较多 右括号比较多 左右括号不匹配。。。都是错误。。都要考虑。
bool isvalid(string s)
{
  if (s.size() % 2 == 1)
    return false;
  pcc mp =
      {
          {')', '('},
          {'}', '{'},
          {']', '['},
      };
  vector<int> res;
  for (char k : s)
  {
    if (mp.count(k))
    {
      if (!res.empty() || res.back() != mp[k])
        return false;
      res.pop_back();
    }
    res.push_back(k);
  }
  return res.empty();
}
bool isvalid(string s)
{
  if (s.size() % 2 == 1)
    return false;
  pcc mp =
      {
          {')', '('},
          {'}', '{'},
          {']', '['},
      };
  stack<int> res;
  for (char k : s)
  {
    if (mp.count(k))
    {
      if (res.empty() || res.top() != mp[k])
        return false;
      res.pop();
    }
    res.push(k);
  }
  return res.empty();
}
bool isvalid(string s)
{
  if (s.size() % 2 == 1)
    return false;
  pcc mp =
      {
          {')', '('},
          {'}', '{'},
          {']', '['},
      };
  vector<int> res;
  for (char k : s)
  {
    if (mp.count(k))
    {
      if (res.empty() || res.back() != mp[k])
        return false;
      res.pop_back();
    }
    res.push_back(k);
  }
  return res.empty();
}
bool isvalid(string s)
{
  if (s.size() % 2 == 1)
    return false;
  pcc mp =
      {
          {')', '('},
          {'}', '{'},
          {']', '['},
      };
  vector<int> res;
  for (char k : s)
  {
    if (mp.count(k))
    {
      if (res.empty() || res.back() != mp[k])
        return false;
      res.pop_back();
    }
    res.push_back(k);
  }
  return res.empty();
}
bool isvalid(string s)
{
  if (s.size() % 2 == 1)
    return false;
  pcc mp =
      {
          {')', '('},
          {'}', '{'},
          {']', '['},
      };
  stack<int> res;
  for (char k : s)
  {
    if (mp.count(k))
    {
      if (res.empty() || res.top() != mp[k])

        return false;

      res.pop();
    }
    res.push(k);
  }
  return res.empty();
}
bool isvalid(string s)
{
  if (s.size() % 2 == 1)
    return false;
  pcc mp =
      {
          {')', '('},
          {'}', '{'},
          {']', '['},
      };
  stack<int> res;
  for (char k : s)
  {
    if (mp.count(k))
    {
      if (res.empty() || res.top() != mp[k])
        return false;
      res.pop();
    }
    res.push(k);
  }
  return res.empty();
}
bool isvalid(string s)
{
  if (s.size() % 2 == 1)
    return false;
  pcc mp =
      {
          {')', '('},
          {']', '['},
          {'}', '{'},
      };
  stack<int> res;
  for (char k : s)
  {
    if (mp.count(k))
    {
      if (res.empty() || res.top() != mp[k])
        return false;
      res.pop();
    }
    res.push(k);
  }
  return res.empty();
}
bool isvalid(string s)
{
  if (s.size() % 2 == 1)
    return false;
  pcc mp =
      {
          {')', '('},
          {']', '['},
          {'}', '{'},
      };
  stack<int> res;
  for (char k : s)
  {
    if (mp.count(k))
    {
      if (res.empty() || res.top() != mp[k])
        return false;
      res.pop();
    }
    res.push(k);
  }
  return res.empty();
}