#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    string s;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        int b = i;
        while (b != 0)
        {
            int c = b % 10;
            b /= 10;
            if (c == a)
                cnt++;
        }
        // 这种一位一位的取 。。以前也是不会的。。非常棒 这里又有。。
    }
    cout << cnt;
    return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, x, m = 1, ans = 0;
    scanf("%d%d", &n, &x);
    while (m <= n)
    {
        int a = n / (m * 10), b = n / m % 10, c = n % m; //a,b,c为n的三部分，求哪一位x的个数，b就为那一位数，a为b左边的数，c为b右边的数，如求1~728中十位7的个数，则a=7，b=2，c=8
        if (x)
        {
            if (b > x)
                ans += (a + 1) * m; //如果b>x，说明有(a+1)*m个x（如求1~728中个位7的个数，则为（72+1）*1=73）
            if (b == x)
                ans += a * m + c + 1; //如果b=x，说明有a*m+c+1个x（如求1~728中百位7的个数，则为0*100+28+1=29）
            if (b < x)
                ans += a * m; //如果b<x，说明有a*m个x（如求1~728中十位7的个数，则为7*10个）
        }
        else
        { //x=0的情况和x！=0的情况有所不同
            if (b)
                ans += a * m;
            else
                ans += (a - 1) * m + c + 1;
        }
        m *= 10;
    }
    printf("%d\n", ans);
    return 0;
}
// 牛人。。
// 这个还是比较难记的。。如果你不知道思路的话。。
//这里主要是 m的10位10位的迭代。。
// 还有常规算法 也是比较牛的。。取位数。。非常牛擦 。
// 这题面试题挺多。。很有研究的深度。。考验思考的深度的不错题目。。
// 有空可以多琢磨。。
// 深基。。
// 那个进阶其实也是可以参考这个。。他就是题目选的特别好。都是经典有味道的题目。
// 可以先刷那些。。
// 以题目为导向。。那些题目的选取就是那本书最大的价值点。。
// 题目的选择很重要。。那么多的题型。