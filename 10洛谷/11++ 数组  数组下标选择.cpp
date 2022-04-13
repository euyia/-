#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
bool ok(int x)
{
    return x % 4 == 0 && x % 100 != 0 || x % 400 == 0;
}
int main()
{

    int a, b;
    cin >> a >> b;
    int c[1500];
    int cnt = 0;
    for (int i = a; i <= b; ++i)
    {
        if (ok(i))
            c[++cnt] = i;
    }
    cout << cnt << '\n';
    for (int i = 1; i <= cnt; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}
// 这题本来一般我肯定用set的

// 动态录入数量 可以作为数组下标
//动态的 录入数量 可以作为数组下标
// 录入数量 可以作为数组下标
// 不折手段的优选数组 作为数据结构
// 不折手段的优选数组 作为数据结构
// 不折手段的优选数组 作为数据结构