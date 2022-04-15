#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100000005];
ll l, n, m, k;
int main()
{
    // 他主要是一个动态的。。
    // 你移动一个会改变其他的选择。
    // 你移动一个会改变其他的选择。
    //    不需要模拟 。直接就解决了这个看是困难的问题。
    // 直接枚举答案。而且能高效。有效的实现。
    // 他可以拿前面那个 也可以拿后面那个掉。？？
    cin >> l >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    a[n + 1] = l;
    ll l = 0, r = l;
    while (l < r)
    {
        ll mid = (l + r + 1) / 2;
        k = 0;
        for ()
        // 首尾不能拿掉。。。
    }
}
// 这个感觉逻辑上是有漏洞的。
// 但是感觉为啥可行呢？？应试？？

using namespace std;
int main()
{
    int l, n, m, left, right, mid, now, i, a[50005], s, ans;
    cin >> l >> n >> m;
    for (i = 1; i <= n; i++)
        cin >> a[i]; //输入
    left = 0;
    right = l;
    while (left < right)
    {
        mid = (right + left + 1) / 2;
        now = 0;
        s = 0;
        for (i = 1; i <= n; i++)
        {
            if (a[i] - a[now] < mid)
                s++;
            else
                now = i;
        }
        if (s <= m)
        {
            left = mid;
        }
        else
            right = mid - 1;
    }
    cout << left;
    return 0;
}
// 他早上4点起来学习 人家不傻的。肯定是因为早上安静。。而且很重要。。
// 这个框架很特别。。两点 1  他work 2  他简洁好记
// 就left 不动的。。
// 说下优点 就是直接返回left 非常简洁。而且<的。也就是==的时候出循环。
// 而且这里没有左右都偏移。。会有一个保留在mid。。

// 然后说下特点。。现在就硬记了。
// 可以模拟的话 才能知道细节。。

// 记还是好记的。。就是=和< 他都mid 不偏移的。
// 只有>的时候 才偏移 mid-1
// 然后搭配的是r+l+1
// 反正就是条件= 和> 宽的那边不动
// 反正就是条件= 和> 宽的那边不动
// 反正就是条件= 和> 宽的那边不动
//
// 如果保留另外一边的话。。应该是l偏移。mid+1 然后搭配 r+l/2
// 如果保留另外一边的话。。应该是l偏移。mid+1 然后搭配 r+l/2
// 如果保留另外一边的话。。应该是l偏移。mid+1 然后搭配 r+l/2

// 这边是 r mid-1 然后搭配r+l+1/2;
// 这边是 r mid-1 然后搭配r+l+1/2;
// 这边是 r mid-1 然后搭配r+l+1/2;

// 两种情况  都是条件窄的 偏移 mid+1 或者mid-1
// l偏移 就搭配r+l/2
// 如果r 偏移mid-1  搭配 r+l+1/2
//
// 1 r+l+1/2 和l=mid l宽条件  搭配            l=mid  锁左边  找右边界。
//  r+l  和 r=mid  r锁定所以r宽条件            r=mid 应该是锁右边，然后找左边界。
// 以上分别是锁 左边 和锁右边

int main()
{
    int len, n, m,
        l, r, mid,
        a[50005];
    cin >> len >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = a[n];
    while (l < r)
    {
        mid = (r + l + 1) / 2;
        int j = 0, s = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] - a[j] < mid)
                s++;
            else
                j = i;
        }
        if (s <= m)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
int main()
{
    int len, n, m, a[5005];
    cin >> len >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        int j = 0, s = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] - a[j] < mid)
                s++;
            else
                j = i;
        }
        if (s <= m)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
// 因为要找最长的 且符合条件的。
// 所以 比如 7  9 10 11 12 都符合 l在9的时候就符合了。那么他就锁定住
//  然r一直缩小。。
// 很神奇 最终就会停在做右边的边界上。。12上。
// 很神奇 最终就会停在做右边的边界上。。12上。
// 很神奇 最终就会停在做右边的边界上。。12上。
// 这可以解决一部分的最值问题。。
// 而且只要直到他的模式 。你就掌握了这种题型。。
// 就是锁住一边 让一边不断的逼近。。。。就这么简单。
// 就是锁住一边 让一边不断的逼近。。。。就这么简单。
// 就是锁住一边 让一边不断的逼近。。。。就这么简单。
// 这个可以刷。。
int main()
{
    int len, n, cnt;
    cin >> len >> n >> cnt;
    // 然后那个sum喜欢用k、因为听起来想cnt
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, k = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                k++;
            else
                j = i;

        if (k <= cnt)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
// 宽的不动。。窄的移
// 刷完 拉断 才是你的
int main()
{
    int len, n, cnt;
    cin >> len >> n >> cnt;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        // 有这个操作感觉可以替代一些复杂的操作。。
        int j = 0, k = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                s++;
            else
                j = i;
        if (k < cnt)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
int main()
{
    int len, n, t;
    cin >> len >> n >> t;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, k = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                k++;
            else
                j = i;
        if (k <= t)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
int main()
{
    int len, n, t;
    cin >> len >> n >> t;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= t)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
// 宽的不动。。不动 就应该匹配不动的直觉  就是l=mid
int main()
{
    int len, n, t;
    cin >> len >> n >> t;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= t)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
// 这个还的刷、、
int main()
{
    int len, n, k;
    cin >> len >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= k)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
int main()
{
    int len, n, k;
    cin >> len >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= k)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
// 二分 我也当做框架来写。。
int main()
{
    int len, n, k;
    cin >> len >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= k)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
int main()
{
    int len, n, k;
    cin >> len >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= k)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
int main()
{
    int len, n, k;
    cin >> len >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= k)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
// 二分框架。
// 做题刷题 如此反复 幸福的日子。。
int main()
{
    int len, n, k;
    cin >> len >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= k)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
int main()
{
    int len, n, k;
    cin >> len >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l = 0, r = len;

    while (l < r)
    {
        int mid = (r + l + 1) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n; ++i)
            if (a[i] - a[j] < mid)
                cnt++;
            else
                j = i;
        if (cnt <= k)
            l = mid;
        else
            r = mid - 1;
    }

    cout << l;
    return 0;
}
// 左边 不动的 不会mid+1
//  右边缩减。
// 也就是我们一直缩减右边。。然后这个r+l+1 就是取到右边。位置。。
// 右边是动态的。。所以要提供右边的值给他处理。r+l+1 就是右边的。。
// 右边是动态的。。所以要提供右边的值给他处理。r+l+1 就是右边的。。
// 右边是动态的。。所以要提供右边的值给他处理。r+l+1 就是右边的。。
// 如果提供提供左边 。左边是不动的。比如0 1   他会取到0 l=mid
// l 还是0 区间就还是0 1  就会死循环。。
// 这是右移动。和取右边r+l+1的 漂亮的配合。。
// r+l+1在这里相当于 结构。r=mid-1 相当于算法。。两者匹配。。。
// 结构和算法的匹配。

两种 无论那种 取 = 的时候 都是mid 不动的。。
    //  取 = 的时候 都是mid 不动的。。
    取 = 的时候 都是mid 不动的。。 取 = 的时候 都是mid 不动的。。