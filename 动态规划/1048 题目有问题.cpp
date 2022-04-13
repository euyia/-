#include <all.h>
using namespace std;
// 输入：words = ["xbc","pcxbcf","xb","cxbc","pcxbc"]
// 输出：5
// 解释：所有的单词都可以放入单词链 ["xb", "xbc", "cxbc", "pcxbc", "pcxbcf"].

class Solution
{
public:
    int longestStrChain(vector<string> &a)
    {
        int n = a.size();
        sort(a.begin(), a.end(), [&](string i, string j)
             { return i.size() <= j.size(); });
        vector<int> dp(n, 1);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (isok(a[i], a[j]))
                    if (dp[i] < dp[j] + 1)
                        dp[i] = dp[j] + 1;
            }
        }
        return *max_element(dp.begin(), dp.end());
    }

    bool isok(string a, string b)
    {
        // a包含b>
        int n = a.size();
        int m = b.size();
        if (n <= m)
            return false;
        int j = 0;
        for (int i = 0; i < m; ++i)
        {
            if (b[j] == a[i])
                j++;
            if (j == m)
                return true;
        }
        return false;
    }
};
// 这是发现的一个找匹配字符串的方法。
bool isok(string a, string b)
{
    // a包含b>
    int n = a.size();
    int m = b.size();
    if (n <= m)
        return false;
    unordered_set<string> mp;
    for (int i = 0; i + m <= n; ++i)
    {
        mp.insert(a.substr(i, m));
    }
    return mp.count(b);
}

class Solution
{
public:
    int longestStrChain(vector<string> &a)
    {
        int n = a.size();
        sort(a.begin(), a.end(), [&](string &i, string &j)
             { return i.size() <= j.size(); });
        vector<int> dp(n, 1);
        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (isok(a[i], a[j]))
                    if (dp[i] < dp[j] + 1)
                        dp[i] = dp[j] + 1;
            }
        }

        sort(dp.begin(), dp.end());
        return dp[n - 1];
    }

    bool isok(string &a, string &b)
    {
        // a包含b>
        int n = a.size();
        int m = b.size();
        if (n != m + 1)
            return false;
        int j = 0;
        for (int i = 0; i < n; ++i)
        {
            if (b[j] == a[i])
                j++;
            if (j == m)
                return true;
        }
        return false;
    }
};

// 调试可以过。。。执行过不去。。