#include <all.h>
using namespace std;
class Solution
{
public:
    int dp[100][100];
    bool visited[100][100];
    int a, b, count;
    int movingCount(int m, int n, int k)
    {
        int a = m, b = n;
    }
    void dfs(int i, int j, int k)
    {
        if (i > a || i < 0 || j < 0 || j > b)
            return;
        if (visited[i][j] || !isok(i, j, k))
            return;
        visited[i][j] = 1;
        count++;
        dfs(i + 1, j, k);
        dfs(i, j + 1, k);
    }
    bool isok(int a, int b, int k)
    {
        int s = 0;
        while (a != 0 || b != 0)
        {
            s += a % 10;
            s += b % 10;
            b /= 10;
            a /= 10;
        }
        return k >= s;
    }
};
//  这是计算一个数 按位的+
// 小套路。要学。。
int soso(int a)
{
    int s = 0;
    while (a)
    {
        s += a % 10;
        a /= 10;
    }
    return s;
}

class Solution
{
    // 计算 x 的数位之和
    int get(int x)
    {
        int res = 0;
        for (; x; x /= 10)
        {
            res += x % 10;
        }
        return res;
    }

public:
    int movingCount(int m, int n, int k)
    {
        if (!k)
            return 1;
       queue<pair<int, int>>q;
        // 向右和向下的方向数组
        int a[2] = {0, 1};
        int b[2] = {1, 0};
       int dp[100][100];
       q.push({0,0});
        dp[0][0] = 1;
        int count = 1;
        while (!q.empty())
        {
            auto t =q.front();
            int x=t.first;
            int y=t.second;
            // 不就是多写两句嘛。。我可以的。
           q.pop();
            for (int i = 0; i < 2; ++i)
            {
                int l = a[i] + x;
                int r = b[i] + y;
                if (l < 0 || l >= m || r < 0 || r >= n || dp[l][r] || get(l) + get(r) > k)
                    continue;
               q.push(make_pair(l, r));
                dp[l][r] = 1;
                count++;
            }
        }
        return count;
    }
};
class Solution {
    // 计算 x 的数位之和
    int get(int x) {
        int res=0;
        for (; x; x /= 10) {
            res += x % 10;
        }
        return res;
    }
public:
    int movingCount(int m, int n, int k) {
        if (!k) return 1;
        queue<pair<int,int> > Q;
        // 向右和向下的方向数组
        int dx[2] = {0, 1};
        int dy[2] = {1, 0};
        vector<vector<int> > vis(m, vector<int>(n, 0));
        Q.push(make_pair(0, 0));
        vis[0][0] = 1;
        int ans = 1;
        while (!Q.empty()) {
            auto [x, y] = Q.front();
            Q.pop();
            for (int i = 0; i < 2; ++i) {
                int tx = dx[i] + x;
                int ty = dy[i] + y;
                if (tx < 0 || tx >= m || ty < 0 || ty >= n || vis[tx][ty] || get(tx) + get(ty) > k) continue;
                Q.push(make_pair(tx, ty));
                vis[tx][ty] = 1;
                ans++;
            }
        }
        return ans;
    }
};

