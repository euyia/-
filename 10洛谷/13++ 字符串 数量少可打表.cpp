#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
//我的代码比较结构化，容易理解
//在此也建议大家多用用string类，c++有关于string的特大好处，c和pascal都没有哦
// int main()
// {
//     string s;
//     getline(cin, s);
//     int cnt = 0;

//     for (int i = 0; i < s.size(); ++i)
//     {
//         if (s[i] == ' ')
//             cnt++;
//         else if (s[i] >= 'a' && s[i] <= 'o')
//             cnt += ((s[i] - 'a') % 3 + 1);
//         else if (s[i] >= 'p' && s[i] <= 's')
//             cnt += (s[i] - 'o');
//         else if (s[i] >= 't' && s[i] <= 'v')
//             cnt += (s[i] - 's');
//         else
//             cnt += (s[i] - 'v');
//     }
//     cout << cnt;
//     return 0;
// }

int num[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
            cnt++;
        else if (isalpha(s[i]))
            cnt += num[s[i] - 'a'];
    }
    cout << cnt;
    return 0;
};
// 这边不能用else
// 这边不能用else
// 这边不能用else
//  这🩸坑啊。。。
// 他说有可能有\n 和
// 可以采用 打表 处理量级小的操作
// 可以采用 打表 处理量级小的操作
// 可以采用 打表 处理量级小的操作