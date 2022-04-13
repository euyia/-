#include <all.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 两种方法。。。对比下。。
// 一种是遍历左边去匹配右边
// 一种是遍历右边去匹配左边。。
// 输入: s = "leetcode", wordDict = ["leet", "code"]
// 输出: true
// 解释: 返回 true 因为 "leetcode" 可以由 "leet" 和 "code" 拼接成。

// 遍历左边的字符串。然后枚举右边的字符段。。来匹配。匹配上的话。就那个长度的dp标记为true；
// 然后走到标记为true的时候说明。前面的部分是匹配的。。然后就继续匹配后面部分。。
// 而且可以多可能的匹配。。只要你能匹配 那个dp位置 说明都是可以到达的。。
// 都可以成为下一个匹配的起点。。完美契合了。这个题目的需求。。

class Solution
{
public:
    // 有一个问题是如果有多个匹配的呢、、》》》》
    // 他这里考虑进去了。
    // 在单词匹配的时候 会对所有匹配的都标记成true；
    bool wordBreak(string s, vector<string> &nums)
    {
        int k = nums.size();
        vector<bool> dp(k + 1);
        for (int i = 0; i < k; ++i)
        {
            if (!dp[i])
                continue;
            for (string n : nums)
            {
                int cur = n.size();
                if (s.substr(i, cur) == n)
                    dp[cur + i] = true;
            }
        }
        return dp[k];
    }
};

class Solution
{
public:
    bool wordBreak(string s, vector<string> &a)
    {
        int n = a.size();
        vector<bool> dp(n + 1);
        // 为什么是n加1 因为他是表示的是个数。。
        // 比如0 就是0个s字符串
        // 然后后面返回的dp【n]就是n个字符串。。
        // dp经常涉及到这种边界的情况。。。习惯就好了
        dp[0] = true;
        for (int i = 0; i < n; ++i)
        {
            if (!dp[i])
                continue;
            for (string k : a)
            {
                int cur = k.size();
                if (s.substr(i, cur) == k)
                    dp[cur + i] = true;
            }
        }
        return dp[n];
    }
};
// 这个方法是硬遍历。。从左边的遍历去匹配右边的 。。

class Solution
{
public:
    bool wordBreak(string s, vector<string> &a)
    {
        int n = s.size();
        vector<bool> dp(n + 1);
        unordered_set<string> st;
        dp[0] = true;
        for (int i = 0; i < n; ++i)
            if (!dp[i])
                continue;
            else

                for (int j = i + 1; j <= n; ++j)
                {
                    string k = s.substr(i, j - i);
                    if (st.count(k))
                        dp[j] = true;
                }
        return dp[n];
    }
};
bool dfs(string s, vector<string> &a)
{
    int n = s.size();
    vector<bool> dp(n + 1);
    dp[0] = true;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string k : a)
        {
            int cur = k.size();
            if (s.substr(i, cur) == k)
                dp[i + cur] = true;
            //为什么是i+cur而不是i+cur-1 这种细节要去品
        }
    }
    return dp[n];
}
bool dfs(string s, vector<string> &str)
{
    int n = s.size();
    vector<bool> dp(n + 1);
    dp[0] = true;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string k : str)
        {
            int cur = k.size();
            if (s.substr(i, cur) == k)
                dp[cur + i] = true;
        }
    }
    return dp[n];
}
bool dfs(string s, vector<string> &a)
{
    int n = s.size();
    vector<bool> dp(n + 1);
    dp[0] = true;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string k : a)
        {
            int cur = k.size();
            if (s.substr(i, cur) == k)
                dp[cur + i] = true;
        }
    }
    return dp[n];
}
bool dfs(string s, vector<string> &a)
{
    int n = s.size();
    vector<bool> dp(n + 1);
    dp[0] = true;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string k : a)
        {
            int cur = k.size();
            if (s.substr(i, cur) == k)
                dp[cur + i] = true;
        }
    }
    return dp[n];
}
bool dfs(string s, vector<string> &a)
{
    int n = s.size();
    vector<bool> dp(n + 1);
    dp[0] = true;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string k : a)
        {
            int cur = k.size();
            if (s.substr(i, cur) == k)
                dp[cur + i] = true;
        }
    }
    return dp[n];
}
bool dfs(string s, vector<string> &a)
{
    int n = s.size();
    vector<bool> dp(n + 1);
    dp[0] = true;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string k : a)
        {
            int cur = k.size();
        }
    }
}
class Solution
{
public:
    bool wordBreak(string s, vector<string> &nums)
    {

        int n = s.size();
        int dp[301];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 0; i < n; ++i)
        {
            if (!dp[i])
                continue;
            for (string n : nums)
            {
                int size = n.size();
                if (s.substr(i, size) == n)
                    dp[i + size] = 1;
            }
        }
        return dp[n];
    }
};
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string str : nums)
        {
            int size = str.size();
            if (s.substr(i, size) == str)
                dp[i + size] = 1;
        }
    }
    return dp[n];
}
int sosos(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string str : nums)
        {
            int size = str.size();
            if (s.substr(i, size) == str)
                dp[i + size] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int size = n.size();
            if (s.substr(i, size) == n)
                dp[i + size] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &str)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto st : str)
        {
            int size = st.size();
            if (s.substr(i, size) == st)
                dp[i + size] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &str)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : str)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &str)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : str)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int size = n.size();
            if (s.substr(i, size) == n)
                dp[i + size] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i + k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {

        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {

        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int t = n.size();
            if (s.substr(i, t) == n)
                dp[i + t] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)

{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int t = n.size();
            if (s.substr(i, t) == n)
                dp[i + t] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    dp[n];
}
// 为什么是n而不是n-1
// 因为比如前面匹配。下标匹配到n-1位置。他的答案是记录在n的位置。
// 因为我们0是设为1 没有意思的。。所以这里的dp 是位数。
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[k + i] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int k = n.size();
            if (s.substr(i, k) == n)
                dp[i + k] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto k : nums)
        {
            int c = k.size();
            if (s.substr(i, c) == k)
                dp[i + c] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto k : nums)
        {
            int c = k.size();
            if (s.substr(i, c) == k)
                dp[i + c] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto k : nums)
        {
            int c = k.size();
            if (s.substr(i, c) == k)
                dp[i + c] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto k : nums)
        {
            int c = k.size();
            if (s.substr(i, c) == k)
                dp[i + c] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto k : nums)
        {
            int c = k.size();
            if (s.substr(i, c) == k)
                dp[i + c] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto k : nums)
        {
            int c = k.size();
            if (s.substr(i, c) == k)
                dp[i + c] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        // 因为我们是通过对当前位置dp有无 来开始做判断。
        // 如果我们标记到已经匹配的最后一个。那么就要用下一个s.substr(i+1,c)
        // 然后下面还要减一。。
        //而且你这循环前面还要对0的情况进行分开处理。。

        if (!dp[i])
            continue;
        for (auto k : nums)
        {
            int c = k.size();
            if (s.substr(i, c) == k)
                dp[i + c] = 1;
        }
    }
    return dp[n];
    // dp n 位置为1  就说明匹配到n-1的字符串。。
}
// 1000起步。
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        // 这边卡了下思路。。
        // 就是去遍历nums数组。然后把下一步可用的点 给标记起来。
        // 给之后的走。
        for (auto n : nums)
        {
            int t = n.size();
            if (s.substr(i, t) == n)
                dp[i + t] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int size = n.size();
            if (s.substr(i, size) == n)
                dp[i + size] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int size = n.size();
            if (s.substr(i, size) == n)
                dp[i + size] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (auto n : nums)
        {
            int size = n.size();
            if (s.substr(i, size) == n)
                dp[i + size] = 1;
        }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (!dp[i])
            continue;
        for (string n : nums)
        {
            int size = n.size();
            if (s.substr(i, size) == n)
                dp[i + size] = 1;
        }
    }
    return dp[n + 1];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (dp[i])
            for (string n : nums)
            {
                int size = n.size();
                if (s.substr(i, size) == n)
                    dp[i + size] = 1;
            }
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (dp[i])
            for (string n : nums)
                if (s.substr(i, n.size()) == n)
                    dp[i + n.size()] = 1;
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (dp[i])
            for (string n : nums)
                if (s.substr(i, n.size()) == n)
                    dp[i + n.size()] = 1;
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (dp[i])
            for (string n : nums)
                if (s.substr(i, n.size()) == n)
                    dp[i + n.size()] = 1;
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (dp[i])
            for (string n : nums)
                if (s.substr(i, n.size()) == n)
                    dp[i + n.size()] = 1;
    }
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
        if (dp[i])
            for (string n : nums)
                if (s.substr(i, n.size()) == n)
                    dp[i + n.size()] = 1;
    return dp[n];
}
int soso(string s, vector<string> &nums)
{
    int n = s.size();
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
        if (dp[i])
            for (string n : nums)
                if (s.substr(i, n.size()) == n)
                    dp[i + n.size()] = 1;
    return dp[n];
}
// 两个变量n一样的。。但是可以跑。
// 最好是不要。
// 然后这里是dpn