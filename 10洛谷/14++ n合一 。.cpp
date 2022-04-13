#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
char nums[101];
#include <iostream>
// 填上你觉得需要的其他头文件
using namespace std;
int main()
{
    int T;
    cin >> T;
    // 他这里只测试一次吗。应该是。不是说 每个都问。。
    if (T == 1)
    {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        // 请自行完成问题 3 的代码
        cout << 3 << endl;
        cout << 12 << endl;
        cout << 2 << endl;
    }
    else if (T == 4)
    {
        // 请自行完成问题 4 的代码
        printf("%d.6lf", 500 / 3);
        // 这个不知道行不行？？？？
    }
    else if (T == 5)
    {
        // 请自行完成问题 5 的代码
        cout << (220 + 260) / 32;
    }
    else if (T == 6)
    {
        // 请自行完成问题 6 的代码
        cout << sqrt(36 + 81);
    }
    else if (T == 7)
    {
        // 请自行完成问题 7 的代码
        cout << 110 << endl;
        cout << 90 << endl;
        cout << 0 << endl;
    }
    else if (T == 8)
    {
        double pi = 3.141593;
        cout << pi * 10 << endl
             << pi * 25 << endl
             << 4 / 3 * pi * 125 << endl;
    }
    else if (T == 9)
    {
        // 请自行完成问题 9 的代码
        cout << 22;
    }
    else if (T == 10)
    {
        // 请自行完成问题 10 的代码
    }
    else if (T == 11)
    {
        // 请自行完成问题 11 的代码
        cout << 100 / 3;
    }
    else if (T == 12)
    {
        // 请自行完成问题 12 的代码
        cout << 'M' - "A" + 1;
        cout << (char)('A' + 17);
    }
    else if (T == 13)
    {
        // 请自行完成问题 13 的代码
        double pi = 3.141593;
        cout << (int)(pow(4 / 3 * pi * (4 * 4 * 4 + 10 * 10 * 10), 1.0 * 1 / 3));
    }
    else if (T == 14)
    {
        // 请自行完成问题 14 的代码
        int a = 110, b = 10, sum = 3500;
        while (a * b < 3500)
        {
            a -= 1;
            b += 1;
        }
        double c = sum / b;
        if (c >= (int)c + 0.5)
            cout << (int)c;
        else
            cout << (int)c + 1;
        // 答案会不是整数？
    }
    return 0;
}

#include <bits/stdc++.h>
// 填上你觉得需要的其他头文件
using namespace std;
int main()
{
    int T;
    cin >> T;
    // 他这里只测试一次吗。应该是。不是说 每个都问。。
    if (T == 1)
    {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        // 请自行完成问题 3 的代码
        cout << 3 << endl;
        cout << 12 << endl;
        cout << 2 << endl;
    }
    else if (T == 4)
    {
        // 请自行完成问题 4 的代码
        printf("%.3lf", 1.0 * 500 / 3);
        // 这个不知道行不行？？？？
    }
    else if (T == 5)
    {
        // 请自行完成问题 5 的代码
        cout << (220 + 260) / 32;
    }
    else if (T == 6)
    {
        // 请自行完成问题 6 的代码
        cout << sqrt(36 + 81);
    }
    else if (T == 7)
    {
        // 请自行完成问题 7 的代码
        cout << 110 << endl;
        cout << 90 << endl;
        cout << 0 << endl;
    }
    else if (T == 8)
    {
        // double a=3.141593;
        // // 请自行完成问题 8 的代码
        // cout << a * 10<<endl;
        // cout << a * 25<<endl;
        // cout <<4/3* a * 125;
        double const pi = 3.141593;
        double const r = 5;
        cout << pi * r * 2 << endl
             << pi * r * r << endl
             << 4.0 / 3 * pi * r * r * r << endl;
    }
    else if (T == 9)
    {
        // 请自行完成问题 9 的代码
        cout << 22;
    }
    else if (T == 10)
    {
        // 请自行完成问题 10 的代码
        cout << 9;
        // 这题贼搞笑。
    }
    else if (T == 11)
    {
        // 请自行完成问题 11 的代码
        cout << 1.0 * 100 / 3;
    }
    else if (T == 12)
    {
        // 请自行完成问题 12 的代码
        cout << (int)('M' - 'A' + 1) << endl;
        cout << (char)('A' + 17);
    }
    else if (T == 13)
    {
        // 请自行完成问题 13 的代码
        double const pi = 3.141593;
        double V = pi * 4 * 4 * 4 * 4 / 3 + pi * 10 * 10 * 10 * 4 / 3;
        cout << floor(pow(V, 1.0 / 3)) << endl;
    }
    else if (T == 14)
    {
        // 请自行完成问题 14 的代码
        cout << 50;
        // 答案会不是整数？
    }
    return 0;
}
// 第8和13题 不知道为啥自己写的就不行。。在哪里细节出问问题了。。