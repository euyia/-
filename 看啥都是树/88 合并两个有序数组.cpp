#include <all.h>
using namespace std;
// nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
void merge(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = a.size() - 1;
    m--;
    n--;
    while (n >= 0)
    {
        while (m >= 0 && a[m] > b[n])
            swap(a[i--], a[m--]);
        swap(a[i--], b[n--]);
    }
}
void soso(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = a.size() - 1;
    m--;
    n--;
    while (n >= 0)
    {
        while (m >= 0 && a[m] > b[n])
            swap(a[i--], a[m--]);
        swap(a[i--], b[n--]);
    }
}
void soso(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = a.size() - 1;
    n--;
    m--;
    while (n >= 0)
    {
        while (m >= 0 && a[m] > b[n])
            swap(a[i--], a[m--]);
        swap(a[i--], b[n--]);
    }
}
void soso(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = a.size() - 1;
    n--;
    m--;
    while (n >= 0)
    {
        while (m >= 0 && a[m] > b[n])
            swap(a[i--], a[m--]);
        swap(a[i--], b[n--]);
    }
}
void soso(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = a.size() - 1;
    m--;
    n--;
    while (n >= 0)
    {
        while (m >= 0 && a[m] > b[n])
            swap(a[i--], a[m--]);
        swap(a[i--], b[n--]);
    }
}
void soso(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = a.size() - 1;
    n--, m--;
    while (n >= 0)
    {
        while (m >= 0 && a[m] > b[n])
            swap(a[i--], a[m--]);
        swap(a[i--], b[n--]);
    }
}
void soso(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = a.size() - 1;
    n--, m--;
    while (n >= 0)
    {
        while (m >= 0 && a[m] > b[n])
            swap(a[i--], a[m--]);
        swap(a[i--], b[n--]);
    }
}
void soso(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = a.size() - 1;
    n--, m--;
    while (n >= 0)
    {
        while (m >= 0 && a[m] > b[n])
            swap(a[i--], a[m--]);
        swap(a[i--], b[n--]);
    }
}
// n he m neiwaicheng
// weibu kaishi fang