#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1]{0};
    int b[n + 1]{0};
    int tmp = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            if (b[i] - b[i - l] > tmp)
                tmp = b[i] - b[i - l];
    }
    tmp = tmp == INT_MAX ? 0 : tmp;
    cout << tmp;
    return 0;
}
// 他这个解法最大的优点就是实现了在输入的时候
// 输入同步统计。。
// 输入同步统计。。
// 输入同步统计。。
// 用一个前缀和数组实现了。。
int main()
{
    cin >> n, m, l;
    cin >> n >> l;
    int a[n + 1]{0};
    int b[n + 1]{0};
    int tmp = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            if (b[i] - b[i - l] < tmp)
                tmp = b[i] - b[i - l];
    }
    cout << tmp;
    return 0;
}
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1]{0};
    int b[n + 1]{0};
    int tmp = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            tmp = min(tmp, b[i] - b[i - l]);
    }
    cout << tmp;
    return 0;
}
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1]{0}, b[n + 1]{0};
    int tmp = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            tmp = min(tmp, b[i] - b[i - l]);
    }
    cout << tmp;
    return 0;
}
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1]{0}, b[n + 1]{0};
    int tmp = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            tmp = min(tmp, b[i] - b[i - l]);
    }
    cout << tmp;
    return 0;
}
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1]{0}, b[n + 1]{0};
    int tmp = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            tmp = min(tmp, b[i] - b[i - l]);
    }
    cout << tmp;
    return 0;
}
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1]{0}, b[n + 1]{0}, tmp = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            tmp = min(tmp, b[i] - b[i - l]);
    }
    cout << tmp;
    return 0;
}
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1], b[n + 1], tmp = INT_MAX;
    b[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            tmp = min(tmp, b[i] - b[i - l]);
    }
    cout << tmp;
    return 0;
}
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1], b[n + 1], tmp = INT_MAX;
    b[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            tmp = min(tmp, b[i] - b[i - l]);
    }
    cout << tmp;
    return 0;
}
int main()
{
    int n, l;
    cin >> n >> l;
    int a[n + 1], b[n + 1], tmp = INT_MAX;
    b[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
        if (i >= l)
            tmp = min(tmp, b[i] - b[i - l]);
    }
    cout << tmp;
    return 0;
}
// 多表达。。。多输出。。踩点 都放在自己刷上。。可以提升很多。。
// 提升的本质基本就是刷新知识了。。。
// 前缀和 的预处理 可以大大减少一些算法的时间复杂度
// 前缀和 的预处理 可以大大减少一些算法的时间复杂度
// 前缀和 的预处理 可以大大减少一些算法的时间复杂度