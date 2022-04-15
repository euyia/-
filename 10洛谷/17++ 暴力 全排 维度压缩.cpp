#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int s, a[1060], b[10];
int n, k, ct;
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
            // 这样要|=他的二进制位数
            // 这样要|=他的二进制位数
            // 这样要|=他的二进制位数
            // 而不是huo  i本身。
            b[cnt] = i;
            dfs(s, cnt + 1);
            s ^= (1 << (i - 1));
        }
}
int main()
{
    cin >> n;
    dfs(0, 0);
}

#include <iostream>
#include <cstdio>
using namespace std;
int n, lg[1030], ans[10];
void dfs(int i, int s) //2
{
    if (i > n)
    {
        for (int p = 1; p <= n; p++)
            printf("%5d", ans[p]);
        cout << endl;
        return;
    }
    for (int ss = s; ss > 0; ss -= ss & (-ss)) //3
    {
        int temp = ss & (-ss); //4
        ans[i] = lg[temp];     //5
        dfs(i + 1, s - temp);  //6
    }
}
int main()
{
    cin >> n;
    lg[1] = 1;
    for (int i = 2; i <= n; i++)
        lg[1 << (i - 1)] = i; //1
    dfs(1, (1 << n) - 1);     //第一次递归时所有位置都没搜
    return 0;
}
// 这个是当事人的 状压。。。哈哈
// 他是回溯最后一个二进制位置。。