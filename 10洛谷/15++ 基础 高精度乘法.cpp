#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int a[2001], b[2001], c[5000];
// 这个c数组的长度 。他是两个相加 最后还有多。。
int lc, x;
int main()
{
    string l, r;
    cin >> l >> r;
    //  该学的学 该自己冲的自己冲。。。就这样吧。没那么多跳跳框框 就是往上冲。。
    int lena = l.size(), lenb = r.size();
    for (int i = lena - 1; i >= 0; i--)
    {
        a[lena - i] = l[i] - '0';
    }
    for (int i = lenb - 1; i >= 0; i--)
    {
        b[lenb - i] = r[i] - '0';
    }
    for (int i = 0; i <= lena; i++)
    {
        x = 0; //用来存放进位
        for (int j = 1; j <= lenb; j++)
        {
            c[i + j - 1] += a[i] * b[j] + x;
            x = c[i + j - 1] / 10;
            c[i + j - 1] %= 10;
        }
        c[i + lenb] = x; //进位
    }
    int lenc = lena + lenb;
    while (c[lenc] == 0 && lenc > 1)
        lenc--; //删除前导0
    for (int i = lenc; i > 0; i--)
        printf("%d", c[i]);
    return 0;
}
// 首先他下标是从1开始的。有效数字。
// 但是循环的下标又是从0开始的。