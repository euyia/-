#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    // 不需要特判。因为1 的话进不去循环 cnt 自然会==0；
    // if (n < 2)
    //     cout << 0;
    // else
    // {
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            cnt++;
            s[i] = 'v' && s[i + 1] = 'j';
        }
    }
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    cout << cnt;
    // }
    return 0;
}
// 因为他只有四种可能。
// 第一遍过去之后。。把符合的给标记掉。。
// 大大的降低了这题的难度
// 。。
int main()
{
    int cnt = 0, n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == 'a' && a[i + 1] == 'b')
        {
            cnt++;
            s[i] == 'c', s[i + 1] = 'd';
        }
    }
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    cout << cnt;
    return;
}
int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cnt++;
            s[i] = 'c', s[i + 1] = 'd';
        }
    }
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cnt++;
            s[i] = 'c', s[i + 1] = 'd';
        }
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    cout << cnt << endl;
    return 0;
}
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cnt++;
            s[i] = 'c', s[i + 1] = 'd';
        }
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cnt++;
            s[i] = 'c', s[i + 1] = 'd';
        }
    }
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    }
    cout << cnt;
    return 0;
}
int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cnt++;
            s[i] = 'c', s[i + 1] = 'd';
        }
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cnt++;
            s[i] = 'c', s[i + 1] = 'b';
        }
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    cout << cnt;
    return 0;
}
int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cnt++;
            s[i] = 'c', s[i + 1] = 'd';
        }
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    cout << cnt << endl;
    return 0;
}
int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cnt++;
            s[i] = 'c', s[i + 1] = 'd';
        }
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    cout << cnt << endl;
    return 0;
}
// 通过 改动原始数据  大大降低 难度
// 通过 改动原始数据  大大降低 难度
// 通过 改动原始数据  大大降低 难度