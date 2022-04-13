#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (n > 4 && n <= 12 && n % 2 == 0)
        cout << 1 << " ";
    else
        cout << 0 << " ";
    if (n > 4 && n <= 12 || n % 2 == 0)
        cout << 1 << " ";
    else
        cout << 0 << " ";
    if (n > 4 && n <= 12)
    {
        if (n % 2 == 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    else
    {
        if (n % 2 == 0)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    if (!(n > 4 && n <= 12 || n % 2 == 0))
        cout << 1 << " ";
    else
        cout << 0 << " ";
    return 0;
}
// 他全部设定了一个默认值。。就省去了一半的操作。。我擦。。
// 他全部设定了一个默认值。。就省去了一半的操作。。我擦。。
// 他全部设定了一个默认值。。就省去了一半的操作。。我擦。。
int a = 0, b = 0, c = 0, d = 0, n;
int main()
{
    scanf("%d", &n);
    if (n % 2 == 0 && n > 4 && n <= 12)
        a = 1;
    if (n % 2 == 0 || n > 4 && n <= 12)
        b = 1;
    if (n % 2 == 0 && n <= 4 && n > 12 || n > 4 && n <= 12 && n % 2 == 1)
        c = 1;
    if (n % 2 == 1 && n <= 4 || n % 2 == 1 && n > 12)
        d = 1;
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
// P5710
// 有点诡异。。。他这第三个错的。。也能ac。。。