#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
// 录入不一定要全录入
// 可以提取成我们要的数据样子。
// 输出也是。不一定要处理完放的好好的输出。
// 可以在一个临时的空间数据。
int n, m;
int x, y, r, z;
int a[505][505], b[505][505];
void ni(int x1, int x2, int y1, int y2)
{
    // 90度的关系
    for (int i = x1; i <= x2; ++i)
        for (int j = y1; j <= y2; ++j)
        {
            // 打表 写例子 。要注意。。例子写错了你怎么总结规律。细节。。细节要注意
            b[j - (y - x)][x2 - i + x1 + (y - x)] = a[i][j];
        }
    for (int i = x1; i <= x2; ++i)
        for (int j = y1; j <= y2; ++j)
        {
            // 打表 写例子 。要注意。。例子写错了你怎么总结规律。细节。。细节要注意
            a[i][j] = b[i][j];
        }
}

void ts(int x1, int x2, int y1, int y2)
{
    // 270度的关系
    for (int i = x1; i <= x2; ++i)
        for (int j = y1; j <= y2; ++j)
        {
            // 打表 写例子 。要注意。。例子写错了你怎么总结规律。细节。。细节要注意
            b[y2 - j + y1 - (y - x)][i + (y - x)] = a[i][j];
        }
    for (int i = x1; i <= x2; ++i)
        for (int j = y1; j <= y2; ++j)
        {
            // 打表 写例子 。要注意。。例子写错了你怎么总结规律。细节。。细节要注意
            a[i][j] = b[i][j];
        }
}

int main()
{
    cin >> n >> m;
    int l = 1;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            a[i][j] = l++;
    // 开始做旋转。。
    while (m--)
    {
        cin >> x >> y >> r >> z;
        // r = 2 * r + 1;
        int x1 = x - r, y1 = y - r, x2 = x + r, y2 = r + y;
        if (!z)
            ni(x1, x2, y1, y2);
        else
            ts(x1, x2, y1, y2);
        // for (int i = x1; i <= x2; ++i, cout << '\n')
        //     for (int j = y1; j <= y2; ++j)
        //     {
        //         // 打表 写例子 。要注意。。例子写错了你怎么总结规律。细节。。细节要注意
        //         cout << a[i][j] << ' ';
        //     }
        // cout << endl;
        // for (int i = x1; i <= x2; ++i, cout << '\n')
        //     for (int j = y1; j <= y2; ++j)
        //     {
        //         // 打表 写例子 。要注意。。例子写错了你怎么总结规律。细节。。细节要注意
        //         cout << b[i][j] << " ";
        //     }
    }
    for (int i = 1; i <= n; ++i, cout << '\n')
        for (int j = 1; j <= n; ++j)
        {
            cout << a[i][j];
            if (j != n)
                cout << ' ';
        }

    return 0;
}
b[y2 - j + y1 - (y - x)][i + (y - x)] = a[i][j];
// 这个 就是 - （y-x) 就是要处理偏移量。。
// 不像之前。。直接
b[y2 - j + y1][i] = a[i][j];
// 这样子 。因为他的中心点的横纵左边 可以是不对称的
// 这时候 比如原来的列 之前值是直接等于行。。
// 但是因为中心点的偏移。。也是要随之偏移的。
//
// 稳固了一个手法
// 就是在一个循环里面。
// 取镜像的 方式
// 取镜像的 方式
// 取镜像的 方式
// 就是 n-i+初始值。
// 就是 n-i+初始值。
// 就是 n-i+初始值。
// 比如 0 1 2 3 4
// 在这个数组里面 1 位置的镜像是3
//  4-1 +初始（0） 也就是了。。
// 这才月赛t1 。。。也太猛了吧 。。
