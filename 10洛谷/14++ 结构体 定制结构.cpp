#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    string s;
    int a, b, c, sum, id;
    // 他也是绝了 把id 也放进来了。。是啊 为啥不行呢。就是可以无限放东西。
    node(int a, int b, int c, int id, string s) : s(s), a(a), b(b), c(c), id(id), sum(a + b + c){};
    node() : s(""), a(0), b(0), c(0){};
    //  等下试下看能不能直接在初始化这边做加法 然后给这里面的一个成员变量赋值。
    // 可以实现的。。这个sum这样初始化。。
    // 可以实现的。。这个sum这样初始化。。
    // 可以实现的。。这个sum这样初始化。。
    // 我就知道这个东西 我早晚会用到。。那时候就一直刷
    // 我就知道这个东西 我早晚会用到。。那时候就一直刷
    // 我就知道这个东西 我早晚会用到。。那时候就一直刷
    // 我就知道这个东西 我早晚会用到。。那时候就一直刷
    // 特别实用的功能。。。。。。。。
    bool operator<(const node &t) const
    {
        return sum == t.sum ? id < t.id : sum > t.sum;
        // sum 是反序排。。id正序排
        // 他都不用考虑两个的优先级吗？？？很神奇。。
        // 其实你脑子可以模拟的。两者先后 没关系的。都能实现最终的效果。
    }
};
int main()
{
    int n;
    cin >> n;
    node nums[n];
    for (int i = 0; i < n; ++i)
    {
        string t;
        int a, b, c;
        cin >> t >> a >> b >> c;
        nums[i] = node(a, b, c, i, t);
        // 这个参数的顺序要对。
        // 穿进去就能直接生成sum的数据。。。
    }
    sort(nums, nums + n);
    cout << nums[0].s << " " << nums[0].a << ' ' << nums[0].b << ' ' << nums[0].c << endl;
    return 0;
}
// stl 真的牛逼的地方 在于 自己能够自己定制自己的规则。
// 然后这些规则的使用 就像是官方的一样使用效果。。
// 就像你玩游戏。能自己改规则一样。。
// 就像你玩游戏。能自己改规则一样。。
// 就像你玩游戏。能自己改规则一样。。
#include <bits/stdc++.h>
using namespace std;
struct node //用结构体存学生的各项信息
{
    string name; //用字符串存名字更方便
    int sx, yw, yy, zf, id;
    /*注意这里除了要存总分还要再存一个ID
	题面上说如果有多个总分相同的学生，输出靠前的那位
	好像其他的题解都没有提到过处理*/
} student[1010];
bool cmp(node x, node y)
{
    if (x.zf == y.zf)
        return x.id < y.id; //如果总分相同返回ID靠前的
    return x.zf > y.zf;     //返回总分更大的
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> student[i].name >> student[i].sx >> student[i].yw >> student[i].yy;
        student[i].zf = student[i].sx + student[i].yy + student[i].yw; //将总分加起来便于比较
        student[i].id = i;                                             //存储学生的ID
    }
    sort(student + 1, student + n + 1, cmp);                                                         //将学生的信息排序
    cout << student[1].name << " " << student[1].sx << " " << student[1].yw << " " << student[1].yy; //输出所有题上给的信息
    return 0;
}
// 他这里的亮点是 连 cmp也给承包了。。。
// 这个cmp 可以写在两个地方。
// 一个是他这样。另外一种就是直接写在node里面。。
