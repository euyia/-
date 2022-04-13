#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    string s;
    int a, b;
    node(string s, int a, int b) : a(a + 1), b(b * 1.2 > 600 ? 600 : b * 1.2), s(s){};
    // 这个初始化 还能直接在这里面这些写运算式子的。。
    // 牛逼啊。这个。。
    // 宽容度 好高啊。。。
    // 宽容度 好高啊。。。
    // 宽容度 好高啊。。。
    // 你想的到的操作 可能他都支持。。
};
int main()
{
    int a, b, n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s >> a >> b;
        node d = node(s, a, b);
        cout << d.s << ' ' << d.a << ' ' << d.b << endl;
    }
    return 0;
}