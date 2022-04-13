#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    a[1] = 1;
    for (int i = 2; i <= n; ++i)
        a[i] = a[i - 1] * i;
    int sum = accumulate(a + 1, a + n, 0);
    cout << sum;
    return 0;
}
// 每个数都要存成一个数组吗-- 那不是要裂开。。