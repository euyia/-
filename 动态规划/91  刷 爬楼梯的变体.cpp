#include <all.h>
using namespace std;
// 其实就是爬楼梯那道题。

// // **dp[i]=dp[i-1]+dp[i-2]和那个爬楼梯 是一模一样的。。思路。。**
// 在这里就是cur=pre+cur；

// 输入：s = "226"
// 输出：3
// 解释：它可以解码为 "BZ" (2 26), "VF" (22 6), 或者 "BBF" (2 2 6) 。

// 他这里分三种情况 。跳步了。就是其他情况cur 是不变的。
// 也即是 dp[i]=dp[i-1] 因为这里cur是动态的之向当前。。所以cur没有做改变
// 他会传递到下一个循环的  。。就是默认dp[i]=cur； 是不变的。

int numDecodings(string k)
{
    int pre = 1, cur = 1;
    int n = k.size();
    for (int i = 0; i < k.size(); ++i)
    {
        int tmp = cur;
        if (k[i] == '0')
            if (k[i - 1] == '1' || k[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (k[i - 1] == '1' && k[i - 1] == '2' && k[i] >= '1' && k[i] <= '9')
            cur = pre + cur;
        pre = tmp;
    }
    return cur;
}
// 这边为什么不用考虑s i位置。。如果不是0的情况。
// 其他情况下cur不变。。
// 比如 当前位置 是3 。。他不会有什么组合的。。他就是和上一个一样多种。
// 这题看着简单。。但是其实 转移方程 很有思辨性的。
// 至少目前我的思辨能力 是写不出来的。。
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int pre = 1, cur = 1;
    int n = s.size();
    for (int i = 0; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' || s[i] <= '6')
            cur = pre + cur;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int pre = 1, cur = 1;
    int n = s.size();
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i] == '2' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '2' || s[i - 1] == '1' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i] == '1' || s[i] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '2' || s[i - 1] == '1' && s[i] <= '6' && s[i] >= '1')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '2' || s[i - 1] == '1' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '2' || s[i - 1] == '1' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= 6)
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= 6)
            cur += pre;
        pre = tmp;
    }
    return cur;
}
int soso(string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int pre = 1, cur = 1;
    for (int i = 1; i < n; ++i)
    {
        int tmp = cur;
        if (s[i] == '0')
            if (s[i - 1] == '1' || s[i - 1] == '2')
                cur = pre;
            else
                return 0;
        else if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6')
            cur += pre;
        pre = tmp;
    }
    return cur;
}
//  这题就是爬楼梯的变体。。
// 多对动态dp 有感性的认知。。。是基础。。
// 。。值得刷。。