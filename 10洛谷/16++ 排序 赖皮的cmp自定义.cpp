#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    return a + b > b + a;
    // 这里其实就是赤裸裸的翻译。。
    // 把题目要求直接翻译到cmp规则。。。
    // 可以间的 这cmp的规则定义。。。。。非常强大。。灵活
    // 可以间的 这cmp的规则定义。。。。。非常强大。。灵活
    // 可以间的 这cmp的规则定义。。。。。非常强大。。灵活
};
int main()
{
    cin >> n;
    string a[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; ++i)
        cout << a[i];
    return 0;
}