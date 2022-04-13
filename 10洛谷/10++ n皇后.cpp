#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

int a[14], vis[3][28], n, cnt;
// 因为他最大可能就是13-1+13 也就是25 然后从0 开始的。所以 至少要26格子就可以了
// 因为这里是同步偏移n。所以不影响的。。
void dfs(int l)
{
    if (l > n)
    {
        cnt++;
        if (cnt > 3)
            return;
        for (int i = 1; i <= n; ++i)
            cout << a[i] << " ";
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (vis[0][i] || vis[1][l + i] || vis[2][l - i + n])
            continue;
        vis[0][i] = 1, vis[1][l + i] = 1, vis[2][l - i + n] = 1;
        a[l] = i;
        dfs(l + 1);
        vis[0][i] = 0, vis[1][l + i] = 0, vis[2][l - i + n] = 0;
    }
}
int main()
{
    cin >> n;
    dfs(1);
    cout << cnt;
    return 0;
}
// 把原来的vector 或者set 都改成原始数组了。。
// 用一个二维数组就解决了。。。真的是舒服。
// 用数据偏移。解决了访问越界的问题。。
// 很舒服的转型。。
// 原来数据爆掉的。。第个数据如果不用数组 是过不去的。

// leetcode 因为要把整个打印出来。
// 所以如果要用静态数组。。就比较恶心。因为你算之前不知道他多少个。
// vector 有毒。。还好中毒未深。。leetcode 是中毒很严重。各种vector
// n皇后在leetcode算大题的。。在这里 就这样被一笔带过。。不知道是好还是不好。
// 可刷。。