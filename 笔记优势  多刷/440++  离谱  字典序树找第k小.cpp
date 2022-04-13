#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
// 这题看起来是很简单。但是实际上是不简单的。很多人说简单。但是ac的人又多少。
// 所以真的有时候别听任何人的。。
// 有些明明很简单。但是却被说很难 比如c。。有些很难就告诉你狠简单。。打击信心。。
class Solution
{
public:
    int findKthcurber(int n, int k)
    {
        int res = 1;
        k = k - 1; //扣除掉第一个0节点
        while (k > 0)
        {
            int cur = 0;
            long l = res, r = res + 1;
            while (l <= n)
            {
                cur += min((long)n + 1, r) - l; //比如n是195的情况195到100有96个数
                l *= 10;
                r *= 10;
            }
            // int cur = getNode(n, l, res + 1);
            if (cur <= k)
            {             //第k个数不在以res为根节点的树上
                res += 1; //res在字典序数组中从左往右移动
                k -= cur;
            }
            else
            {              //在子树中
                res *= 10; //res在字典序数组中从上往下移动
                k -= 1;    //刨除根节点
            }
        }
        return res;
    }
    // int getNode(int n, long first, long last)
    // {
    //     int cur = 0;
    //     while (first <= n)
    //     {
    //         cur += min((long)n + 1, last) - first; //比如n是195的情况195到100有96个数
    //         first *= 10;
    //         last *= 10;
    //     }
    //     return cur;
    // }
};
//
// 。。你可以设计1000 205 去调试。。。你就会发现这个框架 有多么强大的包容度。
// 感觉应该有简化版的写法。。
// 就是找到那个位置之后 的竖向遍历。可以独立出来。。？？？
int findKthNumber(int n, int k)
{
    k--;
    int res = 1;
    while (k > 0)
    {
        long sum = 0;
        long l = res, r = res + 1;
        while (l <= n)
        {
            // 这边是以l的大小作为出口。而不是sum
            sum += min((long)n + 1, r) - l;
            l *= 10;
            r *= 10;
        }
        if (sum <= k)
        {
            k -= sum;
            res += 1;
        }
        else
        {
            res *= 10;
            k -= 1;
        }
    }
    return res;
}
int soso(int n, int k)
{
    k--;
    int res = 1;
    while (k > 0)
    {
        long sum = 0;
        long l = res, r = res + 1;
        while (l <= n)
        {
            sum += min((long)n + 1, r) - l;
            l *= 10;
            r *= 10;
        }
        if (k >= sum)
        {
            k -= sum;
            res++;
        }
        else
        {
            res *= 10;
            k -= 1;
        }
    }
    return res;
}
int soso(int n, int k)
{
    k--;
    int res = 1;
    while (k > 0)
    {
        long sum = 0;
        long r = res + 1, l = res;
        while (l <= n)
        {
            sum += min((long)n + 1, r) - l;
            l *= 10;
            r *= 10;
        }
        if (k >= sum)
        {
            k -= sum;
            res++;
        }
        else
        {
            res *= 10;
            k -= 1;
        }
    }
    return res;
}
int soso(int n, int k)
{
    k--;
    int res = 1;
    while (k > 0)
    {
        long sum = 0;
        long l = res, r = res + 1;
        while (l <= n)
        {
            sum += min((long)n + 1, r) - l;
            l *= 10;
            r *= 10;
        }
        if (k >= sum)
        {
            k -= sum;
            res++;
        }
        else
        {
            res *= 10;
            k -= 1;
        }
    }
    return res;
}
// 这个框架比dfs还强大。。多了一个else。。
// 就相当于可以自己对树的每一个节点当做根节点来遍历。。。。很恐怖的。。