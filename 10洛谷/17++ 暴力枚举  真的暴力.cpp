#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f, g, h, i, j, in, x = 0;
    cin >> in;
    for (a = 1; a <= 3; a++)
    {
        for (b = 1; b <= 3; b++)
        {
            for (c = 1; c <= 3; c++)
            {
                for (d = 1; d <= 3; d++)
                {
                    for (e = 1; e <= 3; e++)
                    {
                        for (f = 1; f <= 3; f++)
                        {
                            for (g = 1; g <= 3; g++)
                            {
                                for (h = 1; h <= 3; h++)
                                {
                                    for (i = 1; i <= 3; i++)
                                    {
                                        for (j = 1; j <= 3; j++)
                                        {
                                            if (a + b + c + d + e + f + g + h + i + j == in)
                                            {
                                                x++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << x << endl;
    for (a = 1; a <= 3; a++)
    {
        for (b = 1; b <= 3; b++)
        {
            for (c = 1; c <= 3; c++)
            {
                for (d = 1; d <= 3; d++)
                {
                    for (e = 1; e <= 3; e++)
                    {
                        for (f = 1; f <= 3; f++)
                        {
                            for (g = 1; g <= 3; g++)
                            {
                                for (h = 1; h <= 3; h++)
                                {
                                    for (i = 1; i <= 3; i++)
                                    {
                                        for (j = 1; j <= 3; j++)
                                        {
                                            if (a + b + c + d + e + f + g + h + i + j == in)
                                            {
                                                cout << a << " ";
                                                cout << b << " ";
                                                cout << c << " ";
                                                cout << d << " ";
                                                cout << e << " ";
                                                cout << f << " ";
                                                cout << g << " ";
                                                cout << h << " ";
                                                cout << i << " ";
                                                cout << j << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
int a[10];
int n, num;
void dfs(int l, int cnt, int k, int flag)
{
    // 要计数 k 不然这个l 第一层进去就可能是10.
    // 然后cnt=n 可能是倒数三四层的时候。cnt 第一层进去 3  3 3 的。。三层就满足条件了
    // 所以要计数。。。不能用l 和cnt 拦不住。
    if (k == 10 && cnt == n)
    {
        if (flag)
            num++;
        else
        {

            for (int i = 0; i < 10; ++i)
                cout << a[i] << ' ';
            cout << endl;
        }
        return;
    }
    for (int i = l; i < 10; ++i)
    {
        for (int j = 1; i <= 3; ++j)
        {
            // 内部也写成循环
            // 减少重复代码
            // 减少重复代码
            // 减少重复代码
            if (cnt + j > n)
                break;
            a[i] = j;
            dfs(i + 1, cnt + j, k + 1, flag);
        }
    }
}
int main()
{
    cin >> n;
    if (n < 10 || n > 30)
    {
        cout << 0;
        return 0;
    }
    dfs(0, 0, 0, 1);
    cout << num << endl;
    dfs(0, 0, 0, 0);
    return 0;
}
// 这边设置flag 也是很灵活的运用了。不然这个dfs要写两次。
// 这样的flag +封装 两次调用dfs
// 算比较好的解决了题目的坑爹要求 就是要先cnt数字
// 或者可以把答案放入数组中  也可以省去两次重复运算。