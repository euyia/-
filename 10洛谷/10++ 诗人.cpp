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
    int s = 0;
    while (n)
    {
        s = s * 10 + n % 10, n /= 10;
    }
    cout << s;
    return 0;
}
// 正负数都可以
// 真是玩数玩的如火纯情啊。。。
// 而且这题他还。。78种解法。。。。。。

#include <iostream>  //
using namespace std; //你的名字，是我不变的信仰
int main()           //程序主体，是否像你一样纯洁
{
    int x, k = 1, n; //你看这些世间繁华
    cin >> n;        //都敌不过键盘轻轻敲击
    while (1)        //无限的单曲循环
    {
        for (x = 100; x >= 1; x--) //是否还能想起最初的信仰
            if ((7 * x + 21 * k) * 52 == n)
            {                      //倘若这个世界不是你想象的模样
                cout << x << endl; //你是否愿意献出你的灵魂
                cout << k;         //成为马猴烧酒（大雾
                return 0;          //浑浊的灵魂宝石，祭奠受伤的心灵
            }
        k++; //一点又一点改变，只为有一个美好的结局
    }
    return 0; //世界，终究不是你想象的模样
}
碰到一个才子。。哈哈、