#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a, b, c, sum, id;
    node(int a, int b, int c, int id) : sum(a + b + c), id(id), a(a), b(b), c(c){};
    operator<(const node &t) const
    {
        return sum == t.sum ? (a == t.a ? id < t.id : a > t.a) : sum > t.sum;
    }
    node() : a(0), b(0), c(0), id(0), sum(0){};
    // 如果要成为数组的元素。。就必须要给默认的构造函数。。？？？？？
    // 如果要成为数组的元素。。就必须要给默认的构造函数。。？？？？？
    // 如果要成为数组的元素。。就必须要给默认的构造函数。。？？？？？
    // 可以直接录入 不用构造。但是如果要用构造。那么就要有默认构造。！！！！！！好像是这样的霸王条款
} nums[301];
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    for (int i = 1; i <= n; ++i)
    {
        cin >> nums[i].a >> nums[i].b >> nums[i].c;
        nums[i].id = i;
        nums[i].sum = nums[i].a + nums[i].b + nums[i].c;
    }
    sort(nums + 1, nums + n + 1);
    for (int i = 1; i <= 5; ++i)
        cout << nums[i].id << " " << nums[i].sum << endl;
    return 0;
}

// 这个题目其实完全就是用结构体 的定义排序规则 解决掉了。。
// 这个三元运算符能够嵌套。。
// 这个三元运算符能够嵌套。。
// 这个三元运算符能够嵌套。。
// 简直了。
// 强无敌 。。。非常的简约的 排序描述方式。
return sum == t.sum ? (a == t.a ? id < t.id : a > t.a) : sum > t.sum;

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int i, calc[20000], x, y, z, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x >> y >> z;
        calc[i] = (x + y + z) * 100000000 + x * 100000 + 99999 - i;
    }
    sort(calc + 1, calc + n + 1);
    for (i = n; i > n - 5; i--)
        cout << 99999 - calc[i] % 100000 << ' ' << calc[i] / 100000000 << endl;
}
// 他用维度压缩。。然后在维度压缩的过程中 通过权重的控制  来体现优先级。。
// 而且他还能给他还原。比如 他用四个数去加密成一个数字
// 然后右用这个数字解密还原成原来的四个数字。。
// 有加密的效果了。。
//
//100000位置上的为分界点。。刚好可以用取余 和除法取到 两个有用的数字。。
// 挺秒的说实话。。
//
// 但是说实话 都没有我这个三元运算符 来的😎。。这个真没有白刷。。
// 好东西 就应该多刷。。会变成自己的杀手锏
// 好东西 就应该多刷。。会变成自己的杀手锏
// 好东西 就应该多刷。。会变成自己的杀手锏
// 好东西 就应该多刷。。会变成自己的杀手锏
// 好东西 就应该多刷。。会变成自己的杀手锏
// 好东西 就应该多刷。。会变成自己的杀手锏
// 好东西 就应该多刷。。会变成自己的杀手锏