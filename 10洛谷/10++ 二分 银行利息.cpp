#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n = 1000, m = 100, k = 12;
    // cin >> n >> m >> k;
    double l = 0, r = 10;
    while (l < r)
    {
        double mid = (l + r) / 200 + 1;
        double midd = mid;
        int j = 0, cnt = 0;
        int a = n, b = m;
        while (a > 0 && cnt <= k)
        {
            a *= mid;
            mid *= midd;
            a -= b;
            cnt++;
        }
        if (cnt == k)
        {
            printf("%.1lf", mid);
            return 0;
        }
        else if (cnt < k)
            l = midd - 1 + 0.1;
        else
            r = midd - 1 - 0.1;
    }
    cout << "ok";
    return 0;
}
// 左边界。
// 1  这怎么算的
// 2  这个没有很多种可行的利息吗。
// 主要是银行利息问题 不会算。。
// 我对银行利息的理解是错的。！！！！！