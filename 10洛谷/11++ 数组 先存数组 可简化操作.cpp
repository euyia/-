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
    a[1][1] = 1;
    for (int i = 2; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
        {
            // 这里他会拿到外围的0 去和1 加 这样构建了外围的1.
            // 左边的也是 这感觉就有点爽到 用1  前面留空的好处。。
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    for (int i = 1; i <= n; ++i, cout << '\n')
        for (int j = 1; j <= i; ++j)
            cout << a[i][j] << ' ';
    return 0;
}
// 他这里统一去
// 先建起来。
// 先建起来。
// 先建起来。
// 就非常简洁。
// 就非常简洁。
//  这里cout<<'\n'; 耍帅。。
// 数据有时候预处理一下。。循环结构的设计压力就会减轻很多。。
// 好好品味出这些题目人的心意。。他是让你习得什么。。
// 题目设计都是有原因的。。这背后的原因往往都是知识体系的链接。
// 想那个二分。。左边界一题。右边界一题。无边界的又一题。。。非常的经典。