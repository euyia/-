#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));
    int k = 1;
    a[1][1] = 1;
    // 这个第一个要自己写。
    for (int i = 1, j = 1; k < n * n;)
    {
        while (j + 1 <= n && !a[i][j + 1])
            a[i][++j] = ++k;
        while (i + 1 <= n && !a[i + 1][j])
            a[++i][j] = ++k;
        while (j - 1 >= 1 && !a[i][j - 1])
            a[i][--j] = ++k;
        while (i - 1 >= 1 && !a[i - 1][j])
            a[--i][j] = ++k;
    }
    for (int i = 1; i <= n; ++i, cout << '\n')
        for (int j = 1; j <= n; ++j)
            cout << setw(3) << a[i][j];
    return 0;
}
// 这个主要是循环的设计 。。
// 然后就是这题setw 他能实现3格子 右对齐的输出。
// 你跑下例子。。
// 效果很酷炫的。
// 用这样简单的循环设计 。。就出来这么酷炫的效果。。计算机真的牛逼。