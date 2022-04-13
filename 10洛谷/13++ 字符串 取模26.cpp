#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        // if (s[i] + n > 'z')
        //     s[i] = (s[i] + n) % 'z' + 96;
        // else
        //     s[i] += n;
        s[i] = (s[i] - 'a' + n) % 26 + 'a';
    }
    cout << s;
    return 0;
}
// 取模的目标数 ==循环的个数
// 取模的目标数 ==循环的个数
// 取模的目标数 ==循环的个数