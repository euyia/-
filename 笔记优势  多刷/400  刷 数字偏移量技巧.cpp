// 以前几乎完全看不懂。
// 现在可以了。
// 就是n-1比较细节。。
// 然后那个for里面。。现在就看的懂了。
// 他i循环的次数 取决于n-1取余之后，相对于len位数的位置。。
// 然后下面循环的本体 每一次 就是偏移的取值。。
// i循环多少次。。下面res 就相应的取到第几位的数字。。
// 非常精彩的循环。。。
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
int find(int n)
{
  int w = 9, len = 1;
  while (n > w * len)
  {
    n -= w * len;
    len += 1;
    w *= 10;
  }
  n -= 1;
  int cur = n / len + w;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur / 10;
  }
  return res;
}
int find(int n)
{
  int wei = 9, len = 1;
  while (n > wei * len)
  {
    n -= wei * len;
    wei *= 10;
    len += 1;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  int wei = 9, len = 1;
  while (n > wei * len)
  {
    n -= wei * len;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > wei * len)
  {
    len += 1;
    wei *= 10;
  }
  // 前缀和的反向操作
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  // %获取偏移量。。然后
  // 下面两行是实现偏移。。
  return res;
}
// n%len 就是偏移量。。他相对于len的位数的距离。。
// 下面对应的做次数的偏移。。
// 数字偏移的方式 也是套路。。要熟悉。
// 不断尝试去想象。。不然刷再多。。。
int find(int n)
{
  long wei = 9, len = 1;
  while (n > wei * len)
  {
    n -= wei * len;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > wei * len)
  {
    n -= wei * len;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > wei * len)
  {
    n -= wei * len;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > len * wei)
  {
    n -= len * wei;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > len * wei)
  {
    n -= len * wei;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > len * wei)
  {
    n -= len * wei;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > len * wei)
  {
    n -= len * wei;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > len * wei)
  {
    n -= len * wei;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > len * wei)
  {
    n -= len * wei;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > len * wei)
  {
    n -= len * wei;
    len += 1;
    wei *= 10;
  }
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  for (int i = n % len; i < len; ++i)
  {
    res = cur % 10;
    cur /= 10;
  }
  return res;
}
int find(int n)
{
  long wei = 9, len = 1;
  while (n > len * wei)
  {
    n -= len * wei;
    len += 1;
    wei *= 10;
  }
  // 这个是前缀和拆解。逆操作。
  n -= 1;
  int cur = n / len + wei;
  int res = 0;
  // 这个是获取偏移量的方式 就是取余。
  for (int i = n % len; i < len; ++i)
  {
    // 下面两个是做偏移。然后获取对应偏移量的值
    res = cur % 10;
    cur /= 10;
  }
  return res;
}