#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
// 输入：s = "aabcb"
// 输出：5
// 解释：美丽值不为零的字符串包括 ["aab","aabc","aabcb","abcb","bcb"] ，每一个字符串的美丽值都为 1
// 就是 所有  子数组的最多元素-最少元素的 和。

// 这里牛的是那个匿名函数的设计 我想学。
// 然后就是那个sp的设计。。我不知道他是怎么想出来的。反正就是牛逼。

class Solution
{
public:
    int beautySum(string s)
    {
        // 算一个很简单。
        // 组合l<=n;
        int n = s.size();
        int mp[26]{0};
        // pair<int, int> dp[n][n];
        int res = 0;
        for (int i = 0; i < n; ++i)
        {
            int maxt = INT_MIN;
            int mint = INT_MAX;
            for (int j = i + 1; j < n; ++j)
            {
                mp[s[j] - 'a']++;
                maxt = max(maxt, mp[s[j] - 'a']);
                mint = min(mint, mp[s[j] - 'a']);
                res += maxt - mint;
            }
            memset(mp, 0, sizeof(mp));
        }
        return res;
    }
};
class Solution
{
public:
    int a[26];
    int beautySum(string s)
    {
        int n = s.length();
        auto findmin = [&](char &ch, int &times)
        {
            times = 500;
            for (int i = 0; i < 26; i++)
            {
                if (a[i] != 0 && a[i] < times)
                {
                    times = a[i];
                    ch = i + 'a';
                    // 这个是把序列恢复成是字符。。
                }
            }
        };
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            memset(a, 0, sizeof(a));
            int ma = 1, mi = 1;
            a[s[i] - 'a']++;
            char sp = s[i];
            for (int j = i + 1; j < n; j++)
            {
                a[s[j] - 'a']++;
                if (a[s[j] - 'a'] == 1)
                {
                    sp = s[j];
                    mi = 1;
                }
                else if (s[j] == sp)
                {
                    mi++;
                }
                ma = max(ma, a[s[j] - 'a']);
                ans += ma - mi;
            }
        }
        return ans;
    }
};