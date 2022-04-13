#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp;
// 好像是不行的。
int n;
void dfs(int x1, int y1, int x2, int y2)
{
    // 主要是不好描述他的位置。
    // 但是这个题目 用递归是非常方便的。
    if (x1 + 1 == x2)
    {
        mp[x1 * n + y1] = 1;
        return;
    }
    int x = (x2 + x1) / 2, y = (y2 + y1) / 2;
    for (int i = x1 * n + y1; i <= x * n + y; ++i)
    {
        mp[i] = 1;
    }
    dfs(x1, y + 1, x, y2);
    dfs(x + 1, y1, x2, y);
    dfs(x + 1, y + 1, x2, y2);
    return;
}
int main()
{
    cin >> n;
    n = pow(2, n);
    m = n + 1;
    dfs(0, 0, n - 1, n - 1);
    for (int i = 0; i < n; ++i, cout << '\n')
        // 你看这个cout 。。只有刷了。才会成为你的骨肉动作。
        // 刷过 刷熟才是你的。。看的懂，只是你智商没问题。不等于是你的
        // 不刷 你就并未拥有。。就像女人，你不弄她就不算你的。
        for (int j = 0; j < n; ++j)
        {
            int t = i * n + j;
            if (mp.count(t))
                cout << 0 << ' ';
            else
                cout << 1 << ' ';
        }

    return 0;
}
// 首先应该很少人像我这样一维处理。。所以。。。不好找到参考。
// 转成一维度 有缺陷。。答案。。不知道为什么？？？？