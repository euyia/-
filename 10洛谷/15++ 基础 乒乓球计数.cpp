#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>

// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int cnt = 1, sum;
int a, b, i;
void helper(int n)
{
    for (i = 0, a = 0, b = 0; i < s.size(); ++i)
    {
        if (s[i] == 'W')
            a++;
        else if (s[i] == 'L')
            b++;
        if ((a >= n || b >= n) && abs(a - b) >= 2)
            cout << a << ':' << b << endl, b = 0, a = 0;
    }
    cout << a << ':' << b << endl;
}
int main()
{
    string s;
    char c;
    while (cin >> c)
    {
        if (c == 'E')
            break;
        s += c;
    }
    helper(11);
    cout << endl;
    helper(21);
    return 0;
}
// 其实不是再打一次重复的。。因为即使最后一次刚好21:0
// 再打印一次 是0:0的。。他这样是对的。

// 这个封装真是太爽了。。。
// 这个封装真是太爽了。。。
// 这个封装真是太爽了。。。大大的简化了代码
// 原来要活生生写两遍的。
// 难以置信这是我自己写出来的代码。。简直牛逼死了。