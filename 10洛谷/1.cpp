#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int s, a[1060], b[10];
int n = 3, k, ct;
// 存 好存 取不好取 。。一个二进制数 你怎么给他还原。。

void dfs(int s, int cnt)
{
    if (cnt == n)
    {
        for (int i = 0; i < n; ++i)
            cout << setw(5) << b[i];
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; ++i)
        if (!(s & (1 << (i - 1))))
        {
            s |= (1 << (i - 1));
            b[cnt] = i;
            dfs(s, cnt + 1);
            s ^= (1 << (i - 1));
        }
}
int main()
{
    // cin >> n;
    // for (int i = 1; i <= n; ++i)
    // {
    //     a[1 << (i - 1)] = i;
    // }
    dfs(0, 0);
}