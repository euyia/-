#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 进制的本质就是风能进一
    int a, b;
    string s;
    cin >> a >> s >> b;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = a * res + s[i] - '0';
        else
            res = a * res + s[i] - 'A' + 10;
    }
    int t[10000000];
    int j = 0;
    while (res > 0)
    {
        t[++j] = res % b;
        res /= b;
    }
    for (; j >= 1; j--)
    {
        // 你要自己知道j指在哪里。。这里0我们是没放东西的
        if (t[j] > 10)
            cout << char(t[j] + 'A' - 10);
        else
            cout << char(t[j] + '0');
        //
    }
    return 0;
}
// 这边两点是用数组来存。取余的数字。
// 因为取余有可能大于10.。如果用string
// string其实也可以 但是string 存了之后 。你无法保证位数。。。
// 比如13 你怎么确定这个数子是什么。。他是一位还是两位。。
int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;
    int res = 0;
    int nums[100000];
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = a * res + s[i] - '0';
        else
            res = a * res + s[i] - 'A' + 10;
    }
    int j = 0;
    while (res > 0)
    {
        nums[j++] = res % b;
        res /= b;
    }
    while (j--)
        if (nums[j] > 10)
            cout << char(nums[j] - 10 + 'A');
        else
            cout << char(nums[j] + '0');
    return 0;
}
int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = a * res + s[i] - '0';
        else
            res = a * res + s[i] - 'A' + 10;
    }
    int j = 0, c[1000000];
    while (res)
    {
        c[j++] = res % b;
        res /= b;
    }
    while (j--)
    {
        if (c[j] > 10)
            cout << char(c[j] - 10 + 'A');
        else
            cout << char(c[j] + '0');
    }
    return 0;
}
int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = a * res + s[i] - '0';
        else
            res = a * res + s[i] - 'A' + 10;
    }
    int j = 0, c[1000001];
    while (res)
    {
        c[j++] = res % b;
        res /= b;
    }
    while (j--)
    {
        if (c[j] > 10)
            cout << char(c[j] - 10 + 'A');
        else
            cout << char(c[j] + '0');
    }
    return 0;
}
int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = a * res + s[i] - '0';
        else
            res = a * res + s[i] - 'A' + 10;
    }
    int j = 0, c[10000];
    while (res)
    {
        c[j++] = res % b;
        res /= b;
    }
    while (j--)
    {
        if (c[j] > 10)
            cout << char(c[j] - 10 + 'A');
        else
            cout << char(c[j] + '0');
    }
    return 0;
}
int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = a * res + s[i] - '0';
        else
            res = a * res + s[i] - 'A' + 10;
    }
    int j = 0, c[10000];
    while (res)
    {
        c[j++] = res % b;
        res /= b;
    }
    while (j--)
    {
        if (c[j] > 10)
            cout << char(c[j] - 10 + 'A');
        else
            cout << char(c[j] + '0');
    }
    return 0;
}
int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
        if (isdigit(s[i]))
            res = a * res + s[i] - '0';
        else
            res = a * res + s[i] - 'A' + 10;
    // 数字 其实是相对值。。
    // 绝对值才是char 本来的样子。。
    // 这个就是在相对值和绝对值 之间的转化。
    int j = 0, c[1000000];
    while (res)
    {
        c[j++] = res % b;
        res /= b;
    }
    while (j--)
        if (c[j] > 10)
            cout << char(c[j] - 10 + 'A');
        else
            cout << char(c[j] + '0');
    return 0;
}
int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
        // 这边是一位一位的从前面取。。下面相反。
        if (isdigit(s[i]))
            res = a * res + s[i] - '0';
        else
            res = a * res + s[i] - 'A' + 10;
    // 取相对值就是扣去他的参照数。
    int j = 0, c[110000];
    while (res)
    {
        c[j] = res % b;
        res /= b;
    }
    // 这就是一位一位的从后面取
    while (j--)
        if (c[j] > 10)
            cout << char(c[j] - 10 + 'A');
        else

            cuot << char(c[j] + '0');
    // 还原绝对值 就加上他的参照数。
    return 0;
}
// 总体有两个相反的操作。
// 一个是从前往后取。。一个相反
// 一个是转成相对值也就是数字。一个是转成绝对值 也就是asic码。。
// 习惯这些操作挺好的。
// 数字其实是相对值
// 数字其实是相对值
// 数字其实是相对值
// 所以就要减去相对物 ‘0' ’A';
// 进制的本质 就是逢n进一。