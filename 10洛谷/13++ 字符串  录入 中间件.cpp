#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // 我的思路是一行的录入s
    // 然后拆分。。
    // 最好是分开录入。。因为就不用拆开。。
    // 如果他一行只有两个 。。。怎么判断录入两个。这个才是关键。？？？？？？？？？？
    // 算个数来区别对待。同步输出。。
    // 这里主要的问题是怎么录入拿到我们要的数据 比较方便。
    char r[3] = {'+', '-', '*'};
    cin >> n;
    char a;
    int b, c;
    string s;
    string l;
    while (n--)
    {
        // 先录入部分 后面部分
        //  通过前面的情况 判断 实现不同的录入方案
        //  通过前面的情况 判断 实现不同的录入方案
        //  通过前面的情况 判断 实现不同的录入方案
        cin >> l;
        if (isalpha(l[0]))
        {
            a = l[0];
            cin >> b >> c;
        }
        else
        {
            b = stoi(l);
            cin >> c;
        }
        int sum = 0;
        // if选择语句 实现 实际运算符 ·  的方式。。
        // if选择语句 实现 实际运算符   的方式。。
        // if选择语句 实现 实际运算符   的方式。。
        if (a == 'a')
            sum = b + c;
        else if (a == 'b')
            sum = b - c;
        else
            sum = b * c;
        s = to_string(b) + r[a - 'a'] + to_string(c) + '=' + to_string(sum);
        // 这里的string 拼接  实践了 也证明是可以的。。
        cout << s << endl
             << s.size() << endl;
    }
    return 0;
}
// 还是值得刷的。。虽然是自己写出来的。
// 但是收到了别人的启发 的。。
