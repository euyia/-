#include <all.h>
using namespace std;
class Solution
{
public:
    int countHighestScoreNodes(vector<int> &parents)
    {
        n = parents.size();
        vector<vector<long long>> mp(parents.size());
        for (long long i = 1; i < parents.size(); ++i)
        {
            mp[parents[i]].push_back(i);
        }
        dfs(mp, 0);
        sort(res.rbegin(), res.rend());
        int count = 1;
        while (count < res.size() && res[0] == res[count])
            count++;
        return count;
    }
    long long n;
    vector<long long> res;

    long long dfs(vector<vector<long long>> &mp, long long root)
    {
        long long cur = 1;
        long long ans = 0;
        for (long long i = 0; i < mp[root].size(); ++i)
        {
            long long next = dfs(mp, mp[root][i]);
            ans += next;
            if (next)
                cur *= next;
        }
        // 这个细节。。。。很伤。。
        if (n - ans - 1 != 0)
            cur = (n - ans - 1) * cur;
        res.push_back(cur);
        return ans + 1;
    }
};
// 这题不知道为什么当时没刷。可能是因为自己做出来的吧。。
// 但是刚才作为周赛 就写的很复杂。。
// 没有ans+=next cur*=next这种操作。。
// 。。。
unordered_map<int, vector<int>> mp;
int n;
vector<int> nums;
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        ans += next;
        cur *= next;
    }
    if (n - 1 - ans)
        nums.push_back(cur * (n - 1 - ans));
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    if (n - 1 - ans)
        nums.push_back((n - 1 - ans) * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    if (n - 1 - ans)
        nums.push_back((n - 1 - ans) * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    if (n - 1 - ans)
        nums.push_back((n - 1 - ans) * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans *= next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - ans - 1;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
// 1------
// 刷起来 只要手不算。。刷再多都是值得的。。。
// 刷就是最好的输出。。。
// 一直保持在编程这个维度上的输出。
// 对于编程的语感非常的有利。。
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - ans - 1;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - ans - 1;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (int i = 0; i < res.size(); ++i)
    {
        int next = dfs(res[i]);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    vector<int> res(mp[root]);
    for (auto r : res)
    {
        int next = dfs(r);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto r : mp[root])
    {
        int next = (dfs(r));
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto r : mp[root])
    {
        int next = dfs(r);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto r : mp[root])
    {
        int next = dfs(r);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        nums.push_back(k * cur);
    return ans + 1;
}
vector<int> res;
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    res.push_back(cur);
    return ans + 1;
}
int maxt;
int dfs(int root)
{
    int ans = 0;
    int cur = 1;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur > maxt)
    {
        maxt = cur;
        res.clear();
        res.push_back(cur);
    }
    else if (cur == maxt)
        res.push_back(cur);
    return ans + 1;
}
int cnt;
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur > maxt)
    {
        maxt = cur;
        cnt = 1;
    }
    else if (cur == maxt)
        cnt++;
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur > maxt)
    {
        maxt = cur;
        cnt = 1;
    }
    else if (cur == maxt)
        cnt++;
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur > maxt)
    {
        maxt = cur;
        cnt = 1;
    }
    else if (maxt == cur)
        cnt++;
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur > maxt)
    {
        maxt = cur;
        cnt = 1;
    }
    else if (cur == maxt)
        cnt++;
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur > maxt)
    {
        maxt = cur;
        cnt = 1;
    }
    else if (cur == maxt)
        cnt++;
    return ans + 1;
}
// 1000不是终点  是基本。
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur > maxt)
    {
        maxt = cur;
        cnt = 1;
    }
    else if (cur == maxt)
        cnt++;
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur == maxt)
    {
        maxt = cur;
        cnt = 1;
    }
    else if (cur == maxt)
        cnt++;
    return ans + 1;
}
int dfs(int root)
{
    int cur = 1;
    int ans = 0;
    for (auto m : mp[root])
    {
        int next = dfs(m);
        cur *= next;
        ans += next;
        // 这就是有时候并不需要转成变量 只需要统计而已。。
        //
    }
    int k = n - 1 - ans;
    if (k)
        cur *= k;
    if (cur == maxt)
    {
        maxt = cur;
        cnt = 1;
    }
    else if (cur == maxt)
        cnt++;
    return ans + 1;
}
// .