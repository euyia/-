#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
inline int read()
{ //快读
    char ch = getchar();
    int x = 0, f = 1;
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while ('0' <= ch && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
        a[i] = read();
    nth_element(a + 1, a + k + 1, a + n + 1);
    cout << a[k + 1];
}