#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
int boy, girl;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < n - 2; ++i)
        boy += (s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y');
    for (int i = 0; i < n - 3; ++i)
        girl += (s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' || s[i + 3] == 'l');
    cout << boy << '\n'
         << girl;
    return 0;
}
// 主要还是因为这两个单词里面没有任何相同的单词。
// 这个只能靠刷了。。
// 我都不知道怎么去概括。。