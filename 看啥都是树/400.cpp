class Solution
{
public:
  int findNthDigit(int n)
  {
    int len = 1, weigh = 1;                /* len表示当前数(十进制)的位数, weigh表示当前位的权重(10^i)...  */
    while (n > (long long)9 * weigh * len) /* 转换成long long, 防止整型溢出 */
    {
      n -= 9 * weigh * len;
      len++;
      weigh *= 10;
    }
    int curNum = (n - 1) / len + weigh; // curNum是含有所找digit的那个数, 整个数列的第一个数是1
    int resDigit = 0;
    for (int i = (n - 1) % len; i < len; i++) // 从低位向高位移动扫描, 根据离末位的偏移量找到所找的数字
    {
      resDigit = curNum % 10;
      curNum /= 10;
    }
    return resDigit;
  }
};

int findNthDigit(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int resDigit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    resDigit = curnum % 10;
    curnum /= 10;
  }
  return resDigit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum / 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    weight *= 10;
    len++;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnums = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnums % 10;
    curnums /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= weight * 9 * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnums = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnums % 10;
    curnums /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnums = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnums % 10;
    curnums /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight & len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int curnum = (n - 1) / len + weight;
  int degit = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    degit = curnum % 10;
    degit = curnum /= 10;
  }
  return degit;
}
int find(int n)
{
  int len = 1, weight = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; i++)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
//  数字隐含的特征。。直到的越多。。解题越容易
int soso(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int soso(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int soso(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int soso(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * len * weight;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) / len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * len * weight)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int weight = 1, len = 1;
  while (n > (long long)9 * weight * len)
  {
    n -= 9 * weight * len;
    len++;
    weight *= 10;
  }
  int cur = (n - 1) / len + weight;
  int res = 0;
  for (int i = (n - 1) % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}