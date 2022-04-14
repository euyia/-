#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    string s;
    int a, b, c, id;
    bool operator<(const node &t) const
    {
        return a == t.a ? (b == t.b ? (c == t.c ? id > t.id : c < t.c) : b < t.b) : a < t.a;
        //思路就是        就是从外层 一直套娃 套进去。。
        //    有dfs的样子
        // 这竟然也可以。。。这也太无敌了。。。
    }
} nums[21];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> nums[i].s >> nums[i].a >> nums[i].b >> nums[i].c;
        nums[i].id = i;
    }
    sort(nums + 1, nums + n + 1);
    for (int i = 1; i <= n; ++i)
        cout << nuums[i].s << endl;
    return 0;
}

for (int 1 = 1; i <= n; i++) //循环输入开始
{
    cin >> y[i] >> m[i] >> d[i];                     //输入年份，月份和日期
    int s[i] = y[i] * 10000 + m[i] * 100 + d[i] * 1; //计算生日数
}
sort（s + 1, s + n + 1）; //对生日数进行排序
所以我们为什么不可以把年 + 月 + 日摞成一个数字（生日数）呢？ 所以我们为什么不可以把年 + 月 + 日摞成一个数字（生日数）呢？ 所以我们为什么不可以把年 + 月 + 日摞成一个数字（生日数）呢？
// 这题确实 可以这样。。。普通的排序 已经不适用了 。
// 分别开数据 y m d 。。这样 又能保留 原来的数据。。
// 其实这种方法很不错的。。就是有点不好理解而已。。不习惯而已。
// 挺好用的。。特别是在一些大量级的

#include <bits/stdc++.h>
    using namespace std;
struct node
{
    string s;
    int sum, id;
    bool operator<(const node &t) const
    {
        return sum == t.sum ? id > t.id : sum < t.sum;
    }

} nums[1001];
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    for (int i = 1; i <= n; ++i)
    {
        cin >> nums[i].s >> a >> b >> c;
        nums[i].id = i;
        nums[i].sum = a * 10000 + b * 100 + c;
    }
    sort(nums + 1, nums + n + 1);
    for (int i = 1; i <= n; ++i)
        cout << nums[i].s << endl;
    return 0;
}
// 这个是中和了两者的优点。。
// 他这里 没有把id放到压缩维度里面。。。

#include <bits/stdc++.h>
using namespace std;
struct node
{
    string s;
    long long sum, id;
    bool operator<(const node &t) const
    {
        return sum < t.sum;
    }
    // 结构体 要自己定义比较方式。因为不是单一元素。
    // 自定义 就自定义到底 。。啥都自定义。。
    // 自定义 就自定义到底 。。啥都自定义。。
    // 自定义 就自定义到底 。。啥都自定义。。

} nums[1001];
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    for (int i = 1; i <= n; ++i)
    {
        cin >> nums[i].s >> a >> b >> c;
        nums[i].id = i;
        nums[i].sum = a * 99000 + b * 3300 + c * 100 + 100 - i;
        // 注意这里的i的压缩方式。。就是用-i 来表示反向。
    }
    sort(nums + 1, nums + n + 1);
    for (int i = 1; i <= n; ++i)
        cout << nums[i].s << endl;
    return 0;
}
// 这是存粹用维度压缩。。。
// 这是存粹用维度压缩。。。
// 这是存粹用维度压缩。。。
// 算法很丰富的 在某些环境下 无所不能。。

// 这里还有一点就是 他用数组保存那些数据 y m d 数组。也就是可以压 也可以拿到元数据
// 这里还有一点就是 他用数组保存那些数据 y m d 数组。也就是可以压 也可以拿到元数据
// 这里还有一点就是 他用数组保存那些数据 y m d 数组。也就是可以压 也可以拿到元数据