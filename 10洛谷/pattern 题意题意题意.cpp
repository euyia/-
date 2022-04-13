#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //    就是哈希表 然后对每一行进行遍历。
    // 记录每个i 的上面的字母。如果为? 就放过。如果已经有存 。相等 也放过。如果不相等直接放回问号。
    // 然后从新遍历长度string 对于没有的直接放啥  a就可以吗。看他这里好像 啥都行？？？
    int n, m;
    cin >> n;
    string s;
    unordered_map<int, char> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        for (int j = 0; j < s.size(); ++j)
        {
            if (s[j] == '?')
                continue;
            if (!mp.count(j))
                mp[j] = s[j];
            else if (mp.count(j))
            {
                if (mp[j] != s[j])
                {
                    mp[j] = '!';
                }
                else
                    continue;
            }
        }
    }
    m = s.size();
    for (int i = 0; i < m; ++i)
    {
        if (mp.count(i))
        {
            if (mp[i] == '!')
                cout << '?';
            else
                cout << mp[i];
        }

        else
            cout << 'a';
    }
    return 0;
}
// 他这边意思如果某个序列号上有多个字母。就那个位置放？号。
// 不是直接挑出来盘错为问号。。