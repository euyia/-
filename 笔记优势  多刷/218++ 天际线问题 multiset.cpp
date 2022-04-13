#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
class Solution
{
public:
    vector<vector<int>> getSkyline(vector<vector<int>> &buildings)
    {
        vector<pair<int, int>> nums;
        for (auto &b : buildings)
        {
            // 正负用于判别是左边界还是右边界，同时保证排序后：
            // 左边界相同时，最高的楼排在前面，insert的一定是相同左边界中最大的高度
            // 右边界相同时，最低的楼排在前面，erase的时候不会改变最大高度
            nums.push_back({b[0], -b[2]}); // 左边界
            nums.push_back({b[1], b[2]});  // 右边界
        }
        sort(nums.begin(), nums.end());
        // 维护当前最大高度
        multiset<int> heap;
        heap.insert(0);
        vector<vector<int>> res;
        // pre 表示遇到一个边界之前的最大高度
        // cur 表示遇到一个边界之后的当前最大高度
        int pre = 0, cur = 0;
        for (auto &h : nums)
        {
            if (h.second < 0)
            { // 左边界
                heap.insert(-h.second);
            }
            else
            { // 右边界
                heap.erase(heap.find(h.second));
            }

            cur = *heap.rbegin();
            // 最大高度发生改变，一定是一个 key point，即一个水平线段的左端点
            if (cur != pre)
            {
                res.push_back({h.first, cur});
                pre = cur;
            }
        }
        return res;
    }
};

class Solution
{
public:
    vector<vector<int>> getSkyline(vector<vector<int>> &a)
    {
        vector<pair<int, int>> nums;
        for (auto k : a)
        {
            nums.push_back({k[0], -k[2]});
            nums.push_back({k[1], k[2]});
        }
        sort(nums.begin(), nums.end());
        multiset<int> s;
        s.insert(0);
        int pre = 0, cur = 0;
        vector<vector<int>> res;
        for (auto n : nums)
        {
            if (n.second < 0)
                s.insert(-n.second);
            else
                s.erase(s.find(n.second));
            cur = *s.rbegin();
            if (cur != pre)
            {
                pre = cur;
                res.push_back({n.first, cur});
            }
        }
        return res;
    }
};
vector<vector<int>> soso(vector<vector<int>> &a)
{
    vector<pair<int, int>> nums;
    for (vector<int> k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
        {
            s.erase(s.find(n.second));
        }

        int cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> res, a;
void dfs()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    int pre = 0, cur = 0;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            res.push_back({n.first, cur});
            pre = cur;
        }
    }
}
void dfs()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            res.push_back({n.first, cur});
            pre = cur;
        }
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    int pre = 0, cur = 0;
    multiset<int> s;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    int pre = 0, cur = 0;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    int pre = 0, cur = 0;
    multiset<int> s;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    int pre = 0, cur = 0;
    multiset<int> s;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[0], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    int pre = 0, cur = 0;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur = pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    multiset<int> s;
    sort(nums.begin(), nums.end());
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    multiset<int> s;
    s.insert(0);
    sort(nums.begin(), nums.end());
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto k : a)
    {
        nums.push_back({k[0], -k[2]});
        nums.push_back({k[1], k[2]});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
class Solution
{
public:
    vector<vector<int>> getSkyline(vector<vector<int>> &nums)
    {
        vector<pair<int, int>> res;
        for (auto n : nums)
        {
            int l = n[0], r = n[1], len = n[2];
            res.push_back({l, -len});
            res.push_back({r, len});
        }
        sort(res.begin(), res.end());
        multiset<int> s;
        s.insert(0);
        int pre = -1, cur = -1;
        vector<vector<int>> ans;
        for (auto r : res)
        {
            if (r.second < 0)
                s.insert(-r.second);
            else
                s.erase(s.find(r.second));
            //这里是删一个 所以要find 给的是迭代器 而不是一个值。
            //s.erase(r.second)这样是把值一样都删了。这不是我们想要的效果
            cur = *s.rbegin();
            if (cur != pre)
                ans.push_back({r.first, cur}), pre = cur;
        }
        return ans;
    }
};
// 回头再做0-1 碰到的问题是pre 和cur 的设置。
// 他multiset 一直动态的维护一段有效的区间。然后我们又能够从中巧妙的取到我们要的数据。
// 这中数据结构真的妙不可言。
// 这中数据结构真的妙不可言。
// 这中数据结构真的妙不可言。
// 这种有趣的结构。。就应该早点接触。。
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    multiset<int> s;
    s.insert(0);
    sort(nums.begin(), nums.end());
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    multiset<int> s;
    s.insert(0);
    sort(nums.begin(), nums.end());
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    sort(nums.begin(), nums.end());
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    sort(nums.begin(), nums.end());
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    sort(nums.begin(), nums.end());
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
// 这边排序能完成弥补一个很重要的细节
// 如果左边不同。但是坐标起点一样。我们需要他的最高的一个。。这边-的刚好可以实现。。
// 右边如果同时结束。。那么会先读到低的。。这也是我们需要的情况。
// 因为如果先读到高的。。高的被删了 肯定要画线出来。。但是实际上我们这里是不需要划线的。
// 要刷就耍这种有高度的。。人是爬不上去的高度。。
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    sort(nums.begin(), nums.end());
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
// 足够的遍数  足够熟练 才足以致胜。。
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    int pre = -1, cur = -1;
    multiset<int> s;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    int pre = -1, cur = -1;
    multiset<int> s;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    int pre = -1, cur = -1;
    multiset<int> s;
    s.insert(0);
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
//   这种绝美的设计。真的是。。给我来一打。。。
// 多刷这种丰富内容的题 也就是所谓困难提，我绝对有条件刷。非常适合我 肯有条件啃。。。
// 通过放进去 和时间到 取出来。。
// 非常牛逼的维护了一个有效的动态的时间区间。。
// 维护了一个动态的有效区间。。
// 动态的维护了一个有效区间。
// 动态的维护了一个有效区间
// 动态的维护了一个有效区间。牛逼。。牛逼。。
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    // 数组里面竟然可以放pair。。。
    // struct 就是直接存的实体！！！！！！！！！
    // struct 就是直接存的实体！！！！！！！！！
    // struct 就是直接存的实体！！！！！！！！！
    // nums[0].first 是这样访问的。
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
// 数组里面存的是struct 实体。。
// 这算法牛逼的在于数据的处理+运用。他动态的维护了一个区间。。
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], c = a[2];
        nums.push_back({l, -c});
        nums.push_back({r, c});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
// 我这种笔记方式。。。时间越久 优势越明显。。
// 因为我能复习功夫非常久以前的知识。。
//
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
// 不用逗号压行。。因为减低可阅读性。。
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    // 不过有时候压行 不用写括号。。看起来代码更简洁。。
    // 但是确实影响阅读。。
    // 真的是。
    // 因为会造成误会。。一般看过去一样 以为就是一个句子
    // 但是你再看 原来是两个。。就很违背直觉。。
    multiset<int> s;
    s.insert(0);
    int pre = -1, cur = -1;
    sort(nums.begin(), nums.end());
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> soso()
{
    vector<pair<int, int>> nums;
    // 再次重复一次 数组的的值可以放任何东西。。
    // 再次重复一次 数组的的值可以放任何东西。。
    // 再次重复一次 数组的的值可以放任何东西。。
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums.push_back({l, -len});
        nums.push_back({r, len});
    }
    sort(nums.begin(), nums.end());
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        if (n.second < 0)
            s.insert(-n.second);
        else
            s.erase(s.find(n.second));
        cur = *s.rbegin();
        if (cur != pre)
        {
            pre = cur;
            res.push_back({n.first, cur});
        }
    }
    return res;
}
vector<vector<int>> getSkyline(vector<vector<int>> &a)
{
    vector<vector<int>> res;
    map<int, set<int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums[l].insert(-len);
        nums[r].insert(len);
    }
    multiset<int> s;
    s.insert(0);
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        for (auto v : n.second)
            if (v < 0)
                s.insert(-v);
            else
                s.erase(s.find(v));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    map<int, set<int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums[l].insert(-len);
        nums[r].insert(len);
    }
    multiset<int> s{0};
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        for (int v : n.second)
            if (v < 0)
                s.insert(-v);
            else
                s.erase(s.find(v));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    map<int, set<int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums[l].insert(-len);
        nums[r].insert(len);
    }
    multiset<int> s{0};
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        for (int v : n.second)
            if (v < 0)
                s.insert(-v);
            else
                s.erase(s.find(v));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    map<int, set<int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums[l].insert(-len);
        nums[r].insert(len);
    }
    multiset<int> s{0};
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        for (int v : n.second)
            if (v < 0)
                s.insert(-v);
            else
                s.erase(s.find(v));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    map<int, set<int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums[l].insert(-len);
        nums[r].insert(len);
    }
    multiset<int> s{0};
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        for (int v : n.second)
            if (v < 0)
                s.insert(-v);
            else
                s.erase(s.find(v));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    map<int, set<int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums[l].insert(-len);
        nums[r].insert(len);
    }
    multiset<int> s{0};
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        for (int v : n.second)
            if (v < 0)
                s.insert(-v);
            else
                s.erase(s.find(v));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    map<int, set<int>> nums;
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums[l].insert(-len);
        nums[r].insert(len);
    }
    multiset<int> s{0};
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        for (int v : n.second)
            if (v < 0)
                s.insert(-v);
            else
                s.erase(s.find(v));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
vector<vector<int>> soso()
{
    map<int, set<int>> nums;
    // 实验这个数据结构是可以实现的。
    for (auto a : a)
    {
        int l = a[0], r = a[1], len = a[2];
        nums[l].insert(-len);
        nums[r].insert(len);
    }
    multiset<int> s{0};
    // 这个是简写。
    int pre = 0, cur = 0;
    for (auto n : nums)
    {
        for (int v : n.second)
            if (v < 0)
                s.insert(-v);
            else
                s.erase(s.find(v));
        cur = *s.rbegin();
        if (cur != pre)
            pre = cur, res.push_back({n.first, cur});
    }
    return res;
}
// 但是这样反而没有原来的快。
// 因为这个map每次插入 都是排序。
// map 每次插入都要排序一次的
// map 每次插入都要排序一次的
// map 每次插入都要排序一次的
// 慎用。。。。。。。。。。。。。。。。平衡二叉树。。他是。
// 速度慢很多。。。。。
// 写的再简洁 速度慢 都是原罪。。。。。。。。。。。。
// 其实都是logn基本的。。插入时间。
// 而pair那个 只有最后一次sort 才排序一次吧。