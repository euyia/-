#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    unordered_map<char, int> mp;
    mp['a'] = 1, mp['e'] = 1, mp['o'] = 1, mp['i'] = 1, mp['u'] = 1;
    for (int i = 0; i < 3; ++i)
    {
        getline(cin >> t);
        int cnt = 0;
        for (auto t : t)
            if (mp.count(t))
                cnt++;
        int n = i % 2 == 0 ? 5 : 7;
        if (cnt != n)
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
// 我发现这个些人 都很膨胀。。命名代码写的很垃圾。却老是说题目水，，
