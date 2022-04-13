#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int a[26];
int b;
char c;
int main()
{
    while (cin >> c)
    {
        if (isalpha(c))
            a[c - 'A']++,
                b = max(b, a[c - 'A']);
    }
    int len = b, left[b + 1];
    memset(left, 0, sizeof(left));
    // 这边主要找到一个思路就是 从右边往回扫。。太阳能照到的 所有楼层 都属于那栋（i)房子的。
    // 这边主要找到一个思路就是 从右边往回扫。。太阳能照到的 所有楼层 都属于那栋（i)房子的。
    // 这边主要找到一个思路就是 从右边往回扫。。太阳能照到的 所有楼层 都属于那栋（i)房子的。
    int pre = 0;
    //  叫pre会更好
    for (int i = 25; i >= 0; i--)
    {
        int cur = a[i];
        if (cur > pre)
        {
            for (int j = pre + 1; j <= cur; ++j)
                left[j] = i;
            // 这个j 其实是高度。
            pre = cur;
        }
    }
    b++; //这是为了用这个while 如果写成for循环就不用。
    while (b--)
    {
        for (int i = 0; i < 26; ++i)
        {
            if (b != 0)
            {
                if (b <= a[i])
                {
                    cout << '*';
                    if (left[b] == i)
                    {
                        cout << '\n';
                        break;
                        // 就break，这层的。
                    }
                }

                else
                    cout << ' ';
            }
            else
            {
                cout << char(i + 'A');
            }
            // 这个中间隔着的空格 统一处理 这也是简化了代码的
            // 所有的行 都还要分别写。n-1之前的和n的。。不但要分开写 而且每个都要写
            if (i != 25)
                cout << ' ';
        }
        // cout << '\n';
    }
    return 0;
}
