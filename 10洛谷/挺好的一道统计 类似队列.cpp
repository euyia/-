#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;

int n, a, b;
int sum, t, x;
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        x -= a - t;
        if (x < 0)
            x = 0;
        x += b;
        sum = max(sum, x);
        t = a;
    }
    cout << a + x << " " << sum;
    return 0;
}
// 才舒服的ac了一道题 。。发现他们都好强。。