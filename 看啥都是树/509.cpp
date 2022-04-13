#include <vector>
using namespace std;
int fib(int n)
{
    if (n < 2)
        return n;
    vector<int> res(n + 1);
    res[0] = 0;
    res[1] = 2;
    for (int i = 0; i <= n; ++i)
    {
        res[i] = res[i - 1] + res[i - 2];
    }
    return res[n];
}
// 有空重复下。。。这个体现了。动态的精髓。。