
#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
// 这里因为n 不一定是单位。所以不能用char 而后面的01 磁铁 是有可能01 所以要用char
// 如果用int 01 就会丢失数据。
int n;
char c = 2, l, r;
// int a[100010], b[100010], k[100010];
int main()
{
    cin >> n;
    int cnt = 1;
    for (int i = 0; i < n; ++i)
    {
        cin >> l >> r;
        if (c == l)
            cnt++;
        c = r;
    }
    cout << cnt;
    return 0;
}
