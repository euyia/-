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
// 这题是给个数组。然后第一元素是进程开始的时间，第二元素是进程持续的时间。
// 然后求这些进程执行的顺序。
// 他要求 第一排序标准是进程执行的时间。第二排序标准是 数组下标
// 但是在这之前有个大前提。。就是目前行走的进程时间能覆盖到第一元素开始的时间
// 就比如一个主主进程时间表now 。。数组nums里面的就是表示他那个进程能什么时候开始执行。
// 也就是不能早于进程时间表。比如现在总进程才跑了5秒。你不能执行 要求第10秒之后才开始的进程。

// 这是这题的核心。。不然就直接全部甩进优先队列就好了。没那么多事。
// 他就是有这个卡着
#define pii pair<int, int>
class Solution
{
public:
    priority_queue<pii, vector<pii>, greater<pii>> q;
    vector<int> getOrder(vector<vector<int>> &nums)
    {
        int n = nums.size();
        vector<pair<pii, int>> a(n);
        unordered_map<pii, int> mp;
        for (int i = 0; i < n; ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            a[i] = {{l, r}, i};
            mp[{l, r}] = i;
        }
        sort(a.begin(), a.end());
        int i = 0;
        int now = 1;
        vector<int> res;

        while (!q.empty() || i < n)
        {
            int k = a[i].first.first;
            while (k <= now)
            {
                q.push(a[i].first);
                i++;
            }
            while (!q.empty() && q.top().first < now)
            {
                now += q.top().second;
                res.push_back(mp[q.top()]);
                q.pop();
            }
        }
        return res;
    }
};

class Solution
{
private:
    using PII = pair<int, int>;
    using LL = long long;

public:
    vector<int> getOrder(vector<vector<int>> &nums)
    {
        int n = nums.size();
        vector<int> index(n);
        iota(index.begin(), index.end(), 0);
        sort(index.begin(), index.end(), [&](int i, int j)
             { return nums[i][0] < nums[j][0]; });

        vector<int> res;
        // 优先队列
        priority_queue<PII, vector<PII>, greater<PII>> q;
        // 时间戳
        LL t = 0;
        // 数组上遍历的指针
        int j = 0;

        for (int i = 0; i < n; ++i)
        {
            // 如果没有可以执行的任务，直接快进
            if (q.empty())
            {
                t = max(t, (LL)nums[index[j]][0]);
            }
            // 将所有小于等于时间戳的任务放入优先队列
            while (j < n && nums[index[j]][0] <= t)
            {
                q.emplace(nums[index[j]][1], index[j]);
                ++j;
            }
            // 选择处理时间最小的任务
            auto k = q.top();
            int x = k.first, y = k.second;
            t += x;
            res.push_back(y);
            q.pop();
        }
        return res;
    }
};
priority_queue<pii, vector<pii>, greater<pii>> q;
#define pii pair<int, int>
#define ll long long
vector<int> res;
long long now = 0;
int j = 0;
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int i, int y)
         { return nums[i][0] > nums[i][0]; });
    //  这个是实现了  你能按照你想要的顺序 去拿到你想要的下标。
    // 不用再像之前一题 直接把数组和下标倒置过来。。都不用。
    // 这样他按自己想要的顺序去访问，而且还保留了原有的对应关系。
    while (n--)
    {
        if (q.empty())
            // 就有一段时间进程闲置了。。
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
        {
            q.emplace(nums[index[j]][1], index[j]);
            ++j;
        }
        // 这个循环 会在n循环之前就结束。不是和外层同步的。
        // 只要满足first位置小于now的。。会会放进优先队列。也就是小顶堆。
        // 下面才是主循环。。
        // 像这种大体型 每天吃两题 就非常饱了。。也是足够了。
        // 就像一个拓扑排序。一个kmp。。一个层序 吃一个就管一辈子了。
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
        // 每次只pop一个。
    }
    return res;
}
// 反复琢磨 反复琢磨。。反复琢磨。
// 这里面now 是和原数组nums的第一个元素 是同纬度的
// 这里的j 的顺序 是和nums 第一个元素的顺序是同一个维度的。。同序的。。
// nums的第二个元素 适合now的递增有关的。在now的覆盖之下第二元素 是第一排序标准。
// 这是这题的难点。。第二元素是第一排序标准。但是必须要在now的覆盖之下（所以这里用是否
// 放入q来作为这个前提保证）
// 然后index[j] 他是题目要求。。作为第二排序的标准。
vector<int> getOrder(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && now >= nums[index[j]][0])
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && now >= nums[index[j]][0])
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && now >= nums[index[j]][0])
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        int l = nums[index[j]][0], r = nums[index[j]][1];
        // 这样封装不行。
        // 1 下面while的时候j是动态的。。这里的l是写死的
        // 2 如果没有q为空的限制。。j是有可能提前到n也就是越界的。
        if (q.empty())
            now = max(now, (ll)l);
        while (j < n && now >= l)
            q.emplace(l, index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && now >= nums[index[j]][0])
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
// 这个emplace 还真没有push。。。我擦。。我还以为是性能取舍。。
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
// 要非常熟练。。时间就应该花在这种经典题的刷熟练上。。
//要刷到非常非常树。。直接上手就是
// 在这花再多的时间都是值得的。。
// 因为没有那么多经典的题型给你刷的。。。。
// 像宝藏一样 。。找到经典题型。框架 就要猛刷。。刷到非常熟练 一定不能
// 半生不熟没任何用。。要刷到肌肉记忆。。。。
// 思路也要根

vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (!q.empty())
            now = max(now, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= now)
            q.emplace(nums[index[j]][1], index[j++]);
        now += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
long long cnt = 1;
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (!q.empty())
            cnt = max(cnt, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cnt)
            q.emplace(nums[index[j]][1], index[j++]);
        cnt += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
ll cur = 1;
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (!q.empty())
            cnt = max(cnt, (ll)nums[index[j]][0]);
        for (; j < n && nums[index[j]][0] <= cnt; ++j)
            q.emplace(nums[index[j]][1], index[j]);
        cnt += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
// 这图里。对于cnt节奏的控制。然后利用优先队列实现了题目的选取。。
// 然后在一开始就构建了一个index作为新的拓展。。
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] < cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] < cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && cur >= nums[index[j]][0])
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    // 既保留了原来的序列号 又进行了我们需要的排序
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
#define all(nums) nums.begin(), nums.end()
#define all(nums) nums.begin(), nums.end()
#define all(nums) nums.begin(), nums.end()
#define all(nums) nums.begin(), nums.end()
#define all(nums) nums.begin(), nums.end()
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(all(index), 0);
    sort(all(index), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(all(index), 0);
    sort(all(index), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][0], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(all(index), 0);
    sort(all(index), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(all(index), 0);
    sort(all(index), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(all(index), 0);
    sort(all(index), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
vector<int> dfs(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<int> index(n);
    iota(all(index), 0);
    sort(all(index), [&](int x, int y)
         { return nums[x][0] < nums[y][0]; });
    int k = n;
    while (k--)
    {
        if (q.empty())
            cur = max(cur, (ll)nums[index[j]][0]);
        while (j < n && nums[index[j]][0] <= cur)
            q.emplace(nums[index[j]][1], index[j++]);
        cur += q.top().first;
        res.push_back(q.top().second);
        q.pop();
    }
    return res;
}
// 这个往死里刷 刷到熟练