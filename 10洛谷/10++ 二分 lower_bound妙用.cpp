#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
long long n, b, cnt, sum, maxt;
// 这边要用long 别开数据给的是int的范围。但是这里我们会用个数相乘 。。
// 所以会溢出。。
int main()
{
    cin >> n >> b;
    int a[n + 1];
    map<int, int> mp;
    for (int i = 1; i <= n; ++i)
        cin >> a[i], mp[a[i]]++;
    for (auto m : mp)
        if (mp.count(m.first - b))
            cnt += mp[m.first - b] * m.second;
    cout << cnt;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long n, b, cnt, sum, maxt;
int main()
{
    cin >> n >> b;
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i)
    {
        // 如果越界了呢 。
        int l = lower_bound(a + 1, a + n + 1, a[i] + b) - a;
        int r = upper_bound(a + 1, a + n + 1, a[i] + b) - a;
        cnt += (r - l);
        // +=的优先级好像挺大的
        // 竟然不用考虑越界。。那就是说end-end=0；
    }
    cout << cnt << endl;
    return 0;
}
// 巧妙的运用了 lower_ bound 和upper_bound 能算出目标元素的个数。。
// 先干他个2000题。。再说
// 也就是要求相同元素的个数?? 可以用这个方法。