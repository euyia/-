#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int a[n + 1], b[n + 1];
    long long sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i];
        sum += a[i];
    }
    if (sum <= p)
    {
        cout << -1;
        return 0;
    }
    // check 写在外面是好的。。但是这些变量就要弄成全局的了
    double l = 0, r = 1000;
    while (l < r - 1e-6)
    {
        double mid = (l + r + 1) / 2;
        double q = p * mid;
        // 这样要的不是速度 要的是总量。
        sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (mid * a[i] <= b[i])
                continue;
            sum += (a[i] * mid - b[i]);
        }
        if (sum > q)
            r = mid - 1;
        else
            l = mid;
    }
    cout << l;
    return 0;
}

#include <iostream>
using namespace std;
int n;    //设备数量
double p; //充电器的充电速度
double a[200000], b[200000];
double lbound = 0, rbound = 1e10;
double sum = 0; //需要的能量总和（验证答案时）、所有设备的消耗能量速度总和（-1特判时）
int check(double ans)
{                       //验证答案
    double q = p * ans; //充电器最多提供的能量
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] * ans <= b[i])
        {             //若设备已有的能量大于使用时间需要的能量
            continue; //忽略该设备
        }
        sum += (a[i] * ans - b[i]); //否则用充电器充电，使设备已有的能量等于使用时间需要的能量，并记录需要的能量。
    }
    return sum <= q; //最后比较需要的能量总和和充电器最多提供的能量。
}
int main()
{
    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        sum += a[i];
    }
    if (sum <= p)
    { //若所有设备的消耗能量速度总和还是小于充电器的充电速度，输出-1。
        cout << -1.000000 << endl;
        return 0;
    }
    while (rbound - lbound > 1e-6)
    {
        double mid = (lbound + rbound) / 2;
        if (check(mid))
        {
            lbound = mid;
        }
        else
        {
            rbound = mid;
        }
    }
    cout << lbound << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double p;
    cin >> n >> p;
    double a[n + 1], b[n + 1];
    double sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i];
        sum += a[i];
    }
    if (sum <= p)
    {
        cout << -1.000000;
        return 0;
    }
    double l = 0, r = 1e10;
    while (r - l > 1e-6)
    // 在double的精度之下。。二分 好像可以写的异常简洁。
    // 但是这个判断的依据就要 这样他不会相等。
    {
        double mid = (l + r) / 2;
        double q = p * mid;
        sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (mid * a[i] <= b[i])
                continue;
            sum += (a[i] * mid - b[i]);
        }
        if (sum > q)
            r = mid;
        else
            l = mid;
        // 这边所有的r+l+1 mid+1 啥的 都可以无了。因为doble 二分可以取到他应有的值
        // 不会被向下取整或者向上取整。。
    }
    cout << l;
    return 0;
}
// 有一点。。long long 即使数字再大。。他还是整型！！！！ 还是会被取整。。
// long long数字大 并不等于 double 一样的功能。。
// long long 是整型
// long long 是整型
// long long 是整型
// long long 是整型
// double才是小数
// double的二分写法 似乎可以异常简洁。。
// 异常简洁
// 异常简洁
// 异常简洁