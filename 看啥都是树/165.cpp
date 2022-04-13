#include <string>
using namespace std;
class Solution
{
public:
    int compareVersion(string aa, string bb)
    {

        int i = 0, j = 0;
        int n = max(aa.size(), bb.size());
        while (i < n || j < n)
        {
            int a = 0, b = 0;
            while (i < aa.size() && aa[i] != '.')
            {
                a = a * 10 + aa[i] - '0';
                ++i;
            }
            while (j < bb.size() && bb[j] != '.')
            {
                b = b * 10 + bb[j] - '0';
                ++j;
            }
            if (a > b)
                return 1;
            else if (b > a)
                return -1;
            ++i;
            ++j;
        }
        return 0;
    }
};
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = n * 10 + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = m * 10 + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m > n)
            return -1;
        ++j;
        ++i;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        --j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n < m)
            return -1;
        else if (n > m)
            return 1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++j;
        ++i;
    }
    return 0;
}
// 字符本质也是数字。。数字本质也是字符
// 但是为什么要转来转去。
// 就是字符 和数字 0 和‘0’ 对应的数字是不一样的。。需要通过asc码 来转
// 比如字符串的‘0’ 要转成数字。。我们就要用’0‘-’0‘、
//  其实数字就是字符的偏移量！！！！
//  其实数字就是字符的偏移量！！！！
//  其实数字就是字符的偏移量！！！！
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m > n)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end || j < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m < n)
            return -1;
        ++j;
        ++i;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (m < n)
            return 1;
        else if (m > n)
            return -1;
        ++j, ++i;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int end = max(a.size(), b.size());
    while (i < end)
    {
        int n = 0, m = 0;
        while (i < a.size() && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < b.size() && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m > n)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
// 继承前人的结构框架。。这种框架很精妙的。。。。这也是财富
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (m > n)
            return -1;
        else if (n > m)
            return 1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int m = 0, n = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m > n)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m > n)
            return -1;
        ++j, ++i;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m > n)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m > n)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p && j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (m > n)
            return -1;
        else if (n > m)
            return 1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i;
        ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n < m)
            return -1;
        else if (n > m)
            return 1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n < m)
            return -1;
        else if (n > m)
            return 1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n < m)
            return -1;
        else if (n > m)
            return 1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (m > m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || i < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
int soso(string a, string b)
{
    int i = 0, j = 0;
    int p = a.size();
    int q = b.size();
    while (i < p || j < q)
    {
        int n = 0, m = 0;
        while (i < p && a[i] != '.')
        {
            n = 10 * n + a[i] - '0';
            ++i;
        }
        while (j < q && b[j] != '.')
        {
            m = 10 * m + b[j] - '0';
            ++j;
        }
        if (n > m)
            return 1;
        else if (n < m)
            return -1;
        ++i, ++j;
    }
    return 0;
}
//  欠下的量 总是要补上的。。刷多了 自然消化了。。
// 一个新的框架纵使要刷点量 来吸收的。。刷量是少不了的。。别想逃。。