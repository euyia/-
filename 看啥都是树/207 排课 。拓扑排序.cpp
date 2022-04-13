#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
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
class Solution
{
public:
    bool canFinish(int k, vector<vector<int>> &nums)
    {
        // 也就是以第二个位置的视角 也就是父节点的视角。统计了所有的边。
        // 他用一个数组 res 直接把一个点的所有的边 都记录下来了。。。。牛逼。。
        // 他这是全部提交的答案中效率最高的。。
        // 。。。比我那个快了6倍。。
        queue<int> que;
        vector<int> vec(k, 0);
        vector<vector<int>> res(k);
        for (int i = 0; i < nums.size(); i++)
        {
            vec[nums[i][0]]++;
            res[nums[i][1]].push_back(nums[i][0]);
        }
        int num = k;
        for (int i = 0; i < k; i++)
        {
            if (vec[i] == 0)
            {
                que.push(i);
                num--;
            }
        }
        while (!que.empty())
        {
            int tmp = que.front();
            que.pop();
            // printf("tmp:%d  res[tmp].size():%d\n",tmp,res[tmp].size());
            for (int j = 0; j < res[tmp].size(); j++)
            {
                // printf("vec[res[tmp][j]]:%d\n",vec[res[tmp][j]]);
                if (--vec[res[tmp][j]] == 0)
                {
                    que.push(res[tmp][j]);
                    num--;
                }
            }
        }

        // printf("%d",num);
        return num == 0;
    }
};
bool soso(int k, vector<vector<int>> &nums)
{
    vector<int> vec(k, 0);
    vector<vector<int>> res(k);
    queue<int> q;

    for (auto n : nums)
    {
        ++vec[n[0]];
        res[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < res[v].size(); ++i)
            if (--vec[res[v][i]] == 0)
            {
                q.push(res[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool soso(int k, vector<vector<int>> &nums)
{
    vector<vector<int>> res(k);
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        res[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
    {
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < res[v].size(); ++i)
            if (--vec[res[v][i]] == 0)
            {
                q.push(res[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool soso(int k, vector<vector<int>> &nums)
{
    vector<vector<int>> vvi(k);
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        vvi[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < vvi[v].size(); ++i)
            if (--vec[vvi[v][i]] == 0)
            {
                q.push(vvi[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool soso(int k, vector<vector<int>> &nums)
{
    vector<vector<int>> vvi(k);
    vector<int> vec(k, 0);
    queue<int> q;
    for (vector<int> n : nums)
    {
        ++vec[n[0]];
        vvi[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < vvi[v].size(); ++i)
            if (--vec[vvi[v][i]] == 0)
            {
                q.push(vvi[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool soso(int k, vector<vector<int>> &nums)
{
    vector<vector<int>> vvi(k);
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        vvi[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < vvi[v].size(); ++i)
            if (--vec[vvi[v][i]] == 0)
            {
                q.push(vvi[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool soso(int k, vector<vector<int>> &nums)
{
    vector<vector<int>> vvi(k);
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        vvi[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < vvi[v].size(); ++i)
            if (--vec[vvi[v][i]] == 0)
            {
                q.push(vvi[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool soso(int k, vector<vector<int>> &nums)
{
    vector<vector<int>> vvi(k);
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        vvi[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < vvi[v].size(); ++i)
            if (--vec[vvi[v][i]] == 0)
            {
                q.push(vvi[v][i]);
                m--;
            }
    }
    return m == 0;
}
// 这个结构 有时间都可以刷。。因为框架比较大。。
// 不过概括下来就是用一个数组 存入度的边的个数。。然后用一个queue来记录这入度为零的点。。
// 检索入度为0的 给他取出来。就这么简单。。
bool canFinish(int k, vector<vector<int>> &nums)
{
    vector<int> vec(k, 0);
    vector<vector<int>> vvi(k);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        vvi[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < vvi[v].size(); ++i)
            if (--vec[vvi[v][i]] == 0)
            {
                q.push(vvi[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    vector<int> vec(k, 0);
    vector<vector<int>> vvi(k);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        vvi[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < vvi[v].size(); ++i)
            if (--vec[vvi[v][i]] == 0)
            {
                q.push(vvi[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        mp[n[1]].push_back(n[0]);
    }
    int f = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            f--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                f--;
            }
    }
    return f == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        mp[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    vector<vector<int>> vvi(k);
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        vvi[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < vvi[v].size(); ++i)
            if (--vec[vvi[v][i]] == 0)
            {
                q.push(vvi[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        mp[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                m--;
            }
    }
    return m == 0;
}

bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        mp[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        vec[n[0]]++;
        mp[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        mp[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        mp[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        mp[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                m--;
            }
    }
    return m == 0;
}
bool canFinish(int k, vector<vector<int>> &nums)
{
    unordered_map<int, vector<int>> mp;
    vector<int> vec(k, 0);
    queue<int> q;
    for (auto n : nums)
    {
        ++vec[n[0]];
        mp[n[1]].push_back(n[0]);
    }
    int m = k;
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
        {
            q.push(i);
            m--;
        }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mp[v].size(); ++i)
            if (--vec[mp[v][i]] == 0)
            {
                q.push(mp[v][i]);
                m--;
            }
    }
    return m == 0;
}

class Solution
{
public:
    bool canFinish(int k, vector<vector<int>> &nums)
    {
        queue<int> q;
        vector<vector<int>> res(k);
        vector<int> vec(k, 0);
        for (int i = 0; i < nums.size(); ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            vec[l]++;
            res[r].push_back(l);
        }
        for (int i = 0; i < k; ++i)
            if (vec[i] == 0)
                q.push(i);
        int count = 0;
        while (!q.empty())
        {
            count++;
            int v = q.front();
            q.pop();
            for (int i = 0; i < res[v].size(); ++i)
                if (--vec[res[v][i]] == 0)
                    q.push(res[v][i]);
        }
        return count == k;
    }
};
bool soso(int k, vector<vector<int>> &nums)
{
    vector<int> vec(k, 0);
    queue<int> q;
    vector<vector<int>> res(k);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        vec[l]++;
        res[r].push_back(l);
    }
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
            q.push(i);
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        for (int i = 0; i < res[v].size(); ++i)
            if (--vec[res[v][i]] == 0)
                q.push(res[v][i]);
    }
    return count == k;
}
int soso(vector<vector<int>> &nums, int k)
{
    vector<int> vec(k, 0);
    queue<int> q;
    vector<vector<int>> res(k);
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        vec[l]++;
        res[r].push_back(l);
    }
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
            q.push(i);
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        for (int i = 0; i < res[v].size(); ++i)
            if (--vec[res[v][i]] == 0)
                q.push(res[v][i]);
    }
    return count == k;
}
int soso(vector<vector<int>> &nums, int k)
{
    vector<int> vec(k, 0);
    vector<vector<int>> res(k);
    queue<int> q;
    for (int i = 0; i < nums.size(); ++i)
    {
        int l = nums[i][0], r = nums[i][1];
        vec[l]++;
        res[r].push_back(l);
    }
    for (int i = 0; i < k; ++i)
        if (vec[i] == 0)
            q.push(i);
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        for (int i = 0; i < res[v].size(); ++i)
            if (--vec[res[v][i]] == 0)
                q.push(res[v][i]);
    }
    return count == k;
}
// 这就是付出的收获。。
// 1月份练习的东西。。现在就觉得非常简单了。。
// 学习有个秘诀。。。就是站上巨人的肩膀 。放弃自己那微不足道的思考能力。
// 修行入逆水行走 不进则退。