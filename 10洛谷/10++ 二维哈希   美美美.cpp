#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maxt = 100000;
    int n, a;
    cin >> n >> a;
    // vector<int> nums(n + 1, vector<int>(10000, 0));
    // 第一次发现 原来不单单时间会爆 空间也会爆
    map<long long, int> mp;
    for (int i = 0; i < a; ++i)
    {
        int x, y, z;
        cin >> x, >> y >> z;
        if (x == 1)
        {
            int d;
            cin >> d;
            mp[y * maxt + z] = d;
        }
        else
        {
            cout << mp[y * maxt + z] << endl;
        }
    }
    return 0;
}
// 洛谷宝贝多。。难题 宝贝多。。怎么昨天刚说的今天又忘了。。

int main()
{
    // map<int, map<int, int>> mp;
    // 这就相当于二维数组。。
    // 因为这里下标是自定义的。所以要自己写个int。。
    // 如果怕爆空间。？？？可以用二维哈希
    // 如果怕爆空间。？？？可以用二维哈希
    // 如果怕爆空间。？？？可以用二维哈希
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, unordered_map<int, int>> mp;
    // 他们不是不会用。而是选择不用。。stl。。

    int n, a;
    cin >> n >> a;
    for (int i = 0; i < a; ++i)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 1)
        {
            int c;
            cin >> c;
            mp[y][z] = c;
        }
        else
        {
            cout << mp[y][z] << endl;
        }
    }
    return 0;
}
// 扁平化为1维的虽然难看。。但是看了下时间。。比二维的快很多。。
// 简单说就是 虽然丑 但是快，，
// 二维看起来优美。但是慢点。二维map 写法和数组完全一样。非常优美
// 真的非常优美。。
// 一维 如果爆long long 可以用string
// map<string,map<string,int>>mp;