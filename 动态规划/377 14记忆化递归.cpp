#include <all.h>
using namespace std;
class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        // 回溯应该可以，只有一个结束条件就是和为目标值，任何长度都可以，而且位置不同也算，。。只能模拟吧，就是担心爆掉，但是100例子，应该。。。不会吧，，，，就当做玩游戏，就不会太沉重，。。。。。学习就要轻松，游戏的心态，就像恋爱，轻松才是好的，一上来就搞得沉重是错的
        n = nums.size();
        t = target;
        res = nums;
        dfs(0);
        return count;
    }
    int count;
    int n, t;
    vector<int> res;
    void dfs(int path)
    {
        if (path == t)
        {
            count++;
            return;
        }
        if (path > t)
            return;
        for (int i = 0; i < n; ++i)
            dfs(path + res[i]);
    }
};

class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        vector<int> dp(target + 1);
        dp[0] = 1;
        for (int i = 1; i <= target; i++)
        {
            for (int &num : nums)
            {
                if (num <= i && dp[i - num] < INT_MAX - dp[i])
                {
                    dp[i] += dp[i - num];
                }
            }
        }
        return dp[target];
    }
};
class Solution
{
public:
    int combinationSum4(vector<int> &nums, int t)
    {
        int dp[t + 1];
        dp[0] = 1;
        int n = nums.size();
        for (int i = 1; i < t; ++i)
            for (int m : nums)
                if (i - m >= 0 && dp[i - m] < INT_MAX - dp[i])
                    dp[i] += dp[i - m];
        return dp[t];
    }
};
int combinationSum4(vector<int> &nums, int t)
{
    return dfs(nums, t);
}
unordered_map<int, int> mp;
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    mp[t] = res;
    return res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
    //赋值是一个动作。。这个动作有返回值的。。
    // 就是那个接收的变量本身。
    // 所以可以这么写。
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
// 他是不同的分解方式。。所以是+的。汇总型的。
// 然后另外一个问题是每个t对应的值 都是唯一的吗。。
// 就相当于t 会从小到到的嵌套关系。
// 他有了那个值 之后就不会再去算了。
// 因为他会在查表那边被拦击了。
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t - nums[i] >= 0)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t >= nums[i])
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t >= nums[i])
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t >= nums[i])
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t >= nums[i])
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t >= nums[i])
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (t >= nums[i])
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] <= t)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] <= t)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] <= t)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] <= t)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] <= t)
            res += dfs(nums, t - nums[i]);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (t >= n)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
//这里只需要i啊。。
// 只要元素的值。。
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (n <= t)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (t >= n)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (t >= n)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (n <= t)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (n <= t)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (n <= t)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
int dfs(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (t >= n)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
int ds(vector<int> &nums, int t)
{
    if (t == 0)
        return 1;
    if (mp.count(t))
        return mp[t];
    int res = 0;
    for (int n : nums)
        if (n <= t)
            res += dfs(nums, t - n);
    return mp[t] = res;
}
// 短短几行。。但是充满了智慧的光芒。。
// 这里主要是发现了。。每个dp能拆解成所有的分解一层的情况。。
// 就是少一层的情况。的所有种类的和。。
// 而且是依赖于数组的nums【i]的。。
// 还没1000
// 套路你忘记了无所谓的。。
// 只要这个思路。。你走过足够多次。。。