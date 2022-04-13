#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    string t = "3.50.2.-*7.+@";

    for (int i = 0; i < t.size(); ++i)
    {
        if (isdigit(t[i]))
        {
            int res = 0;
            while (t[i] != '.')
                res = 10 * res + t[i] - '0', i++;
            st.push(res);
        }
        else if (t[i] == '.' || t[i] == '@')
            continue;
        else
        {
            int a = st.top();
            st.pop();
            int *b = &st.top();
            if (t[i] == '-')
                *b -= a;
            else if (t[i] == '*')
                *b *= a;
            else if (t[i] == '+')
                *b += a;
            else
                *b /= a;
        }
    }
    cout << st.top() << endl;
    return 0;
}
// 主要的实现细节。有时候是细节恶心人的。
// 思路直接有。。
// 就这里数字的话 不是默认一个的。一般情况下是有多个苏子
// 用这种10*res这种方式 来统计 就很舒服
// 学习大佬的编码习惯。他们是碰壁碰出来的。。选择那样写都是有原因的。。
// 说明那样写比较好。。
// 然后就是变量要拿地址而不是拿值。。
// 如果我能给他们一人一台苹果电脑就好了。
// 从小就编程。。我也可以啊。。自己加油。。
// 一定一定有专项训练的。。？？？？？？我的被

#include <stdio.h>
#include <string.h>
int stack[1005];
int top = -1;
int main()
{
    char c;
    int num = 0;
    while (1)
    {
        scanf("%c", &c);
        if (c >= '0' && c <= '9')
        {
            num = num * 10 + c - '0';
            // 如果要字符串转数字？？？ 可以这样一个个的迭代
            // 如果要字符串转数字？？？ 可以这样一个个的迭代
            // 如果要字符串转数字？？？ 可以这样一个个的迭代
            // 这部分比较优美。
            // 看似和我没什么区别。但是它这样写 通用性更强。。
        }
        else if (c == '.')
        {
            stack[++top] = num;
            num = 0;
        }
        else if (c == '+')
        {
            int x = stack[top--];
            int y = stack[top--];
            stack[++top] = x + y;
        }
        else if (c == '-')
        {
            int x = stack[top--];
            int y = stack[top--];
            stack[++top] = y - x;
        }
        else if (c == '*')
        {
            int x = stack[top--];
            int y = stack[top--];
            stack[++top] = x * y;
        }
        else if (c == '/')
        {
            int x = stack[top--];
            int y = stack[top--];
            stack[++top] = y / x;
        }
        else if (c == '@')
            break;
    }
    printf("%d", stack[0]);
}
// 他这个对于数字也是按照主线循环 而没有写while
// 在碰到。的时候才num=0；重置。
// 比较优美的。。