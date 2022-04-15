#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
double x = 1, y = 2, z = 3;
int main()
{
    cin >> x >> y >> z;
    if (z / x > 10 || z / y > 10)
    {
        cout << "No!!!";
        return 0;
    }
    // 这是截肢一些掉。
    // 也是粗粗的截肢。。
    // 有个问题是如果他们除起来不是整数呢？？？？
    // int 会给他处理掉的。
    // 用double把。然后取0.001
    int a[3];
    int cnt = 0;
    for (int i = 123; i <= 987; ++i)
    {
        a[0] = i;
        a[1] = i / x * y;
        a[2] = i / x * z;
        if (a[1] > 987 || a[2] > 987)
            break;
        bool flag = true;
        set<int> s;
        for (int j = 0; j < 3; ++j)
        {
            int sum = a[j];
            for (int w = 0; w < 3; ++w)
            {

                int k = sum % 10;
                if (!k || s.count(k))
                {
                    flag = false;
                    break;
                }
                s.insert(k);
                sum /= 10;
            }
            if (!flag)
                break;
        }
        if (flag)
        {
            cnt++;
            cout << a[0] << " " << a[1] << " " << a[2] << endl;
        }
    }
    if (!cnt)
        cout << "No!!!";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int a, b, c, k, st, ed, check = 1, l[10];
int main()
{
    scanf("%d%d%d", &a, &b, &c);
    for (int _i = 123; _i < 987; _i++)
    {
        memset(l, 0, sizeof(l));
        int i = _i, j = _i * b / a, k = _i * c / a, flg = 1;
        if (j > 987 || k > 987)
            break;
        while (i)
            l[i % 10]++, i /= 10;
        while (j)
            l[j % 10]++, j /= 10;
        while (k)
            l[k % 10]++, k /= 10;
        if (l[0])
            flg = 0;
        else
            for (int _j = 1; _j <= 9; _j++)
                if (!l[_j])
                    flg = 0;
        if (flg)
            printf("%d %d %d\n", _i, _i * b / a, _i * c / a), check = 0;
    }
    if (check)
        puts("No!!!");
    return 0;
}
// 这个是不考虑除不尽的情况。然后 算比较简约的。。
// 这边的数据看速度差不多的。
// 还没有考虑减枝这些问题。
#include <bits/stdc++.h>
using namespace std;
int a, b, c, k, st, ed, check = 1, l[10];
int main()
{
    scanf("%d%d%d", &a, &b, &c);
    k = __gcd(__gcd(a, b), c);
    a /= k, b /= k, c /= k;
    st = 123 / a + (123 % a > 0), ed = 987 / c;
    for (int _i = st; _i <= ed; _i++)
    {
        memset(l, 0, sizeof(l));
        // 主要是这个memset 我之前不知道怎么去重置一个数组
        // 主要是这个memset 我之前不知道怎么去重置一个数组
        // 主要是这个memset 我之前不知道怎么去重置一个数组
        int i = _i * a, j = _i * b, k = _i * c, flg = 1;
        while (i)
            l[i % 10]++, i /= 10;
        while (j)
            l[j % 10]++, j /= 10;
        while (k)
            l[k % 10]++, k /= 10;
        for (int _j = 1; _j <= 9; _j++)
            if (!l[_j])
                flg = 0;
        if (flg)
            printf("%d %d %d\n", _i * a, _i * b, _i * c), check = 0;
    }
    if (check)
        puts("No!!!");
    return 0;
}
// 他这个gcd 主要能规避 那种除起来不是整数的情况。。
// 也不行啊。因为 他也都能取到数字 然后才去验证？？？
