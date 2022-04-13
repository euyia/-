#include <all.h>
using namespace std;
int soso(string s)
{
    int res = 0, flag = 1;
    int i = 0;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, flag = 1, i = 0;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = 1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = 1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = 1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res += res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res > INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || flag == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    int res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = 1;
    if (s[i] == '-' || flag == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    long res = 0, flag = 0, i = 0;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = res * 10 + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -1;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        i++;
    if (s[i] = '-')
        flag = -flag;
    if (s[i] == '-' || s[i] == '+')
        i++;
    for (; i < s.size() && isdigit(s[i]); i++)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    long i = 0, res = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -flag;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    long i = 0, res = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -flag;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -flag;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '- ')
        flag = -flag;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -flag;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return res * flag;
}
int soso(string s)
{
    long res = 0, i = 0, flag = 1;
    while (s[i] == ' ')
        ++i;
    if (s[i] == '-')
        flag = -flag;
    if (s[i] == '-' || s[i] == '+')
        ++i;
    for (; i < s.size() && isdigit(s[i]); ++i)
    {
        res = 10 * res + s[i] - '0';
        if (res >= INT_MAX && flag == 1)
            return INT_MAX;
        if (res > INT_MAX && flag == -1)
            return INT_MIN;
    }
    return flag * res;
}
// 人无论是什么年纪  其实都是幼态的。因为人类的骨骼到死。。都还是具有可塑性的。
// 也就是你无论什么年纪 开始学东西都是可以的。仍然具有可塑性。
// 人类是幼态持续的动物。
// 做多少题目其实没意义。。
// 重要的是困难题。
// 你能做出200题困难题 顶的过2000题岁半的中等和简单题。。
// 你能做出200题困难题 顶的过2000题岁半的中等和简单题。。
// 你能做出200题困难题 顶的过2000题岁半的中等和简单题。。