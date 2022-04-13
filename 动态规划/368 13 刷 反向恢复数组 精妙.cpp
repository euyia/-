#include <all.h>
using namespace std;
class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        // 用最长子序列那个解法，可以解，但是怎么记录呢？？？就记录最后一个数吗，那就记录最后一个数，然后再遍历一遍，找出所有对他取余为零的，要先排序吗，要的，然后反向取余是啥？？？？
        // 我发现我在被窝里 解题能力非常强。。
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int dp[n];

        for (int i = 0; i < n; ++i)
        {
            dp[i] = 1;
            for (int j = 0; j < i; ++j)
                if (nums[i] % nums[j] == 0)
                    dp[i] = max(dp[i], dp[j] + 1);
        }
        int i = max_element(dp, dp + n) - dp;
        // 我说吧。。数组的名字就是地址。。哈哈。。
        // 这样就可以拥有c++的库。然后又能拥有静态速度的速度。。
        // 两全其美。。
        int maxt = dp[i];
        int k = nums[i];
        vector<int> res{k};
        for (int j = i; j >= 0; --j)
        {
            if (k % nums[j] == 0 && maxt == dp[j])
            {
                res.push_back(nums[j]);
                k = nums[j];
                maxt--;
            }
        }
        return res;
    }
    // 不单单最最后一个。。是全部。。
};
// 这个是自己想的。。想用回溯的方式。。把所有的情况放到大数组里面。。
// 。。。
class Solution
{
public:
    map<int, vector<int>> mp;
    vector<int> path;
    int vis[1000];
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
    }
    void dfs(int l, int n, vector<int> &nums)
    {
        int n = path.size();
        if (l == n)
        {
            mp[n] = path;
            return;
        }
        for (int j = l; j < nums.size(); ++j)
        {
            bool flag = false;
            if (vis[j] == 0)
                for (int i = 0; i < n; ++i)
                {
                    if (nums[j] % path[i] != 0)
                    {
                        flag = true;
                        break;
                    }
                }
            if (flag)
                continue;
            vis[l] = 1;
            path.push_back(nums[l]);
            dfs(l + 1, n, nums);
            path.pop_back();
            vis[l] = 0;
        }
    }
};

// 往回找。。值要迭代。。数目也要迭代。。。
// 缺一不可。
int dp[100];
vector<int> nums;
int maxt;
int cnt;
int j;
vector<int> res;
vector<int> soso()
{
    for (int i = j; i >= 0; --i)
        if (maxt % nums[i] == 0 && dp[i] == cnt)
        {
            res.push_back(nums[i]);
            cnt--;
            maxt = nums[i];
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0; --i)
        if (maxt % nums[i] == 0 && dp[i] == cnt)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0; --i)
        if (maxt % nums[i] == 0 && dp[i] == cnt)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0; --i)
        if (maxt % nums[i] == 0 && dp[i] == cnt)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0; --i)
        if (maxt % nums[i] == 0 && dp[i] == cnt)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0; --i)
        if (maxt % nums[i] == 0 && dp[i] == cnt)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0; --i)
        if (maxt % nums[i] == 0 && dp[i] == cnt)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (maxt % nums[i] == 0 && dp[i] == cnt)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (dp[i] == cnt && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
// 好思路。。
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt = 0;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt > 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; cnt >= 0 && i >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(nums[i]);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}
vector<int> soso()
{
    for (int i = j; i >= 0 && cnt >= 0; --i)
        if (cnt == dp[i] && maxt % nums[i] == 0)
        {
            cnt--;
            maxt = nums[i];
            res.push_back(maxt);
        }
    return res;
}