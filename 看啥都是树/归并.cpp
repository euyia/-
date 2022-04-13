#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
void msort(int a[], int tmpa[], int l, int rightend)
{
    int center;
    if (l < rightend)
    {
        center = (l + rightend) / 2;
        msort(a, tmpa, l, center);
        msort(a, tmpa, center + 1, rightend);
        merge(a, tmpa, l, center + 1, rightend);
    }
}
void merge(int a[], int tmpa[], int l, int r, int rightend)
{ // 这个和两个升序链表合并 一样的框架。。结尾复制回去不一样而已。
    int leftend, n, tmp;
    leftend = r - 1;
    tmp = l;
    n = rightend - l + 1; //这边是个数。不是序列。
    while (l <= leftend && r <= rightend)
    {
        if (a[l] <= a[r])
            tmpa[tmp++] = a[l++];
        else
            tmpa[tmp++] = a[r++];
    }
    while (l <= leftend)
        tmpa[tmp++] = a[l++];
    while (r <= rightend)
        tmpa[tmp++] = a[r++];
    for (int i = 0; i < n; ++i, rightend--)
    {
        a[rightend] = tmpa[rightend];
    }
}
void merge(int a[], int tmpa[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    leftend = r - 1;
    n = rightend - l + 1;
    tmp = l;
    while (l <= leftend && r <= rightend)
    {
        if (a[l] <= a[r])
            tmpa[tmp++] = a[l++];
        else
            tmpa[tmp++] = a[r++];
    }
    while (l <= leftend)
        tmpa[tmp++] = a[l++];
    while (r = rightend)
        tmpa[tmp++] = a[r++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = tmpa[rightend];
}
void merge(int a[], int tmpa[], int l, int r, int rightend)
{
    int leftend, tmp, n;
    leftend = r - 1;
    tmp = l;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            tmpa[tmp++] = a[l++];
        else
            tmpa[tmp++] = a[r++];
    }
    while (r <= rightend)
        tmpa[tmp++] = a[r++];
    while (l <= leftend)
        tmpa[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = tmpa[rightend];
}
void merge(int a[], int tmpa[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            tmpa[tmp++] = a[l++];
        else
            tmpa[tmp++] = a[r++];
    }
    while (r <= rightend)
        tmpa[tmp++] = a[r++];
    while (l <= leftend)
        tmpa[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = tmpa[rightend];
}
void merge(int a[], int tmpa[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend)
        tmpa[tmp++] = a[r++];
    while (l <= leftend)
        tmpa[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = tmpa[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    leftend = r - 1;
    n = rightend - l + 1;
    tmp = l;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int n, tmp, leftend;
    n = rightend - l + 1;
    tmp = l;
    leftend = r - 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int n, leftend, tmp;
    n = rightend - l + 1;
    leftend = r - 1;
    tmp = l;
    while (r <= rightend && l <= leftend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        b[tmp++] = a[r++];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] <= a[l])
            b[tmp++] = a[r++];
        else
            b[tmp++] = a[l++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int n, leftend, tmp;
    tmp = l;
    n = rightend - l + 1;
    leftend = r - 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void msort(int a[], int tmpa[], int l, int rightend)
{
    int center;
    if (l < rightend)
    {
        center = (l + rightend) / 2;
        msort(a, tmpa, l, center);
        msort(a, tmpa, center + 1, rightend);
        merge(a, tmpa, l, center + 1, rightend);
    }
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    n = rightend - l + 1;
    tmp = l;
    leftend = r - 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    leftend = r - 1;
    n = rightend - l + 1;
    tmp = l;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (r <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    leftend = r - 1;
    n = rightend - l + 1;
    tmp = l;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] <= a[l])
            b[tmp++] = a[r++];
        else
            b[tmp++] = a[l++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int leftend, n, tmp;
    tmp = l;
    n = rightend - l + 1;
    leftend = r - 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (r <= leftend)
        b[tmp++] = a[r++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void msort(int a[], int b[], int l, int rightend)
{
    int center;
    if (l < rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}
void msort(int a[], int b[], int l, int rightend)
{
    int center;
    if (l < rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}
void msort(int a[], int b[], int l, int rightend)
{
    int center;
    if (l < rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}
void msort(int a[], int b[], int l, int rightend)
{
    int center;
    if (l < rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int n, leftend, tmp;
    n = rightend - l + 1;
    leftend = r - 1;
    tmp = l;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int n, tmp, leftend;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int tmp, leftend, n;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int tmp, n, leftend;
    tmp = l;
    n = rightend - l + 1;
    leftend = r - 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int tmp, leftend, n;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int tmp, leftend, n;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void merge(int a[], int b[], int l, int r, int rightend)
{
    int tmp, leftend, n;
    tmp = l;
    leftend = r - 1;
    n = rightend - l + 1;
    while (r <= rightend && l <= leftend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
            b[tmp++] = a[r++];
    }
    while (r <= rightend)
        b[tmp++] = a[r++];
    while (l <= leftend)
        b[tmp++] = a[l++];
    for (int i = 0; i < n; ++i, rightend--)
        a[rightend] = b[rightend];
}
void msort(int a[], int b[], int l, int rightend)
{
    int center;
    while (l <= rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}
void msort(int a[], int b[], int l, int rightend)
{
    int center;
    while (l <= rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}
void msort(int a[], int b[], int l, int r, int rightend)
{
    int center;
    while (l <= rightend)
    {

        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}
void msort(int a[], int b[], int l, int r, int rightend)
{
    int center;
    while (l <= rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        msort(a, b, l, center + 1, rightend);
    }
}
void msort(int a[], int b[], int l, int rightend)
{
    int center;
    while (l <= rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}
void msort(int a[], int b[], int l, int rightend)
{
    int center;
    while (l <= rightend)
    {
        center = (l + rightend) / 2;
        msort(a, b, l, center);
        msort(a, b, center + 1, rightend);
        merge(a, b, l, center + 1, rightend);
    }
}