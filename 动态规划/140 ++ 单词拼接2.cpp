#include <all.h>
using namespace std;
// 听说是小米汽车部门的三面题。。
// 我做出来了。。。哇擦。。太有成就感了。
// 单词拼接2
class Solution
{
public:
    vector<string> wordBreak(string s, vector<string> &a)
    {
        int n = a.size();
        int dp[s.size() + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        vector<vector<string>> res(s.size() + 1);
        for (int i = 0; i < s.size(); ++i)
        //一个是这里的s.size()。。顺手就写成了i<n。因为平时n一般是我们要遍历的数组长度。。这里我自己定义成别的。但又没注意。
        {
            if (!dp[i])
                continue;
            for (auto t : a)
            {
                int size = t.size();
                if (s.substr(i, size) == t)
                {
                    if (res[i].size())
                    {
                        for (int j = 0; j < res[i].size(); ++j)
                        {
                            res[i + size].push_back(res[i][j] + " " + s.substr(i, size));
                            //另外一个 就是这里。。subtr(i+size)写成这样了。。裂开。
                        }
                    }
                    else
                        res[i + size].push_back(s.substr(i, size));
                    dp[i + size] = 1;
                }
            }
        }
        return res[s.size()];
        // 几天没刷  又点生疏了 这个思路。
        // 大题要多刷  刷熟练 就是和别人的差距。
    }
};
// 这题没事的时候可以刷刷。。
// 虽然是自己写出来的。。
// 但是不是很熟啊。
// 一般面试官选的题目肯定是它觉得有趣的。
// 我自己练的肯定也是练有趣的。。所以只要我算法审美ok+时间足够 我绝对能覆盖到。。
// 这和选歌是一样的。。只要我喜欢的歌曲。一定会流行。。
class Solution
{
public:
    unordered_map<string, vector<string>> mp;
    vector<string> wordBreak(string s, vector<string> &a)
    {
        return dfs(a, s);
    }
    vector<string> dfs(vector<string> &a, string s)
    {
        if (mp.count(s))
            return mp[s];
        if (s.empty())
            return {""};
        vector<string> res;
        for (auto t : a)
        {
            int size = t.size();
            if (s.substr(0, size) != t)
                continue;
            vector<string> ans = dfs(a, s.substr(size));
            for (auto tmp : ans)
            {
                res.push_back(t + (tmp.empty() ? "" : " " + tmp));
                // 这里很细节的。。你没注意 这里前后两个是不一样的。一个有字符的 一个没字符的。
                // 我就说 这样他末尾为什么没有空格 原来是单独处理了。
                // 递归后序处理。相当于从后面遍历回来的。。后面拼接回来的。
                // 回溯是更通用的解法。。所以很有价值。。
                // 通用 就很有价值。。说明他能解决的问题范围很广。。
            }
        }

        return mp[s] = res;
    }
};