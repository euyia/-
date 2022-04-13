#include <all.h>
using namespace std;
// 输入： nums = [4, 3, 2, 3, 5, 2, 1], k = 4
// 输出： True
// 说明： 有可能将其分成 4 个子集（5），（1,4），（2,3），（2,3）等于总和。
// 感觉核心是这个dfs+vis的配合。实现了 逐层标记的动作。
// bool dfs的设计
// 用一个flag 来标记 k==0的时候也是可以的。
// 然后就是减枝了。。不知道为什么减枝这题效果这么明显。
class Solution
{
public:
    vector<int> nums;
    vector<bool> st;
    // 这个st 又是什么东西 相当于vis
    int maxt;
    // 这个maxt是总和。
    bool dfs(int start, int cur, int k)
    {
        if (!k)
            return true;
        if (cur == maxt)
            return dfs(0, 0, k - 1);
        // 他从这里再递归。就是不退回去了。。之前的回溯 也都不会实现了。
        // 这里不知道为什么要==maxt为什么要再过递归。也就是 有一个有效的数组了？？？
        for (int i = start; i < nums.size(); i++)
        {
            if (st[i])
                continue;
            // 确实是vis。。真的舒服。。解决了。之前标记的问题
            // 哦 他是一遍一遍的。。哦我知道了。。他只要找到一个就马上从新进入新的递归

            if (nums[i] + cur <= maxt)
            {
                st[i] = true;
                if (dfs(i + 1, nums[i] + cur, k))
                    return true;
                st[i] = false;
            }

            while (i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;
            if (!cur || cur + nums[i] == maxt)
                return false;
            // 这两个是减枝。没有这两个就从0ms 变成超时。。

            // [6,5,9,6,3,5,1,10,4,1,4,3,9,9,3,3]
            // 9
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int> &_nums, int k)
    {
        nums = _nums;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        // 就是从0开始累加。。封装的一个累加函数。。平时很少见。
        if (sum % k)
            return false;
        st.resize(nums.size());
        sort(nums.rbegin(), nums.rend());
        maxt = sum / k;
        path.push_back({});
        return dfs(0, 0, k);
    }
};
vector<bool> vis;
vector<int> nums;
vector<vector<int>> path;
int maxt;
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
    {
        path.push_back({});
        return dfs(0, 0, k - 1);
        // 核心是这一句。。点金之笔。
    }
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            path.back().push_back(nums[i]);
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
            path.back().pop_back();
        }
        while (i + 1 < nums.size() && nums[i + 1] == nums[i])
            i++;
        if (!cur || cur + nums[i] == maxt)
            return false;
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            // 这只是一个分支。并不能直接 return dfs
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
// vis 和dfs的这样的配合 可以做很多事。。
// 如果再加上path 能做的事情更丰富了。
//然后就是好好品他这里 bool的设计。
// 其实可以用一个flag 替代。。
// 就是k==0 的时候flag给改掉 就可以了。
//
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return true;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return true;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int start, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = start; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = 1; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    //  这是真正的底部。。
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {

            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur + nums[i] <= maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
bool dfs(int l, int cur, int k)
{
    if (!k)
        return true;
    if (cur == maxt)
        return dfs(0, 0, k - 1);
    //  这个递归真的太牛逼了。。。、
    for (int i = l; i < nums.size(); ++i)
    {
        if (vis[i])
            continue;
        if (cur == maxt)
        {
            vis[i] = 1;
            if (dfs(i + 1, cur + nums[i], k))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
// 要刷都要500以上才会顺手起来。。