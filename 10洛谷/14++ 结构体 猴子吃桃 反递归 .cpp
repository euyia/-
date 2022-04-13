#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int cnt = 1, sum;
// int dfs(int n)
// {
//     if (cnt == sum)
//         return n;
//     cnt++;
//     return dfs((n + 1) * 2);
// }
// int main()
// {
//     cin >> sum;
//     cout << dfs(1);
//     return 0;
// }
int main()
{
    int res = 1;
    cin >> sum;
    for (cnt = 1; cnt < sum; ++cnt)
    {
        res++;
        res *= 2;
    }
    cout << res;
}
// 虽然看着简单。但是这种正向模拟的思路。
// 反而不容易想到。
// 因为看到这种题就想到用递归。
// 其实这种正向的模拟 就可以实现。
// 正向模拟感觉是动归的基础。。
// 正向模拟感觉是动归的基础。。
// 正向模拟感觉是动归的基础。。