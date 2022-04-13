#include <string>
using namespace std;
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && s[l] == s[r])
    {
      --l;
      --r;
      ++res;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();

  for (int i = 0; i < 2 * n - 1; i++)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && +a[i] == a[r])
    {
      ++res;
      --l;
      ++r;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l >= 0 && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l >= 0 && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l >= 0 && a[l] == a[r])
    {
      ++res;
      --l;
      ++r;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l >= 0 && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; i++)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      --l;
      ++r;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int left = i / 2, right = i / 2 + i % 2;
    while (left >= 0 && right < n && a[left] == a[right])
    {
      ++res;
      --left;
      ++right;
    }
  }
  return res;
}
int count9(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      --l;
      ++r;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      --l;
      ++r;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++r;
      --l;
      ++res;
    }
  }
  return res;
}
// 2*n-1???????????????????????? i/2
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && i < n && a[l] == a[r])
    {
      ++r;
      ++res;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; i++)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[r] == a[l])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++r;
      ++res;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[r] == a[l])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
#include <vector>

int count(vector<char> &nums)
{
  int n = nums.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = n / 2, r = n / 2 + n % 2;
    while (l >= 0 && r < n && nums[l] == nums[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int res = 0;
  int n = a.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l >= 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string a)
{
  int n = a.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && a[l] == a[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int soso(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int soso(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      --l;
      ++r;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      --l;
      ++r;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l > 0 && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (l > 0 && r < n && s[l] == s[r])
    {
      ++res;
      --l;
      ++r;
    }
  }
  return res;
}
int count(string s)
{
  int res = 0;
  int n = s.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l > 0 && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int res = 0;
  int n = s.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l > 0 && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int res = 0;
  int n = s.size();
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l > 0 && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l > 0 && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}
int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l > 0 && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}

int count(string s)
{
  int n = s.size();
  int res = 0;
  for (int i = 0; i < 2 * n - 1; ++i)
  {
    int l = i / 2, r = i / 2 + i % 2;
    while (r < n && l > 0 && s[l] == s[r])
    {
      ++res;
      ++r;
      --l;
    }
  }
  return res;
}