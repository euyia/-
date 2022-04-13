#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int id, a, b, sum;
    node(int id, int a, int b) : id(id), a(a), b(b){};
    int soso()
    {
        return a * 0.7 + b * 0.3;
    }
    bool ok()
    {
        int k = soso();
        return k >= 80 && (a + b) > 140;
    }
};
int main()
{
    int n;
    cin >> n;
    int a, b c;
    while (n--)
    {
        cin >> a >> b >> c;
        node d = node(a, b, c);
        // c++ 可以直接声明结构体。。不用c一样 要struct node

        if (d.ok())
            cout << "Excellent" << endl;
        else
            cout << "Not excellent" << endl;
    }
    return 0;
}
// 这个可以说又进一步了。
// 结构体里面放函数。。美滋滋。。功能越来越强了。。
// 结构体里面放函数
// 结构体里面放函数
// 结构体里面放函数