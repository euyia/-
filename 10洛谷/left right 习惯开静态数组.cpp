#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

int n, c, l, r;
int a[100010], b[100010], k[100010];
int main()
{
    cin >> n >> c;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = n; i > 0; i--)
    {
        if (!k[a[i]])
            b[i] = b[i + 1] + 1;
        else
            b[i] = b[i + 1];
        k[a[i]] = 1;
    }
    for (int i = 1; i <= c; ++i)
    {

        cin >> n;
        cout << b[n] << endl;
    }
    return 0;
}
int a[100010], b[100010], k[100010];
//  这是10的5次方 5个零。
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[100010], b[100010], k[100010];
int a[1000010], b[100010], k[100010];
// 脑子肌肉记忆而已。。学习