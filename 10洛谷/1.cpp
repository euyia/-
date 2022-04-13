#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int t = unique(a + 1, a + n + 1) - a - 1;
    // 这个返回的是最后一个位置的迭代器地址。。
    cout << t << endl;
    for (int i = 1; i <= t; ++i)
        cout << a[i] << " ";
    return 0;
}