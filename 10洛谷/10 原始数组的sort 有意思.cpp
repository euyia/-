#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    set<int> s{4, 6, 9, 11};
    set<int> s{4, 6, 9, 11};
    set<int> s{4, 6, 9, 11};
    set<int> s{4, 6, 9, 11};
    set<int> s{4, 6, 9, 11};
    // set 可以这样初始化。。好简单。
    // set 可以这样初始化。。好简单。
    // set 可以这样初始化。。好简单。
    if (a != 2)
    {
        if (s.count(a))
            cout << 30;
        else
            cout << 31;
    }
    else
    {
        if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
            cout << 29;
        else
        {
            cout << 28;
        }
    }
    return 0;
}