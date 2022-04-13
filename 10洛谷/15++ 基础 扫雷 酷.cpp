#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>

// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
char a[101][101];
int n, m;
bool ok(int x, int y)
{
    return x >= 0 && y >= 0 && y < m && x < n && a[x][y] != '*';
}

// 还要进行判断是不是问号。
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == '*')
                for (int k = i - 1; k <= i + 1; ++k)
                    for (int l = j - 1; l <= j + 1; ++l)
                    {
                        if (ok(k, l))
                        {
                            if (a[k][l] == '?')
                                a[k][l] = '1';
                            else
                                a[k][l]++;
                        }
                    }
        }
    for (int i = 0; i < n; ++i, cout << '\n')
        for (int j = 0; j < m; ++j)
            if (a[i][j] == '?')
                cout << '0';
            else
                cout << a[i][j]; //不用区分是不是char。。直接打印出来。
}
// 这题不单单是处理了扫雷的问题。。
// 以前喜欢用偏移数组 dx dy啥的。
// 但是其实。直接看成一个小矩阵去遍历 。。
// 想这里的k l
// 小矩阵
// 小矩阵
// 小矩阵
// 写起来更加简洁。

#直接爆搜一遍就行了，一共就100 * 100次，不会超时

#include <bits/stdc++.h>
using namespace std;
bool a[105][105]; //一张地图，有雷为一，无雷为零
int main()
{
    memset(a, 0, sizeof(a)); //地图最开始清空
    int n, m;
    char tmp;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) //读入地图
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> tmp; //读入每一个点
            if (tmp == '*')
                a[i][j] = 1; //如果是地雷就将这个点设为一
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 1)
                printf("*"); //如果是地雷不用输出数字
            else
            {
                printf("%d", a[i + 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i][j + 1] + a[i][j - 1] + a[i - 1][j + 1] + a[i - 1][j] + a[i - 1][j - 1]);
                //将旁边的雷加起来输出
                // 这边是用一个临时的sum来统计。
                // 然后写两层for 遍历那个小矩阵。。比这样写更简洁。。
            }
        }
        printf("\n");
    }
    return 0; //愉快的结束了主程序
}
#直接爆搜一遍就行了，一共就100 * 100次，不会超时

// 他这思路和我几乎完全相反。。。
// 但是也出来了。 。
// 这人数学肯定很好。。
// 他极度的抽象了数据。。
// 无论是录入还是输出。。都只取和只输出 核心信息。。
// 其他都不处理的。
// 他这里只printf 不改数据。
// 他这里只printf 不改数据。
// 他这里只printf 不改数据。
// 他这里只printf 不改数据。
// 他这里只printf 不改数据。
// 这样相当于创建了一个异度空间。不污染原来的数据。。
// 这样相当于创建了一个异度空间。不污染原来的数据。。
// 这样相当于创建了一个异度空间。不污染原来的数据。。
// 录入和输出的抽象。。都很nice。。。。。这人数学一定很好。