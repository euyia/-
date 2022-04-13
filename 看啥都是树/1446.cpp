#include <string>
using namespace std;
int maxPower(string s)
{
  int n = s.size();
  int res = 0;
  int count = 0;
  for (int i = 1; i < n + 1; i++)
  {
    if (s[i] == s[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 0;
  }
}
int maxPower(string s)
{
  int n = s.size();
  int res = 0;
  int count = 1;
  for (int i = 1; i < n + 1; i++)
  {
    if (s[i] == s[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  if (count == 1)
    return 0;
  else
    return res;
}
int maxpower(string a)
{
  int n = a.size();
  int res = 1, count = 1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int n = a.size();
  int res = 1, count = 1;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] == a[i + 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int n = a.size();
  int res = 1, count = 1;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] == a[i + 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int n = a.size();
  int count = 1, res = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int n = a.size();
  int res = 1, count = 1;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] == a[i + 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int n = a.size();
  int res = 1, count = 1;
  for (int i = 1; i < a.length(); i++)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int n = a.size();
  int res = 1, count = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int n = a.size();
  int res = 1, count = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
    }
    else
    {
      res = max(res, count);
      count = 1;
    }
  }

  return res > count ? res : count;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int naxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      count++;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(count, res);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 0; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else

      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
      res = max(res, count);
    }
    else
      count = 1;
  }
  return res;
}
int maxpower(string a)
{
  int res = 1, count = 1;
  for (int i = 1; i < a.size(); ++i)
  {
    if (a[i] == a[i - 1])
    {
      ++count;
    res = (res, count);
    }
    else
    {
      count = 1;
    }
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=(res,count);

    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=0;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count=1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count=1;
  }
  return res;
}
int maxpower(string a)
{
  int res=1,count =1;
  for(int i=1;i<a.size();++i)
  {
    if(a[i]==a[i-1])
    {
      ++count;
      res=max(res,count);
    }
    else
    count =1;
  }
  return res;
}