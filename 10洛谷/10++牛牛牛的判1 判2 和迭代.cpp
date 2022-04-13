#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
char nums[101];
int main()
{
    // 抽象还是挺简单的。
    // 你要去用一些特例。从里面提取特征点。
    // 然后反过来用特征点来概括
    // 重要的是你要知道抽象的价值。。就是提取核心特征。 核心价值。
    // 这是由特殊例子 到普通规律的提取 。这个能力应该是要考察的。。
    // 自己举例子 然后从有限又足够多的例子中去抽象出普遍性
    // 由特例-》发现普遍性的一种能力。
    // 由特例 抽象出里面的特征 和共性。
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    int l = 0, r = 0;
    while (l < n && nums[l] == '0')
        l++;
    l++;
    int cnt = 1;
    while (l < n && nums[l] == '0')
    {
        cnt++;
        l++;
    }
    if (l == n)
    {
        cout << "YES";
        return 0;
    }
    r = l + 1;
    while (l < n && r < n)
    {
        while (r < n && nums[r] == '0')
            r++;
        if (r == n)
            break;
        if (r - l != cnt)
        {
            cout << "NO";
            return 0;
        }
        l = r;
    }
    cout << "YES";
    return 0;
}
void soso()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> nums[i];
        if (nums[i] && !a)
            a = i;
        else if (nums[i] && !b)
            b = i;
    }
    for (int i = b + 1, i <= n; ++i)
        if (nums[i] && i - b == b - a)
            a = b, b = i;
        else
            return !cout << "no";
    cout << "yes";
}
int nums[101], a, b, n;
// 这边直接数字可以？？不应该是逐个取吗。
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> num[i];
        if (nums[i] && !a)
            a = i;
        else if (nums[i] && !b)
            b = i;
    }
    for (int i = b + 1, b <= n; ++i)
        if (nums[i] && i - b == b - a)
            a = b, b = i;
        // 这个顺序不能反掉。。
        // 下面也当
        else if (nums[i])
            return !cout << "NO";
    cout << "YES";
}
#include <bits/stdc++.h>
using namespace std;
int nums[101], a, b, n;
// 这边直接数字可以？？不应该是逐个取吗。
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &nums[i]);
        if (nums[i] && !a)
            a = i;
        else if (nums[i] && !b)
            b = i;
    }
    for (int i = b + 1; i <= n; ++i)
        if (nums[i] && i - b == b - a)
            a = b, b = i;
        else if (nums[i])
            return ！printf("NO");
    printf("YES");
}
#include <cstdio>
int n, a[105], l1, l2;
int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%1d", nums + i);
        // scanf("%1d",&nums[i]);
        // 只输入一个。。还能这样控制的。。我套。。怪不得a数组可以用。。原来是这样控制。
        if (a[i] && !l1)
            l1 = i; //记录第一个1
        else if (a[i] && !l2)
            l2 = i; //记录第2个1
    }
    for (int i = l2 + 1; i <= n; i++)
        if (a[i] && i - l2 == l2 - l1)
            l1 = l2, l2 = i; //间隔相同，更新
        else if (a[i])
            return !printf("NO"); //不相同直接退出
    printf("YES");
}
// 简单题 就感觉如此牛逼了。。
// 好委屈。明明走的路是对的。。但是却得不到应有的肯定。
// 任何一个伟大的思想 ，都有一个微不足道的开始