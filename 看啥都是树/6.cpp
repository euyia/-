#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    string convert(string s, int m)
    {
        int k = 0, flag = 1;
        vector<string> res(m);
        for (int i = 0; i < s.size(); ++i)
        {
            res[k].push_back(s[i]);
            k += flag;
            if (k == 0 || k == m - 1)
            {
                flag = -flag;
                k += flag;
            }
        }
        string ret;
        for (int i = 0; i < m; ++i)
            ret += res[i];
        return ret;
    }
};

class Solution
{
public:
    string convert(string s, int m)
    {
        if (m < 2)
            return s;
        vector<string> res(m);
        int k = 0, flag = 1;
        for (int i = 0; i < s.size(); ++i)
        {
            res[k].push_back(s[i]);
            k += flag;
            if (k == 0 || k == m - 1)
                flag = -flag;
        }
        string ret;
        for (int i = 0; i < m; ++i)
            ret += res[i];
        return ret;
    }
};
string soso(string s, int m)
{
    if (m < 2)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m < 2)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string sosos(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string sosos(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res(m);
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res;
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res;
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    vector<string> res;
    if (m == 1)
        return s;
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    vector<string> res;
    if (m == 1)
        return s;
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    vector<string> res;
    if (m == 1)
        return s;
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res;
    int k = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[k].push_back(s[i]);
        k += flag;
        if (k == 0 || k == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res;
    int j = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[j].push_back(s[i]);
        j += flag;
        if (j == 0 || j == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int n)
{
    if (n == 1)
        return s;
    vector<string> res;
    int j = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[j].push_back(s[i]);
        j += flag;
        if (j == 0 || j == n - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res;
    int j = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[j].push_back(s[i]);
        j += flag;
        if (j == 0 || j == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res;
    int j = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[j].push_back(s[i]);
        j += flag;
        if (j == 0 || j == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}
string soso(string s, int m)
{
    if (m == 1)
        return s;
    vector<string> res;
    int j = 0, flag = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        res[j].push_back(s[i]);
        j += flag;
        if (j == 0 || j == m - 1)
            flag = -flag;
    }
    string ans;
    for (string r : res)
        ans += r;
    return ans;
}