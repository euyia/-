#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[505][4];
int l, r, n, m, x, y;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        m = 0;
        for (int j = 0; j < 3; ++j)
        {
            cin >> l;
            a[i][j] = l;
            m += l;
        }
        a[i][3] = m;
    }

    for (int i = 1; i <= n; ++i)
    {

        for (int j = i + 1; j <= n; ++j)
        {
            //   算i的。。
            bool flag = true;
            for (int k = 0; k < 4; ++k)
            {
                if (k != 3)
                {
                    if (abs(a[i][k] - a[j][k]) > 5)
                    {
                        flag = false;
                        break;
                    }
                    continue;
                }
                if (abs(a[i][k] - a[j][k]) > 10)
                    flag = false;
            }
            if (flag)
                r++;
        }
    }
    cout << r;
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int n, a[1010][5], sum[1010];
int cnt;

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i][1] >> a[i][2] >> a[i][3];
        // 这录入 简洁啊。。。简洁。。
        sum[i] = a[i][1] + a[i][2] + a[i][3];
    }
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (abs(a[i][1] - a[j][1]) <= 5 &&
                abs(a[i][2] - a[j][2]) <= 5 &&
                abs(a[i][3] - a[j][3]) <= 5 &&
                abs(sum[i] - sum[j]) <= 10) // 这样看的更清楚一点
                cnt++;
    cout << cnt << endl;
    return 0;
}
// 1 他又开了一个数组。然后录入的时候 好简洁。。
// 2 他用&来写逻辑。。没用用flag 。。也不用循环 直接手写。。
// 就很清晰。。
// 这也是一种组织代码的方式 。。非常nice
// 也可以这样写 组织语言！！！！ nice
// 主要是对 流不理解本质。。所以用起来不够灵活。。
// 足够root 才能足够掌握。。
// root的程度==掌握的程度？？
// 贪root的 原因。。。他那么贪root 肯定是因为root能带来本质上的好处。。
// 贪root的 原因。。。他那么贪root 肯定是因为root能带来本质上的好处。。
// 贪root的 原因。。。他那么贪root 肯定是因为root能带来本质上的好处。。
// 为什么贪root？？？？
// 打开==才能触碰到喉底。。打开===接触到root。。。。用root->高品质。。