#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool ok(int x)
{
    if (x < 2)
        return 0;
    if (x == 2)
        return 1;
    for (int i = 2; i <= (sqrt(x)); ++i)
        if (x % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int dp[100001];
    int sum = 0;
    int cnt = 0;
    int i = 1;
    while (sum + i <= n)
        // 找质数 。。这个主要是你要用预先的视角去判断。
        // 而不能已经打印了 才去判断。这样不行。
        // 所以跳出条件 要用当前。还是用之前。还是用next的。。。很光剑。
        // 所以跳出条件 要用当前。还是用之前。还是用next的。。。很光剑。
        // 所以跳出条件 要用当前。还是用之前。还是用next的。。。很光剑。
        1
        {
            if (ok(i))
                sum += i, cnt++, cout << i << endl;
            i++;
        }
    cout << cnt;
    return 0;
}

int l;
bool prime[100000];
int cnt;
int main()
{
    memset(prime, 1, sizeof(prime)); //埃筛一定要初始化数组值
    cin >> l;
    prime[1] = 0;
    prime[0] = 0;
    for (int i = 2; i < 100000; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j < 100000; j += i)
            {
                prime[j] = 0;
            }
        }
    } //筛取质数

    // 这是什么埃氏帅选发。。
