#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    int c[100];
    int j = 0;
    a = -a;
    while (n)
    {
        c[j++] = n % a;
        n /= a;
    }
    while (j--)
    {
        if (c[j] > 10)
            cout << char(c[j] - 10 + 'A');
        else
            cout << char(c[j] + '0');
    }
    return 0;
}
// 不知道为啥这样不行。。。而且是局部不行。
// 主要是负号。。怎么巧妙的拿到我们要的数字。

// 负底 和正底 什么区别？？
// 这题没那么简单。
// 看他推导都费劲了
#include <iostream>
using namespace std;
int n, m;
char a[100001];
int l = 0;
int main()
{
    int i;
    cin >> n >> m;
    cout << n << "=";
    while (n != 0)
    {
        int j = n % m;
        n /= m; //十进制转n进制
        if (j < 0)
            j -= m, n--; //讲解的点
        if (j < 10)
            a[++l] = (char)(j + 48);
        else
            a[++l] = (char)((j - 10) + 'A'); //两种不同的转法
    }
    for (i = l; i >= 1; i--)
        cout << a[i]; //倒序输出
    cout << "(base" << m << ")" << endl;
}