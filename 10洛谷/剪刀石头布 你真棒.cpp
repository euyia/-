#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string d[3];
    for (int i = 0; i < 3; ++i)
    {
        cin >> d[i];
    }
    string f[3]{"rock", "scissors", "paper"};
    string g[4]{"F", "M", "S", "?"};
    for (int i = 0; i < 3; ++i)
    {
        if (d[i] == f[i] && d[(i + 1) % 3] == f[(i + 1) % 3] && d[(i + 2) % 3] == f[(i + 1) % 3])
            ;
        else if (d[i] == f[(i + 1) % 3] && d[(i + 1) % 3] == f[(i + 2) % 3] && d[(i + 2) % 3] == f[(i + 2) % 3])
            ;
        else if (d[i] == f[(i + 2) % 3] && d[(i + 1) % 3] == f[i] && d[(i + 2) % 3] == f[i])
            ;
        else
            continue;
        cout << g[i];
        return 0;
        //  主要是它要按照输入的顺序。判断第几个人硬。
        // 而不是能不能硬。他相当于这样的判断 做三次。
        // 那就要把下面这套
    }
    cout << g[3];
    return 0;
}
// 通过取余 找到他们的同行。。非常棒。