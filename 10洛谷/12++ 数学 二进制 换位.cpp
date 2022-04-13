#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    cout << (((n & 0x0000ffff) << 16) | ((n & 0xffff0000) >> 16));
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n;
    cin >> n;
    cout << ((n << 16) + (n >> 16));
    return 0;
}
// 不知道为啥这样不行。。。而且是局部不行。