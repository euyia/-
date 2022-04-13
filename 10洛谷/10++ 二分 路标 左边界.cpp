#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int len, n, k, a[100005];
    cin >> len >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    a[n + 1] = len;
    int l = 0, r = len;
    while (l < r)
    {
        int mid = (l + r) / 2;
        int j = 0, cnt = 0;
        for (int i = 1; i <= n + 1; ++i)
        {
            if (a[i] - j >= mid)
            {
                // 这里直接一步到位 算处理中间隔了几个mid。
                cnt += (a[i] - j) / mid;
                if ((a[i] - j) % mid == 0)
                    cnt--;
            }
            j = a[i];
        }
        if (cnt <= k)
            r = mid;
        else
            l = mid + 1;
    }

    cout << l;
    return 0;
}

// 这左边界 主要你要体会 找左边界 mid的取法 和下面的if eelse
// 。。主要要体会左右边界的写法区别。。
// 。。主要要体会左右边界的写法区别。。
// 。。主要要体会左右边界的写法区别。。
// 阶段性的胜利。。美滋滋。。
// 很关键的细节是这个r+l+1的作用。。。。。
