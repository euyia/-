#include <all.h>
using namespace std;
// 周赛的刚出来的题目没什么题解。而且提交区也看不到答案。
// 除非你刻意让你的代码慢下来 不然你肯定百分百 百分百就看不到别人的答案
// 但是周赛的统计区。。刻意看到各种参赛选手的。
class Solution
{
public:
    vector<long long> kthPalindrome(vector<int> &queries, int intLength)
    {
        std::vector<long long> ans;
        for (auto x : queries)
        {
            int k = (intLength + 1) / 2;
            int p = 1;
            for (int i = 0; i < k - 1; i++)
            {
                p *= 10;
            }
            if (x > 9 * p)
            {
                ans.push_back(-1);
            }
            else
            {
                long long res = p + x - 1;
                auto s = std::to_string(res);
                s.resize(intLength - k);
                std::reverse(s.begin(), s.end());
                for (auto c : s)
                {
                    res = 10 * res + c - '0';
                }
                ans.push_back(res);
            }
        }
        return ans;
    }
};
vector<long long> soso(vector<int> &a, int k)
{
    int len = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < k - 1; i++)
        p *= 10;
    vector<long long> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            long long res = p + a - 1;
            string s = to_string(res);
            s.resize(k - len);
            // 因为他上面+1 之后/2 所以奇数
            // 用这个式子巧妙的把奇偶数的情况给统一了。
            // 简直绝了。
            reverse(s.begin(), s.end());
            for (int i = 0; i < s.size(); ++i)
                res = 10 * res + s[i] - '0';
            // 他这种方式来加string 也就规避了string为空的时候的情况
            // 也就是k=1的时候的情况。会出错 如果用stol。

            ans.push_back(res);
        }
    }
    return ans;
}
vector<long long> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; ++i)
        p *= 10;
    vector<long long> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            long long res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (int i = 0; i < s.size(); ++i)
                res = 10 * res + s[i] - '0';
            ans.push_back(res);
        }
    }
    return ans;
}
vector<long long> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; ++i)
        p *= 10;
    vector<long long> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            long long res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (int i = 0; i < s.size(); ++i)
                res = 10 * res + s[i] - '0';
            ans.push_back(res);
        }
    }
    return ans;
}
#define ll long long
vector<ll> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; ++i)
        p *= 10;
    vector<ll> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            ll res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (int i = 0; i < s.size(); ++i)
                p *= 10;
            ans.push_back(res);
        }
    }
    return ans;
}
vector<ll> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; ++i)
        p *= 10;
    vector<ll> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            ll res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (int i = 0; i < s.size(); ++i)
                res = 10 * res + s[i] - '0';
            ans.push_back(res);
        }
    }
    return ans;
}
vector<ll> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; ++i)
        p *= 10;
    vector<ll> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            ll res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (char c : s)
                res = 10 * res + c - '0';
            ans.push_back(res);
        }
    }
    return ans;
}
vector<ll> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; i++)
        p *= 10;
    vector<ll> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            ll res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (char c : s)
                res = 10 * res + c - '0';
            ans.push_back(res);
        }
    }
    return ans;
}
vector<ll> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; ++i)
        p *= 10;
    vector<ll> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            ll res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (char c : s)
                res = 10 * res + c - '0';
            ans.push_back(res);
        }
    }
    return ans;
}
vector<ll> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; ++i)
        p *= 10;
    vector<ll> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            ll res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (char c : s)
                res = 10 * res + c - '0';
            ans.push_back(res);
        }
    }
    return ans;
}
vector<ll> soso(vector<int> &a, int k)
{
    int n = (k + 1) / 2;
    int p = 1;
    for (int i = 0; i < n - 1; ++i)
        p *= 10;
    vector<ll> ans;
    for (int a : a)
    {
        if (a > 9 * p)
            ans.push_back(-1);
        else
        {
            ll res = p + a - 1;
            string s = to_string(res);
            s.resize(k - n);
            reverse(s.begin(), s.end());
            for (char c : s)
                res = 10 * res + c - '0';
            ans.push_back(res);
        }
    }
    return ans;
}
// 30分钟左右就刷了这些行。。看来刷是真的吃时间。