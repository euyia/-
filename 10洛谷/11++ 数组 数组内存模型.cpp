#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
char w[10][5][3] = //W[i][j][k]表示第i个数字的第j行的第k列，（手打累死了）
    {
        {
            'X',
            'X',
            'X',
            'X',
            '.',
            'X',
            'X',
            '.',
            'X',
            'X',
            '.',
            'X',
            'X',
            'X',
            'X',
        },
        {
            //1
            '.',
            '.',
            'X',
            '.',
            '.',
            'X',
            '.',
            '.',
            'X',
            '.',
            '.',
            'X',
            '.',
            '.',
            'X',
        },
        {
            //2
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            'X',
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            'X',
            'X',
        },
        {
            //3
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            'X',
            'X',
            'X',
        },
        {
            'X',
            '.',
            'X',
            'X',
            '.',
            'X',
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            '.',
            '.',
            'X',
        },
        {
            //5
            'X',
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            'X',
            'X',
            'X',
        },
        {
            //6
            'X',
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            'X',
            'X',
            'X',
            '.',
            'X',
            'X',
            'X',
            'X',
        },
        {
            //7
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            '.',
            '.',
            'X',
            '.',
            '.',
            'X',
            '.',
            '.',
            'X',
        },
        {
            //8
            'X',
            'X',
            'X',
            'X',
            '.',
            'X',
            'X',
            'X',
            'X',
            'X',
            '.',
            'X',
            'X',
            'X',
            'X',
        },
        {
            //9
            'X',
            'X',
            'X',
            'X',
            '.',
            'X',
            'X',
            'X',
            'X',
            '.',
            '.',
            'X',
            'X',
            'X',
            'X',
        },
};
int n;
char s[110];
// int main()
// {
//     cin >> n; //输入n
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i]; //输入要打印的字符
//     }
//     for (int i = 0; i < 5; i++)
//     { //枚举每一行
//         for (int j = 0; j < n; j++)
//         { //枚举每一个数字
//             for (int k = 0; k < 3; k++)
//             {                                //枚举每个数字的列
//                 cout << w[s[j] - '0'][i][k]; //输出，因为s[j]为字符，所以要减去'0'
//             }
//             if (j != n - 1)
//                 cout << '.'; //如果最后一列，就不需要打印'.'
//         }
//         cout << endl; //换行
//     }
//     return 0;
// }
// 因为s[j]为字符，所以要减去'0'
// 因为s[j]为字符，所以要减去'0'
// 因为s[j]为字符，所以要减去'0'
// 他实际上 不管你在第几列。他只按照数字的顺序 来cout出去的。。
// 这答案看起来想一个二维数组。但是 实际上他是一个个cout排出来的而已
// 并不是真的二维数组。是cout一个个排出来的而已。。
// 并不是真的二维数组。是cout一个个排出来的而已。。
// 并不是真的二维数组。是cout一个个排出来的而已。。
// 因为他是按照数字的顺序 0-n 个。一行一行 一个一个的cout出

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> s[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                cout << w[s[j] - '0'][i][k];
            }
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
        // 打印这两个 字符 理论上都是char的。。
        // 写成string应该也是可以。。就是相当于外面又白套了一层。
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                cout << w[a[j] - '0'][i][k];
            }
            if (j != n - 1)
                cout << '.';
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                cout << w[a[j] - '0'][i][k];
            }
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
        // 他最原始的样子 。。不用endl；
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
                cout << a[s[j] - '0'][i][k];
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
                cout << w[a[j] - '0'][i][k];
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
                cout << w[a[j] - '0'][i][k];
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
                cout << w[a[j] - '0'][i][k];
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
                cout << w[a[j] - '0'][i][k];
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
                cout << w[a[j] - '0'][i][k];
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 3; ++k)
                cout << w[a[j] - '0'][i][k];
            if (j != n - 1)
                cout << '.';
        }
        cout << '\n';
    }
    return 0;
}
// 通过这个表 了解数组在内存的样子。
// 通过这个遍历。了解三位数组怎么一行一行处理的 。。
// 很朴实的一题。但是很实用。。
// 很朴实 很实用。。是就是真的算法。。
