#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    return res;
}
vector<vector<int>> res(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
    return res;
}
vector<vector<int>> sosos(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < n; ++j)
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < n; ++j)
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
    return res;
}
vector<vector<int>> soso(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    return res;
}
vector<vector<int>> ssos(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    return res;
}
vector<vector<int>> sosos(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; j++)
            res[i][j] = res[i - 1][j] + res[i - 1][j];
    }
    return res;
}
vector<vector<int>> sosos(int n)
{
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
    {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; ++j)
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
    return res;
}