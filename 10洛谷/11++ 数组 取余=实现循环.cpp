#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    int i = 1, x = 1;
    int b[n * n + 1];
    bool flag = 0;
    // bool的灵活使用 他本身也是0和1
    while (cin >> a)
    {
        while (a--)

            b[i++] = flag;
        flag = !flag;
    }
    for (int i = 1; i <= n * n; ++i, ++x)
    {
        cout << b[i];
        if (x == n)
            // 这里让x循环做事情 。
            cout << '\n', x = 0;
    }
    return 0;
}
// 这题先存入数组 然后再处理打印 。
// 然后就是bool flag的使用
// 和x 两线程的循环迭代。。
// 都很酷。。
// 然后这里测试终于发现了 用alt +d 可以提示电脑已经读入完成
// 这题虽然自己做出来了。。但是还是挺酷的。

#include <bits/stdc++.h>
using namespace std;
int i, x;
int main()
{
    int n, a;
    cin >> n;

    while (cin >> a)
    {
        i++;
        while (a--)
        {
            if (x == n)
                cout << '\n', x = 0;
            // 这个判断要放在循环的前面
            // 会影响什么 。你观察下打印就知道了。
            // 放在循环的前面还是后面的影响。
            // 第一行 会多一个1 。。
            11101111 1101111 if (i % 2 == 0)
                    cout
                << 1;
            else cout << 0;
            x++;
        }
    }
    return 0;
}
// 这里用%2 来判断要输出0 还是1  是更加通用的方法。
// 比如他有三个数 1 2 3 。循环来。。那么我们可以%3.。
// 然后上面的用bool就不行了。
// 用%来做循环。。。是更加通用的
// 用%来做循环。。。是更加通用的
// 用%来做循环。。。是更加通用的
// 这个代码框架非常简洁。
// 通用
// 通用
// 通用
// 实现也很简单 就是%mod==1 2 3 分别做什么。。。
// 实现也很简单 就是%mod==1 2 3 分别做什么。。。
// 实现也很简单 就是%mod==1 2 3 分别做什么。。。