#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int a[40][40], n;
int main()
{
    // 多刷 多刷出 少无谓的瞎想。。
    // 增加刷的时间比例
    cin >> n;
    int x = 1, y = (n + 1) / 2;
    for (int i = 1; i <= n * n; ++i)
    {
        a[x][y] = i;
        if (!a[(x - 2 + n) % n + 1][y % n + 1])
            x = (x - 2 + n) % n + 1, y = y % n + 1;
        else
            x = x % n + 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
// 实现其实还好。。
// 主要能把他概括起来。就非常夸张。。
// 而且取余的来避免冲突
// 然后xy的迭代。。。
// 酷币了。。