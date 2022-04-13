#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
bool ok(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        // 这个为什么小于等于就行了。？？？？？
        if (x % i == 0)
            return true;
    return false;
}
int main()
{
    // 怎么判断是合数 然后输出时候空格怎么处理
    // 也是枚举判断。。是否能取余除了自己意外的另外一个数。。就是排除自己是质数 剩下就是合数
    // 输出空格对话 就是用一个引号 。。。ok了。
    int n;
    cin >> n;
    for (int i = 3; i < n; ++i)
        if (ok(i))
        {
            cout << i << " " << n - i;
            // 这是输出空格的方式？？？？？？
            break;
        }
    return 0;
}
