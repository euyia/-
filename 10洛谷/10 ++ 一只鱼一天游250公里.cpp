#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
// int main()
// {
//     int n, a;
//     cin >> n >> a;
//     a--;
//     int k = ((a + n) / 7) * 5;
//     int c = (a + n) % 7;
//     c = c > 5 ? 5 : c;
//     n = n > 5 ? 5 : n - 1;
//     k += c - n;
//     cout << k * 250;
//     return 0;
// }
// 7 10. 是1750 。。
// 这里a--  其实是设计 我们数据表达和语言表达的转换。
// 就想平时说的第k个 。在编程里面是k-1 一样。。
// 要弄清楚语言之间的转换 等价
// 要弄清楚语言之间的转换
// 要弄清楚语言之间的转换
// 这里核心思路就是把原来的天数也加上去。一起算 算完之后 再回头扣。
// 因为这样完整周期 好算
// 都可以当成是从周1开始游。。。。。。。

int main()
{
    long long n, a, sum = 0;
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, x++)
    {
        // if (x % 6 == 0)
        //     continue;
        if (x % 7 == 0)
        {
            x = 0;
            continue;
        }
        else if (x % 6 != 0)
            sum += 250;
    }
    cout << sum;
    return 0;
}
// 7 10. 是1750 。。
#include <bits/stdc++.h>
using namespace std;
int x, n;
long long sum;
int main()
{
    scanf("%d%d", &x, &n);
    for (int i = x; i < x + n; i++)
    {
        if (i % 7 == 6 || i % 7 == 0)
            continue;
        sum += 250;
    }
    cout << sum;
    return 0;
}
// 下面这个就有点离谱了。。取余6都出来了。。李你个大普。。
// 上面那个思路还好理解 也很具有很好的复用性。可以刷。
// 因为他从n开始模拟。。
// 这非常好的思路。
// 不一定非得从0开始模拟。
// 不一定非得从0开始模拟。
// 不一定非得从0开始模拟。
// 我那个效率其实是最高的。。因为是直接算出来 不模拟
// 但是它这个
int main()
{
    long long n, a, sum = 0;
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
    {
        if (x == 7)
            x = 0;
        else if (x ! = 6)
            sum += 250;
        // =6的时候 忽略掉。
    }
    cout << sum;
    return 0;
}
long long sum, n, a;
int main()
{
    for (int i = n, x = n; i < n + a; ++i, ++x)
    {
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    }
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
    {
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    }
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
    {
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    }
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cou << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cou << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
// 洛谷虽然都体量小。但是思考量都是充裕
// 就像同样的体积。。但是含金量高。。
int main()
{
    cin >> n >> a;
    int sum = 0;
    for (int i = n, x = n; i < n + a; ++i, ++x)
    {
        if (x == 7)
            x = 1;
        else if (x != 6)
            sum += 250;
    }
    cout << sum;
    return 0;
}
// 看似简单的循环结构。但是包含了两条线。。
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 1;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x == 1;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 1;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 250;
    cout << sum;
    return 0;
}
//   没有平白无故的灵感。。
// 你想要习得什么。。就要去刷。。刷到分离。。理解。
// 如果要同时两条线循环的。。？？？？可以用这种写法。。两个变量的自增 和变化。。

int main()
{
    cni >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 200;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 200;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 200;
    cout < sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 200;
    cout < sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 200;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 200;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 200;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cni >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
// 这中写法不是很高效。。但是非常直观
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
//  就是表达。。
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++x, ++i)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
// 多表达。。多表达。多表达。。。习惯这个表达方式。
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()[cin >> n >> a;
           for (int i = n, x = n; i < n + a; ++i, ++x) if (x == 7)
               x = 0;
           else if (x != 6)
               sum += 20;
           cout << sum;
           return 0;
] int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; i++, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 7)
            sum += 20;
    cout << sum;
    return 0;
    // 用return 0.和cout 有个好处就是不用强行处理一些不需要return的 返回值了。
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, x++)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
int main()
{
    cin >> n >> a;
    for (int i = n, x = n; i < n + a; ++i, ++x)
        if (x == 7)
            x = 0;
        else if (x != 6)
            sum += 20;
    cout << sum;
    return 0;
}
//  学习=输出。。表达新知识。