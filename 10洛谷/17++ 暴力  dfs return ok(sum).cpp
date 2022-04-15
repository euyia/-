#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int a[21];
int n, k, ct;
bool ok(int x)
{
    if (x < 3)
        return x == 2;
    for (int i = 2; i <= sqrt(x); ++i)
        if (x % i == 0)
            return 0;
    return 1;
}
int dfs(int l, int cnt, int sum)
{
    if (cnt == k)
        return ok(sum);
    // 主要是这里后序遍历 在这里作为底。
    // 把dfs和树的遍历 完全的利用起来
    // 非常酷。
    // 这里相当于设计了 触底 也就是
    // 他的叶节点 就是cnt==k
    // 他的叶节点 就是cnt==k
    // 他的叶节点 就是cnt==k
    int res = 0;
    for (int i = l; i <= n; ++i)
    {
        res += dfs(i + 1, cnt + 1, sum + a[i]);
    }
    return res;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    cout << dfs(1, 0, 0);
    return 0;
}