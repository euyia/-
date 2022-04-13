#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
int a[11] = {0, 7, 5, 1, 4, 4, 10, 2, 4, 3, 6};
int n = 10;
// void qsort(int l, int r) //应用二分思想
// {

//     if (l >= r)
//         return;
//     int mid = a[(l + r) / 2]; //中间数
//     int i = l, j = r;
//     while (i <= j)
//     {
//         while (a[i] < mid)
//             i++; //查找左半部分比中间数大的数
//         while (a[j] > mid)
//             j--;    //查找右半部分比中间数小的数
//         if (i <= j) //如果有一组不满足排序条件（左小右大）的数
//         {
//             swap(a[i], a[j]); //交换
//             i++;
//             j--;
//         }
//     };           //这里注意要有=
//     qsort(l, j); //递归搜索左半部分
//     qsort(i, r); //递归搜索右半部分
// }

// void qs(int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int pivot = a[start];
//     int p = start;
//     int q = end;
//     while (1)
//     {
//         while (a[p] < pivot)
//             p++;
//         while (a[q] > pivot)
//             q--;
//         if (p > q)
//         {
//             break;
//         }
//         swap(a[p], a[q]);
//         p++;
//         q--;
//     }
//     qs(start, q);
//     qs(p, end);
// }
void qsort(int l, int r)
{
    if (l >= r)
        return;
    int k = a[l];
    int i = l, j = r;
    while (1)
    {
        while (a[i] < k)
            i++;
        while (a[j] > k)
            j--;
        if (i > j)
            break;
        swap(a[i], a[j]);
        i++, j--;
    }
    qsort(l, j);
    qsort(i, r);
}
int main()
{

    qsort(1, n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}
// 快写法 目前没有那种 <的。。
// 就是要错开。。
void qsort(int l, int r)
{
    if (l >= r)
        return;
    int mid = a[l];
    int i = l, j = r;
    while (1)
    {
        while (a[i] < mid)
            i++;
        while (a[j] > mid)
            j--;
        if (i > j)
            break;
        swap(a[i], a[j]);
        i++, j--;
    }
    qsort(l, j);
    qsort(i, r);
}
void qsort(int l, int r)
{
    if (l >= r)
        return;
    int mid = a[l];
    int i = l, j = r;
    while (1)
    {
        while (a[i] < mid)
            i++;
        whille(a[j] > mid)
            j--;
        if (i > j)
            break;
        swap(a[i], a[j]);
        i++, j--;
    }
    qsort(l, j);
    qsort(i, r);
}
void qsort(int l, int r)
{
    if (l >= r)
        return;
    int mid = a[l];
    int i = l, j = r;
    while (1)
    {
        while (a[i] < mid)
            i++;
        while (a[j] > mid)
            j--;
        if (i > j)
            break;
        swap(a[i], a[j]);
        i++, j--;
    }
    qsort(l, j);
    qsort(i, r);
}
void qsort(int l, int r)
{
    if (l >= r)
        return;
    int mid = a[l];
    int i = l, j = r;
    while (1)
    {
        while (a[i] < mid)
            i++;
        while (a[j] > mid)
            j--;
        if (i > j)
            break;
        swap(a[i], a[j]);
        i++, j--;
    }
    qsort(l, j);
    qsort(i, r);
}
// 刷= 快速实现代码的能力。。