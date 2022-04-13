#include <all.h>
using namespace std;
class Solution
{
public:
    int maximumRequests(int n, vector<vector<int>> &nums)
    {
        // 递归的层数就是满足的人数
        // 暴力枚举所有==mask==0时候的层数。。
        // 没有先后顺序。所以是组合 。和排列区别。回头弄清排列和组合 在编程里面的实现区别？？？？？？
        // 就是回溯 +位运算 用一个maxt 记录mask ==0的最大层数 就是答案。。

        int mask = 0;
    }
    int maxt;
    void dfs(int cur, int size, int &mask)
    {
        if (mask == 0)
            maxt = max(cur, maxt);
        if (cur > size)
            return;
        for (int i = cur; i < size; ++i)
        {
            mask ^= 1 <<
            //   只有一个1 要么即使0 你怎么记录同时搬进去了好多人？？？？
        }
    }
};

#define MAXN 25
#define MAXM 100000
struct Edge
{
    int u, v;
} e[16];
int ecnt = 0;
bool ic[MAXM];
bool vis[MAXN];
int c[MAXM], ctot[MAXM], ccnt;
void dfs(int s, int i, int cur, int tot)
{
    // cout << tot << " " << i << endl;
    if (vis[i])
    {
        if (i == s && !ic[cur])
        {
            // cout << "SB " << cur << endl;
            ic[cur] = true;
            c[ccnt] = cur;
            ctot[ccnt] = tot;
            ccnt++;
        }
        return;
    }
    vis[i] = true;
    for (int j = 0; j < ecnt; j++)
    {
        if (e[j].u == i)
        {
            dfs(s, e[j].v, cur | (1 << j), tot + 1);
        }
    }
    vis[i] = false;
}
int ff[MAXM];
int f(int i)
{
    if (ff[i] != -1)
    {
        return ff[i];
    }
    ff[i] = 0;
    for (int j = 0; j < ccnt; j++)
    {
        if ((i & c[j]) == c[j])
        {
            ff[i] = max(ff[i], f(i & ~(c[j])) + ctot[j]);
        }
    }
    // cout << i << " " << ff[i] << endl;
    return ff[i];
}
class Solution
{
public:
    int maximumRequests(int n, vector<vector<int>> &requests)
    {
        ecnt = requests.size();
        memset(ic, 0, sizeof(ic));
        memset(vis, 0, sizeof(vis));
        ccnt = 0;
        memset(ff, -1, sizeof(ff));
        ff[0] = 0;
        for (int i = 0; i < ecnt; i++)
        {
            e[i].u = requests[i][0];
            e[i].v = requests[i][1];
        }
        for (int i = 0; i < n; i++)
        {
            dfs(i, i, 0, 0);
            vis[i] = true;
            // cout << endl;
        }
        /*
        for (int i = 0; i < ccnt; i++) {
            cout << c[i] << " ";
        }
        cout << endl;
        */
        return f((1 << ecnt) - 1);
    }
};

class Solution
{
    vector<int> delta;
    int ans;

    void dfs(vector<vector<int>> &reqs, int index, int stat, int count)
    {
        if (index >= reqs.size())
            return;
        int x = reqs[index][0];
        int y = reqs[index][1];
        if (x == y)
        {
            if (stat == 0)
            {
                ans = max(ans, count + 1);
            }
            dfs(reqs, index + 1, stat, count + 1);
            return;
        }
        dfs(reqs, index + 1, stat, count);
        stat += (delta[x] <= 0 ? 1 : -1) + (delta[y] >= 0 ? 1 : -1);
        delta[x]--;
        delta[y]++;
        if (stat == 0)
        {
            ans = max(ans, count + 1);
        }
        dfs(reqs, index + 1, stat, count + 1);
        delta[x]++;
        delta[y]--;
    }

public:
    int maximumRequests(int n, vector<vector<int>> &reqs)
    {
        delta = vector<int>(n, 0);
        ans = 0;
        dfs(reqs, 0, 0, 0);
        return ans;
    }
};

class Solution
{
public:
    int maximumRequests(int n, vector<vector<int>> &requests)
    {
        this->rz = requests.size();
        this->n = n;
        states.resize(n, 0);
        dfs(requests, 0, 0);
        return ans;
    }
    // 他这个其实就是我那个想法。。。那边考虑用mask存。。
    // 发现存不了。。
    // 存不了就非常麻烦。。因为我们每次都 要验证是否为有效的
    // 什么叫有效的 就是恢复原样。也就是所有的都为0
    void dfs(vector<vector<int>> &requests, int idx, int cnt)
    {
        if (idx == rz)
        {
            bool ch = true;
            for (int i = 0; i < n; ++i)
            {
                if (states[i] != 0)
                {
                    ch = false;
                    break;
                }
            }
            if (ch)
                ans = max(ans, cnt);
            return;
        }

        if (rz - idx + cnt <= ans)
            return;

        states[requests[idx][0]]++;
        states[requests[idx][1]]--;
        dfs(requests, idx + 1, cnt + 1);
        states[requests[idx][0]]--;
        states[requests[idx][1]]++;
        dfs(requests, idx + 1, cnt);
        return;
    }

    vector<int> states;
    int rz;
    int ans;
    int n;
};
// 上面两个解法都是回溯  排列组合的框架。
// 然后有些他自己逻辑上的细节。因为么有讲解。所以先放着吧 。。
