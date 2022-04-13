#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b == 0)
    {
        cout << 0;
        return 0;
    }
    int n = c / b;
    int k = c % b;
    if (!k)
        cout << (a - n > 0 ? a - n : 0);
    else
        cout << max(a - n - 1, 0);
    return 0;
}
// 输出。。要写三元运算的话 要加括号。
。。
// max是可以的。。。。ok了。。竟然可以这样。
// 三元 和max都是可以的。。nice
// 有些题目是真的故意给你挖坑的。
// 像这题 b=0的情况 其实根本不需要有的。。因为没有意义。。
// 他就非得有。。就是故意挖坑。。。。。