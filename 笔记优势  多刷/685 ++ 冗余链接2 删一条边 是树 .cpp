#include <all.h>
using namespace std;
class Solution
{
public:
    vector<int> findRedundantConnection(vector<vector<int>> &nums)
    {
        // 爱算法。。一辈子算法
        vector<int> mp(nums.size(), -1);
        for (int i = 0; i < nums.size(); ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            if (mp[l] != -1 && mp[r] != -1 && mp[l] == mp[r])
                return nums[i];
            if (mp[l] == -1 && mp[r] == -1)
            {
                mp[l] = l;
                mp[r] = l;
            }
            else if (mp[l] != -1)
                mp[r] = mp[l];
            else
            {
                mp[l] = mp[r];
            }
        }
    }
};

class Solution
{
public:
    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        vector<int> rp(1001);
        int sz = edges.size();
        // 初始化各元素为单独的集合，代表节点就是其本身
        for (int i = 0; i < sz; i++)
            rp[i] = i;
        for (int j = 0; j < sz; j++)
        {
            // 找到边上两个节点所在集合的代表节点
            int set1 = find(edges[j][0], rp);
            int set2 = find(edges[j][1], rp);
            if (set1 == set2) // 两个集合代表节点相同，说明出现环，返回答案
                return edges[j];
            else // 两个集合独立，合并集合。将前一个集合代表节点戳到后一个集合代表节点上
                rp[set1] = set2;
        }
        return {0, 0};
    }

    // 查找路径并返回代表节点，实际上就是给定当前节点，返回该节点所在集合的代表节点
    // 之前这里写的压缩路径，引起歧义，因为结果没更新到vector里，所以这里改成路径查找比较合适
    // 感谢各位老哥的提议
    int find(int n, vector<int> &rp)
    {
        int num = n;
        while (rp[num] != num)
            num = rp[num];
        return num;
    }
};
class Solution
{
public:
    int Find(vector<int> &parent, int index)
    {
        if (parent[index] != index)
        {
            parent[index] = Find(parent, parent[index]);
        }
        return parent[index];
    }

    void Union(vector<int> &parent, int index1, int index2)
    {
        parent[Find(parent, index1)] = Find(parent, index2);
    }

    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        int n = edges.size();
        vector<int> parent(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            parent[i] = i;
        }
        for (auto &edge : edges)
        {
            int node1 = edge[0], node2 = edge[1];
            if (Find(parent, node1) != Find(parent, node2))
            {
                Union(parent, node1, node2);
            }
            else
            {
                return edge;
            }
        }
        return vector<int>{};
    }
};
class Solution
{
public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>> &nums)
    {
        // 狗分狗分 能狗分就过 哈哈哈
        unordered_map<int, unordered_set<int>> mp;
        int n = nums.size() + 1;
        for (int i = 0; i < n - 1; ++i)
        {
            int l = nums[i][0], r = nums[i][1];
            int left = -1, right = -1;
            for (auto m : mp)
            {
                if (m.second.size())
                {
                    if (m.second.count(l))
                        left = m.first;
                    if (m.second.count(r))
                        right = m.first;
                }
                if (left != -1 && right != -1)
                    break;
            }
            if (left != -1 && right != -1 && left == right)
                return nums[i];
            else if (left != -1 && right != -1 && left != right)
            {
                for (auto m : mp[right])
                    mp[left].insert(m);
                mp.erase(right);
            }
            else if (left == -1 && right == -1)
            {
                mp[l].insert(l);
                mp[l].insert(r);
            }
            else if (left == -1)
            {
                mp[right].insert(l);
            }
            else if (right == -1)
                mp[left].insert(r);
        }
    }

    // 加入一个点。。我们就给他改成其中一个值来记住就好了。。
    // 遍历一遍然后把职为1的改成2 。。这样就好了 。
    // yong mp 里面放vector 然后有在就标记为1.
    // 遍历每个mp的key 如果里面的vector有 那我们就返回mp的key
    // 这样的好处是我们不需要去考虑顺序 全塞入一个mp就可以了。
    // 然后查的话 也很简单。就是里面放1001个下标。如果他属于这个树
    // 我们就给他合并到一棵树。。然后把之前key给删掉。。
    // 这样最大的好处就是判断简单。。只要判断是不是同一个key的mp就行了
    // 这样最大的好处就是判断简单。。只要判断是不是同一个key的mp就行了
    // 这样最大的好处就是判断简单。。只要判断是不是同一个key的mp就行了
    // 来试下
};
// 算半自创的算法
// 主要是这个结构。。mp
// 根据就是。如果没有环 就是ok的。。有环了就不行。。这个角度出发的。
//
// [[2,1],[3,1],[4,2],[1,4]]
// 这个例子过不去。。应该是哪里题意又理解错了吧。。b栈有那个girl的视频。。回头可以看。。先过了。
// 这种题型。。

class Solution
{
private:
    vector<int> parent;
    vector<int> rank;

    int find(int i) { return parent[i] == i ? i : parent[i] = find(parent[i]); }

    bool join(int i, int j)
    {
        int f = find(i);
        int g = find(j);
        if (f == g)
            return false;
        if (rank[f] > rank[g])
            parent[g] = f;
        else
        {
            if (rank[f] == rank[g])
                rank[g]++;
            parent[f] = g;
        }
        return true;
    }

public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>> &edges)
    {
        int n = edges.size();
        vector<int> indegrees(n, -1);
        vector<int> ind_of_2;
        rank.resize(n, 1);
        parent.resize(n);
        for (int i = 0; i < n; i++)
            parent[i] = i;

        for (int i = 0; i < n; i++)
        {
            if (indegrees[edges[i][1] - 1] > -1)
                ind_of_2.push_back(i);
            else
                indegrees[edges[i][1] - 1] = i;
        }

        // in case of circle (empty ind_of_2) remove edge which makes the circle
        // in case of redundent father (!empty ind_of_2) check whether latter edge can be removed

        for (int i = 0; i < n; i++)
        {
            if (!ind_of_2.empty() && i == ind_of_2.back())
                continue;
            if (!join(edges[i][0] - 1, edges[i][1] - 1))
            {
                return ind_of_2.empty() ? edges[i] : edges[indegrees[edges[ind_of_2.back()][1] - 1]];
            }
        }

        return edges[ind_of_2.back()];
    }
};
// 提交区比较简洁的了。。
// 这题不单单是并查集的逻辑理解  +还有我对这题题意理解好像也是有偏差。
// [[2,1],[3,1],[4,2],[1,4]]
// 要刷的。。并查集 在某些场合还是非常好用。这题算是并查集的代表了。