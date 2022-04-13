#include <all.h>
using namespace std;
int maxDistance(int *colors, int colorsSize)

{
  int ans = 0;
  for (int i = 0; i < colorsSize; i++)
  {
    for (int j = colorsSize - 1; j > i; j--)
    {
      if (colors[i] != colors[j])
      {
        ans = fmax(ans, j - i);
        break;
      }
    }
  }
  return ans;
}
int maxdistance(int *colors, int colorsSize)
{
  int ans = 0;
  for (int i = 0; i < colorsSize; i++)
  {
    for (int j = colorsSize - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        ans = fmax(ans, j - i);
        break;
      }
  }
  return ans;
}
int maxDistance(int *colors, int colorsSize)
{
  int ans = 0;
  for (int i = 0; i < colorsSize; i++)
  {
    for (int j = colorsSize - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        ans = fmax(ans, j - i);
      }
  }
}
// zhege hanshu ???fmax 是啥。。？？
//
int wateringPlants(int *plants, int plantsSize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsSize - 1; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}

// 如果它已经不够下一棵树。。这边直接给它转化成已经满的。。然后再加上步数。。。
// 。。牛逼。
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity -= plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i <= plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int *plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i <= plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int *plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int *plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = 0; i <= plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = 0; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {

      capacity -= plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need;
  int i;
  for (i = 0; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity -= plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = 0; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int max(int *colors, int colorsize)
{
  int maxn = 0;
  for (int i = 0; i < colorsize; i++)
  {
    for (int j = colorsize - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        maxn = max(maxn, j - i);
        break;
      }
  }
  return maxn;
}
int maxdistance(int *colors, int colorsize)
{
  int maxn = 0;
  for (int i = 0; i < colorsize; i++)
  {
    for (int j = colorsize - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        maxn = max(maxn, j - i);
        break;
      }
  }
  return maxn;
}
int maxdistance(int *colors, int colorsize)
{
  int res = 0;
  for (int i = 0; i < colorsize; i++)
  {
    for (int j = colorsize - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int plantsize, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < plantsize; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int max(int *colors, int colorsize)
{
  int res = 0;
  for (int i = 0; i < colorsize; i++)
  {
    for (int j = colorsize - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int max(int *colors, int colorsize)
{
  int res = 0;
  for (int i = 0; i < colorsize; i++)
  {
    for (int j = colorsize - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int maxn(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int maxditrance(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int maxdistance(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
    }
  }
  return res;
}
int maxdistance(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
    }
  }
  return res;
}
int maxdistance(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
    for (int j = n - 1; j > i; j--)
    {
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
    }
  return res;
}
int water(int *plants, int n, int capacity)

{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return i;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int cappacity)
{
  int k = cappacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (cappacity >= plants[i + 1])
    {
      cappacity -= plants[i + 1];
      need++;
    }
    else
    {
      cappacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int maxn(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(j - i, res);
        break;
      }
  }
  return res;
}
int maxx(int *colors, int n)
{
  int res;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int maxx(int *colors, int n)
{
  int res;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int maxx(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int maxx(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      if (colors[i] != colors[j])
      {
        res = max(j - i, res);
        break;
      }
    }
  }
  return res;
}
int maxn(int *colors, int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
      if (colors[i] != colors[j])
      {
        res = max(res, j - i);
        break;
      }
  }
  return res;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; i++)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int capacity)
{
  int k = capacity;
  int need = 0;
  int i;
  for (i = -1; i < n; ++i)
  {
    if (capacity >= plants[i + 1])
    {
      capacity -= plants[i + 1];
      need++;
    }
    else
    {
      capacity = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *plants, int n, int c)
{
  int k = c;
  int need = 0;
  int i;
  for (i = -1; i < n; ++i)
  {
    if (c >= plants[i + 1])
    {
      c -= plants[i + 1];
      need++;
    }
    else
    {
      c = k - plants[i + 1];
      need = need + 2 * (i + 1) + 1;
    }
  }
  return need;
}
int water(int *a, int n, int c)
{
  int k = c;
  int count = 0;
  int i;
  for (i = -1; i < n; ++i)
  {
    if (c >= a[i + 1])
    {
      c -= a[i + 1];
      count++;
    }
    else
    {
      c = k - a[i + 1];
      count = count + 2 * (i + 1) + 1;
    }
  }
  return count;
}
int water(int *a, int n, int c)
{
  int k = c, count = 0;
  for (int i = -1; i < n; ++i)
  {
    if (c >= a[i + 1])
    {
      c -= a[i + 1];
      count++;
    }
    else
    {
      c = k - a[i + 1];
      count = count + 2 * (i + 1) + 1;
    }
  }
  return count;
}
// 要去形成思路。。不然刷这么多。
// 还是很生疏。。
// 这题核心模拟的路线还是很简单。就是遍历。
// 然后以i 然后容量为主线。。迭代容量的变化 和need的变化。。
int soso(int *a, int n, int c)
{
  int k = c, cnt = 0;
  for (int i = -1; i < n; ++i)
  {
    if (c > a[i + 1])
    {
      c -= a[i + 1];
      cnt++;
    }
    else
    {
      c = k - a[i + 1];
      cnt = cnt + 2 * (i + 1) + 1;
    }
  }
  return cnt;
}
int soso(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = -1; i < n; ++i)
  {
    if (c >= a[i + 1])
    {
      c -= a[i + 1];
      cnt++;
    }
    else
    {
      c = k - a[i + 1];
      cnt += 2 * (i + 1) + 1;
    }
  }
  return cnt;
}
int soso(int *a, int n, int c)
{
  int t = c, cnt = 0;
  for (int i = -1; i < n; ++i)
  {
    if (c >= a[i + 1])
    {
      c -= a[i + 1];
      cnt++;
    }
    else
    {
      c = t - a[i + 1];
      cnt += 2 * (i + 1) + 1;
    }
  }
  return cnt;
}
int soso(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (c > a[i])
    {
      c -= a[i];
      cnt++;
    }
    else
    {
      c = k - a[i];
      cnt += 2 * i + 1;
    }
  }
  return cnt;
}
// 感觉是可以优化成这样。。

class Solution
{
public:
  int wateringPlants(vector<int> &a, int c)
  {
    int n = a.size();
    int k = c, cnt = 0;
    for (int i = 0; i < n; ++i)
    {
      if (c >= a[i])
      {
        c -= a[i];
        cnt++;
      }
      else
      {
        c = k - a[i];
        cnt += 2 * i + 1;
      }
    }
    return cnt;
  }
};
int soso(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (c > a[i])
    {
      c -= a[i];
      cn++;
    }
    else
    {
      c = k - a[i];
      cnt += 2 * i + 1;
    }
  }
  return cnt;
}
int soso(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (c >= a[i])
    {
      c -= a[i];
      cnt++;
    }
    else
    {
      c = k - a[i];
      cnt += 2 * i + 1;
    }
  }
  return cnt;
}
int soso(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (c >= a[i])
    {
      c -= a[i];
      cnt++;
    }
    else
    {
      c = k - a[i];
      cnt += 2 * i + 1;
    }
  }
  return cnt;
}
int soos(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (c >= a[i])
    {
      c -= a[i];
      cnt++;
    }
    else
    {
      c = k - a[i];
      cnt += 2 * i + 1;
    }
  }
  return cnt;
}
int soso(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (c >= a[i])
    {
      c -= a[i];
      cnt++;
    }
    else
    {
      c = k - a[i];
      cnt = 2 * i + 1;
    }
  }
  return 0;
}
int soso(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (c >= a[i])
    {
      c -= a[i];
      cnt++;
    }
    else
    {
      c = k - a[i];
      cnt += 2 * i + 1;
    }
  }
  return cnt;
}
int soso(int *a, int c, int n)
{
  int k = c, cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (c >= a[i])
    {
      c -= a[i];
      cnt++;
    }
    else
    {
      c = k - a[i];
      cnt += 2 * i + 1;
    }
  }
  return cnt;
}