#include <all.h>
using namespace std;
// 输入：s = "paper", t = "title"
// 输出：true
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        char x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || ret.count(y) && ret[y] != x)
            return false;
        ret[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string a)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        char x = s[i], y = a[i];
        if ((res.count(x) && res[x] != y || ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        char x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || ret.count(y) && ret[y] != x)
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool issame(string s, string t)
{
    unordered_map<char, char> res;
    unordered_map<char, char> ret;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        int x = s[i], y = t[i];
        if ((res.count(x) && res[x] != y) || (ret.count(y) && ret[y] != x))
            return false;
        res[x] = y;
        ret[y] = x;
    }
    return true;
}
bool isIsomorphic(string a, string b)
{
    unordered_map<int, int> res;
    unordered_map<int, int> ret;
    for (int i = 0; i < a.size(); ++i)
    {
        int l = a[i], r = b[i];
        if (res.count(l) && res[l] != r || ret.count(r) && ret[r] != l)
            return false;
        res[l] = r;
        ret[r] = l;
    }
    return true;
}