#include <vector>
#include <algorithm>
using namespace std;
int leastInterval(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (int task : tasks)
    ++res[task - 'a'];
  int count = 1;
  sort(res.begin(), res.end(), [](int x, int y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count = 1;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count = 1;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count = 1;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int lease(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count = 1;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'A'];
  int count = 1;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) & (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count = 1;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count = 1;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  int count;
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) & (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.begin(), res.end(), [](int &x, int &y)
       { return x > y; });
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int issame(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int issame(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return (len, count + (n + 1) * (res[0] - 1));
}
int insame(vector<char> &tasks, int n)
{
  vector<int> res;
  int len = tasks.size();
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int issame(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int issame(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int issame(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int cnt = 1;
  while (cnt < 26 && res[cnt] == res[0])
    ++cnt;
  return max(len, cnt + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int cnt = 1;
  while (cnt < 26 && res[cnt] == res[0])
    ++cnt;
  return max(len, cnt + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int cnt = 1;
  while (cnt < 26 && res[cnt] == res[0])
    ++cnt;
  return max(len, cnt + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int cnt = 1;
  while (cnt < 26 && res[cnt] == res[0])
    ++cnt;
  return max(len, cnt + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int cnt = 1;
  while (cnt < 26 && res[cnt] == res[0])
    ++cnt;
  return max(len, cnt + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int cnt = 1;
  while (cnt < 26 && res[cnt] == res[0])
    ++cnt;
  return max(len, cnt + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int cnt = 1;
  while (cnt < 26 && res[cnt] == res[0])
    ++cnt;
  return max(len, cnt + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 & res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char task : tasks)
    ++res[task - 'A'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(25);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(25);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(25);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &nums, int n)
{
  int len = nums.size();
  vector<int> res(26);
  for (char n : nums)
    ++res[n - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
int least(vector<char> &tasks, int n)
{
  int len = tasks.size();
  vector<int> res(26);
  for (char t : tasks)
    ++res[t - 'a'];
  sort(res.rbegin(), res.rend());
  int count = 1;
  while (count < 26 && res[count] == res[0])
    ++count;
  return max(len, count + (n + 1) * (res[0] - 1));
}
