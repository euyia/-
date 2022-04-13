#include <all.h>
using namespace std;
// 输入：arr = [1,5,7,8,5,3,4,2,1], difference = -2
// 输出：4
// 解释：最长的等差子序列是 [7,5,3,1]。
// 这里用数组的值 作为哈希表的key。。。
// 起到了非常神奇的效果。。。

// 然后下面的静态数组。。就 = =。。
class Solution
{
public:
    int longestSubsequence(vector<int> &a, int d)
    {
        int res = 0;
        int mp[400001]{0};
        for (int v : a)
        {
            mp[v + 20000] = mp[v + 20000 - d] + 1;
            res = max(res, mp[v + 20000]);
        }
        return res;
    }
};

int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> mp;
    for (int v : a)
    {
        mp[v] = mp[v - d] + 1;
        res = max(res, mp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(dp[v], res);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(dp[v], res);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(dp[v], res);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(dp[v], res);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
// 刷啊刷。。。10000行至少。。
// 没精神不要耗着。回去睡会儿。
// 战。。死战。这次趴下就没机会了。
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(dp[v], res);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(dp[v], res);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (auto v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int i : a)
    {
        dp[i] = dp[i - d] + 1;
        res = max(res, dp[i]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
int soso(vector<int> &a, int d)
{
    int res = 0;
    unordered_map<int, int> dp;
    for (int v : a)
    {
        dp[v] = dp[v - d] + 1;
        res = max(res, dp[v]);
    }
    return res;
}
// 这里的 dp v  就是value
// 就是用值作为key 有奇效。。
// 加油坤哥说了看你的ak。。