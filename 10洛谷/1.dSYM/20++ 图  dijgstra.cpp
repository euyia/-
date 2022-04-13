#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>

// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
/*
* 使用优先队列优化 Dijkstra 算法
* 复杂度 O(ElogE)
* 注意对 vector<Edge>E[MAXN] 进行初始化后加边 */
const int INF = 0x3f3f3f3f;
const int MAXN = 1000010;
struct qnode
{
    int v;
    int c;
    qnode(int _v = 0, int _c = 0) : v(_v), c(_c) {}
    bool operator<(const qnode &r) const
    {
        return c > r.c;
    }
};
struct Edge
{
    int v, cost;
    Edge(int _v = 0, int _cost = 0) : v(_v), cost(_cost) {}
};
vector<Edge> E[MAXN];
bool vis[MAXN];
int dist[MAXN];
//点的编号从 1 开始
void Dijkstra(int n, int start)
{
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++)
        dist[i] = INF;
    priority_queue<qnode> que;
    while (!que.empty())
        que.pop();
    dist[start] = 0;
    que.push(qnode(start, 0));
    qnode tmp;
    while (!que.empty())
    {
        tmp = que.top();
        que.pop();
        int u = tmp.v;
        if (vis[u])
            continue;
        vis[u] = true;
        for (int i = 0; i < E[u].size(); i++)
        {
            int v = E[u][i].v;
            int cost = E[u][i].cost;
            if (!vis[v] && dist[v] > dist[u] + cost)
            {
                dist[v] = dist[u] + cost;
                que.push(qnode(v, dist[v]));
            }
        }
    }
}
void addedge(int u, int v, int w)
{
    E[u].push_back(Edge(v, w));
}
// 像这些模板 。可以直接拿过来用。。然后又是可以刷的经典
// 不是老是愁没东西刷吗。。
// 这些模板 就是刷的最好的东西了。。
// 这些模板 就是刷的最好的东西了。。
// 这些模板 就是刷的最好的东西了。。
// 一步到位。。。至高经典。。
// 但是也不要盲目崇拜。还是有些不是很完善的。。但是非常够用了。。
// 好吃的吃掉。。