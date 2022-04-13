#include <all.h>
using namespace std;
class Solution
{
public:
    bool canWin(string s)
    {
        if (mp.count(s))
            return mp[s];
        for (int i = 0; i < s.size() - 1; ++i)
            if (s[i] == '+' && s[i] == '+')
            {
                string t = s;
                t[i] = t[i + 1] = '-';
                if (!canWin(t))
                    return mp[s] = 1;
            }
        return mp[s] = 0;
    }
    unordered_map<string, int> mp;
};
//可以刷
unordered_map<string, int> mp;
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 1; i < s.size(); ++i)
        if (s[i] == '+' && s[i - 1] == '+')
        {
            string t = s;
            t[i] = t[i - 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] == t[i + 1] == '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
// 这里的逻辑实现是一层一层的 、
// 比如这层如果都是true；上层才是false
// 如果这层有一条是false 。上层就是true；
// 而且这种关系是随着层数的变化。。而彼此角色互换的。。。
// 就是比如你底层 全部都是能走的通的。。也就是没有个能走死你的方案。。
// 那么我就死。
// 如果你这层 只要有一个false 能让你死的。。我就目标就实现。也就是我就有一个题目满意的答案。
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 1; i < s.size(); ++i)
        if (s[i - 1] == '+' && s[i] == '+')
        {
            string t = s;
            t[i] = t[i - 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 1; i < s.size(); ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '+';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '+';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
// 至少要1000 行以上才算有刷 不然等于白刷。。半生不熟等于白住了。
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == '+' && s[i - 1] == '+')
        {
            string t = s;
            t[i - 1] = t[i] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '_' && s[i + 1] == '_')
        {
            string t = s;
            t[i] = t[i + 1] = '+';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '-' && s[i + 1] == '-')
        {
            string t = s;
            t[i] = t[i + 1] = '+';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '+' && s[i + 1] == '+')
        {
            string t = s;
            t[i] = t[i + 1] = '-';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '_' && s[i + 1] == '0')
        {
            string t = s;
            t[i] = t[i + 1] = '_';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '-' && s[i + 1] == '0')
        {
            string t = s;
            t[i] = t[i + 1] = '0';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '_' && s[i + 1] == '-')
        {
            string t = s;
            t[i] = t[i + 1] = '+';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '-' && s[i + 1] == '0')
        {
            string t = s;
            t[i] = t[i + 1] = '_';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '_' && s[i + 1] == '_')
        {
            string t = s;
            t[i] = t[i + 1] = '_';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '.' && s[i + 1] == '_')
        {
            string t = s;
            t[i] = t[i + 1] = ')';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == ')' && s[i + 1] == ')')
        {
            string t = s;
            t[i] = t[i + 1] = ')_';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '_' && s[i + 1] == '_')
        {
            string t = s;
            t[i] = t[i + 1] = 's';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == ' ')
        {
            string t = s;
            t[i] = t[i + 1] = ')';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '_' && s[i + 1] == ')')
        {
            string t = s;
            t[i] = t[i + 1] = '_';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
// 不够1000；

bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '_' && s[i + 1] == ' ')
        {
            s[i] = s[i - 1] = '-';
            if (!dfs(s))
            {
                s[i] = s[i + 1] = '-';
                return mp[s] = 1;
            }
            s[i] = s[i + 1] = '-';
        }
    return mp[s] = 0;
}
// 刷是先于理解的。。刷多了就理解了。
// 刷走在前面。。
// 如果把学习概括成一个动作。。是什么。。就是刷。
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '0', s[i + 1] == 's')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = true;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == '0', s[i + 1] == 's')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] = 'x', s[i + 1] = 's')
        {
            string t = s;
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s] = 1;
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            s[i] = s[i + 1] == 'x';
            if (!dfs(s))
            {
                s[i] = s[i + 1] = 'xx';
                return mp[s] = 1;
            }
            s[i] = s[i + 1] = 'xx';
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s];
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'xz')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'x';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
// 反正1000遍。。你要什么时候完成都可以。。
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
// 松绑 。。。指尖的舞蹈。
// 数学是一种艺术？
// 思维的艺术？
// 代数 心理需求。
// 既然是艺术。那么就肯定和感觉有关系，和美有关系，和能量有关系。和共振和有关。
// 和抽象有关 和选择有关。
// 和咏叹调有关。
// 有美感传递的。。才能称之为艺术
// 数学算吗
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}
bool dfs(string s)
{
    if (mp.count(s))
        return mp[s];
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            string t = s;
            t[i] = t[i + 1] = 'xx';
            if (!dfs(t))
                return mp[s] = 1;
        }
    return mp[s] = 0;
}