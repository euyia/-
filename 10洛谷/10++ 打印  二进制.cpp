#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
int main()
{
    unsigned num = 0x80000000;
    int n;
    printf("请输入一个数：");
    scanf("%d", &n);
    for (int i = 0; i < 32; i++)
    {
        if ((n & num) == num)
            printf("1");
        else
            printf("0");
        n <<= 1;
        if ((i + 1) % 8 == 0)
            printf("  ");
    }
    printf("\n");
    return 0;
}
// 打印一个数的二进制。。
// 负数 在电脑里存的是补码。补码是为了简化电路设计。
// -6的样子 不是在16的基础上前面有个- 不是的。
//  所以才会有一个二进制最右边一个1 的求法。
//  所以才会有一个二进制最右边一个1 的求法。
//  所以才会有一个二进制最右边一个1 的求法。
// 就是s&(-s);