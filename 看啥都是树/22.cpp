#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        dfs(0, 0, n, "", res);
        return res;
    }
    void dfs(int left, int right, int n, string k, vector<string> &res)
    {
        if (k.size() == 2 * n)
            res.push_back(k);
        if (left < n)
            dfs(left + 1, right, n, k + "(", res);
        if (right < left)
            dfs(left, right + 1, n, k + ")", res);
    }
};
void dfss(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfss(left + 1, right, n, k + "(", res);
    if (right < left)
        dfss(left, right + 1, n, k + ")", res);
}
void dfsss(int left, int right, int n, string k, vector<string> res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfsss(left + 1, right, n, k + "(", res);
    if (right < left)
        dfsss(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (right < left)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (left > right)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (left > right)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (left > right)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (left > right)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (left > right)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (left > right)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (right < left)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (right < left)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
    if (right < left)
        dfs(left, right + 1, n, k + ")", res);
}
void dfs(int left, int right, int n, string k, vector<string> &res)
{
    if (k.size() == 2 * n)
        res.push_back(k);
    if (left > right)
        dfs(left, right + 1, n, k + ")", res);
    if (left < n)
        dfs(left + 1, right, n, k + "(", res);
}
void dfs(int left,int right,int n,string k,vector<string>&res)
{
    if(k.size()==2*n)
    res.push_back(k);

}
// 他这边只有一个空字符串 来存。。他不会反复被覆盖吗？？