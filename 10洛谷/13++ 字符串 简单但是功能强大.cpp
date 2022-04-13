#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int boy, girl;
int main()
{
    int a[3] = {0};
    string s;
    getline(cin, s);
    char c;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ':')
            c = s[i - 1];
        else if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == ';')
        {
            if (isdigit(s[i - 1]))
            {
                a[c - 'a'] = res;
                res = 0;
            }
            else
            {
                a[c - 'a'] = a[s[i - 1] - 'a'];
            }
        }
    }
    cout << a[0] << ' ' << a[1] << ' ' << a[2];
    return 0;
}
// 很简单的写法 结构。
// 但是实现了很牛逼的有趣的功能。。
// 效果。。
//a:=3;b:=b;c:=a;b:=8;a:=b;
//a:=3;b:=b;c:=a;b:=8;a:=b;
// 就能完成这种看似复杂的信息的提取。。
// 还有相互赋值的。。
// 。。。离谱。
int c[3];
char a, b;
int main()
{
    while (scanf("%c:=%c", &a, &b) == 2)
    {
        c[a - 'a'] = isdigit(b) ? b - 'a' : a[b - 'a'];
    }
    printf("%d %d %d", c[0], c[1], c[2]);
}
a : = 3;
b : = b;
c : = a;
b : = 81;
a : = b;
// 像这种多个数字就不行了。
// 但是也可以用正则去实现。。我记得。。。之前那个1024程序员那个人。
//a:=3;b:=b;c:=a;b:=8;a:=b;
//a:=3;b:=b;c:=a;b:=8;a:=b;
// 操作看似简单。。但是实现了 有意义的数据抽象 和读入的功能。。
// 提取了保留了有用的数据。。