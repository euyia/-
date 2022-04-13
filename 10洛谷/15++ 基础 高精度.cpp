#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
// 录入不一定要全录入
// 可以提取成我们要的数据样子。
// 输出也是。不一定要处理完放的好好的输出。
// 可以在一个临时的空间数据。
int a[505], b[505], c[505];
int l, r;
int main()
{
    string s, t;
    cin >> s >> t;
    for (int i = s.size() - 1; i >= 0; i--)
        a[l++] = s[i] - '0';
    for (int i = t.size() - 1; i >= 0; i--)
        b[r++] = t[i] - '0';
    int lc = max(l, r);
    for (int i = 0; i < lc; ++i)
    {
        c[i] += a[i] + b[i];
        // 下面两个要注意不是a+b..是c
        // 因为这边c+= 。。。
        c[i + 1] = c[i] / 10;
        c[i] %= 10;
        // 这个循环的设计非常精妙。。
        // 能把底下的拿过来叠加之后
        // 处理完又传递给下一层。。
    }
    if (!c[lc])
        lc--;
    for (int i = lc; i >= 0; i--)
        cout << c[i];
    return 0;
}
void soso()
{

    for (int i = 0; i < lc; ++i)
    {
        c[i] += a[i] + b[i];
        c[i + 1] = c[i] / 10;
        c[i] %= 10;
    }
    int cur, lc;
    for (int i = 0; i < lc; ++i)
    {
        cur = c[i] + a[i] + b[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cut % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = c[i] + a[i] + b[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i + 1] = cur / 10;
    }
    for (int i = 0; i < lc; ++i)
    {
        cur = a[i] + b[i] + c[i];
        c[i] = cur % 10;
        c[i] = cur / 10;
    }
    // %就是取后面
    //  /10  就是取前面。。
    // 这样写虽然没有那么专业。但是非常利于思路的形成。
}