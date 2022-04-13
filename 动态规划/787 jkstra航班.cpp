#include <all.h>
using namespace std;

struct Edge
{
    int id;
    int trans;
    int efforts;
    Edge(int _id, int _trans, int _efforts) : id(_id), trans(_trans), efforts(_efforts) {}
    bool operator<(const Edge &edge) const
    {
        // 这个是自己定义了排序的<号的意义。
        // 这边自己定义 。。那么优先队列那边就可以不用改排序规则。
        return efforts > edge.efforts;
    }
};

class Solution
{
public:
    //有向图求最短路
    int findCheapestPrice(int n, vector<vector<int>> &nums, int src, int dst, int k)
    {
        vector<vector<pair<int, int>>> graph(n);
        for (int i = 0; i < nums.size(); i++)
        {
            int cur = nums[i][0];
            int next = nums[i][1];
            int dis = nums[i][2];
            graph[cur].push_back({next, dis});
            // 和我设计的图 一模一样。。很自然就会想到这样
        }
        vector<int> dis(n, INT_MAX);
        vector<int> transtimes(n, INT_MAX);
        priority_queue<Edge> pq;
        pq.push({src, 0, 0});
        dis[src] = 0;
        transtimes[src] = 0;
        while (!pq.empty())
        {
            Edge edge = pq.top();
            pq.pop();
            if (edge.trans > k)
                continue;
            if (edge.id == dst)
                return edge.efforts;
            for (auto &flight : graph[edge.id])
            {
                int nextid = flight.first;
                int nextefforts = edge.efforts + flight.second;
                int nexttrans = edge.trans;
                if (nextid != dst)
                    nexttrans += 1;
                if (dis[nextid] > nextefforts)
                {
                    dis[nextid] = nextefforts;
                    transtimes[nextid] = nexttrans;
                }
                if (dis[nextid] < nextefforts && nexttrans > transtimes[nextid])
                    continue;
                pq.push({nextid, nexttrans, nextefforts});
            }
        }
        return -1;
    }
};
// 基本上知道思路。。但是因为用的结构有点多。。比较绕。。
// 就是层序遍历。用dis 去维护一个优先队列。。
// 这个优先队列 会把最小的dis 放在上面。最小开销费用的节点放在上面。而且这个开销是累计的。也就是总开销
struct E
{
    int a;
    int b;
    int c;
    E(int aa, int bb, int cc) : a(aa), b(bb), c(cc){};
    bool operator<(const E &e) const
    {
        return c > e.c;
    }
};
class Solution
{

public:
    int dis[101]{INT_MAX};
    int time[101]{INT_MAX};

    int findCheapestPrice(int n, vector<vector<int>> &nums, int a, int b, int k)
    {
        int n = nums.size();
        vector<vector<pair<int, int>>> mp(n);
        for (int i = 0; i < n; ++i)
        {
            int l = nums[i][0], mid = nums[i][1], r = nums[i][2];
            mp[l].push_back({mid, r});
        }
        // vector<int> dis(n, INT_MAX);
        // vector<int> time(n, INT_MAX);
        // 可以去把那个记忆选择给配置下。
        priority_queue<E> q;
        q.push({a, 0, 0});
        dis[a] = 0;
        time[a] = 0;
        while (!q.empty())
        {
            E e = q.top();
            q.pop();
            if (e.b > k)
                continue;
            // 这个有点怪。。他钱数是少的。。但是次数却超了。。
            if (e.a == b)
                return e.c;
            // a就是目标航班。已经等于主函数的目标了。。那么c就是我们要的答案。。
            for (auto &tmp : mp[e.a])
            {
                // 这个是取遍历一个节点的所有领接点
                // 这里有一个问题。。如果之前的一个节点 他前面长 后面短。。这样选的到吗？？
                int nexta = tmp.first;
                int nextc = tmp.second + e.c;
                int nextb = e.b;
                // 这样不是一直不会变吗
                if (nexta != b)
                    nextb += 1;
                // 这个很微妙啊。。其实不用这样。。直接原始的k+2就可以了。。
                // 这边多此一举
                if (dis[nexta] > nextc)
                {
                    dis[nexta] = nextc;
                    time[nexta] = nextb;
                    // 这边time记录的是一个节点走了k次？》？
                }
                if (dis[nexta] < nextc && nextb > time[nexta])
                    continue;
                // 这个应该是减枝；
                q.push({nexta, nextb, nextc});
            }
        }
    }
};
// dijkstra 本来就属于。。额。。
// 多刷把。
// 应该要慢慢消化了。