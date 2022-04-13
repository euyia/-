#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

string a, b, c;
int main()
{
    string s, t, last;
    cin >> a >> b >> c;
    if (a[1] == '<')
        swap(a[0], a[2]);
    if (b[1] == '<')
        swap(b[0], b[2]);
    if (c[1] == '<')
        swap(c[0], c[2]);
    if (a[0] == c[0])
        cout << a[0] << b[0] << b[2];
    else if (a[0] == b[0])
        cout << a[0] << c[0] << c[2];
    else if (b[0] == c[0])
        cout << b[0] << a[0] << a[2];
    return 0;
}
// 其实就是发现一个共性。就是 他这边输入的规律。
// 如果要成立。。必然是会有一个字母连续两次出现在头位置。。
