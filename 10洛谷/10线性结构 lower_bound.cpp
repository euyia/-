#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int n, a, b, c = 1;
main()
{
    cin >> n;
    int sum = 0;
    n--;
    cin >> a;
    sum += a;
    multiset<int> s;
    s.insert(a);
    s.insert(192608170);
    s.insert(-192608170);
    // 这边是特判第一个元素。
    // 做题的过程中也是一种抽象。
    // 你要知道你做题核心是什么。。是度量游戏。。你的任务是什么 学习的主线是什么。
    // 不要学着学着偏离了主线
    // 主线是拉升学习。破题。  主线不要忘记。。。
    // 上山 。上山。。上山。。是主线。。下上找河流。。上山呢？？？？？
    // 主线上山。。
    while (n--)
    {
        cin >> a;
        auto r = lower_bound(s.begin(), s.end(), a);
        if (*r == a)
            continue;
        else
        {
            sum += min(abs(a - *r), abs(a - *(--r)));
            s.insert(a);
        }
    }
}

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
set<int> s;
set<int>::iterator k, a;
long long n, x, ans = 0;
int main()
{
    s.insert(INT_MIN / 2);
    s.insert(INT_MAX / 2);
    // 这里不能用inmax  会溢出然后被强转，答案会错。
    // 但是这里选择的数字又很讲究。。
    scanf("%d", &n);

    for (register int i = 1; i <= n; ++i)
    {
        scanf("%d", &x);
        if (s.size() == 2)
        {
            ans += x;
            s.insert(x);
        }
        else
        {
            k = s.lower_bound(x);
            // 这个写成c的样子 。竟然超时了？？？？

            if (*k != x)
            {
                a = k;
                a--;
                // 这边取前后迭代器的方式 也是很朴素的。。没什么大不了的。
                // 就是再定义一个迭代器。然后让他去走。。
                ans += min(abs(*a - x), abs(*k - x));
                s.insert(x);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
// 有些细节吧。。有空可以刷着玩。。
//
// vector<int>res;
//    vector 竟然没有这个封装  只能写成lower_bound开头