#include <all.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> res;
    vector<string> path;
    unordered_map<int, vector<string>> mp;
    vector<vector<string>> partition(string s)
    {
        int n = s.size();
        //1这个for循环就是普通的找回文子串的一个框架。同时把我们要的信息收集到哈希表里。
        for (int i = 0; i < 2 * n - 1; ++i)
        {
            int l = i / 2, r = i / 2 + i % 2;
            while (l >= 0 && r < n && s[l] == s[r])
            {
                mp[l].push_back(s.substr(l, r - l + 1));
                //这个散列表 可以说是这个题思路的一个关键。
                l--;
                r++;
            }
        }
        dfs(0, s);
        return res;
    }

    void dfs(int l, string s)
    {
        if (l = s.size())
        {
            res.push_back(path);
            return;
        }

        //2  这里就是普通的回溯递归。。也就是对传进来的下标l，去哈希表找所有的以l为开头的所有子串递归。
        for (int i = 0; i < mp[l].size(); ++i)
        {
            path.push_back(mp[l][i]);
            dfs(l + mp[l][i].size(), s);
            //mp[l][i].size() 就是那个回文子串的长度。因为要递归进入下一层。所以下标要对应往右移动。
            path.pop_back();
        }
    }
};
// 这题是对哈希表的一个巧妙运用。。
//
// 而且我发现一个问题。。往往自己解出来的方法。
// 感觉大部分都比官方的简单。。
// 所以。。官方的题解能不看就不看。。有毒。。
// 往往一些简单的思路。他非要搞的很复杂。。
