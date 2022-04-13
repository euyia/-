
class AllOne
{
public:
    AllOne()
    {
    }

    void inc(string key)
    {
    }

    void dec(string key)
    {
    }

    string getMaxKey()
    {
    }

    string getMinKey()
    {
    }
};

#include <all.h>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
// 那个out 可以直接定义在函数里面写成匿名函数。。也可以练习熟悉匿名函数
class Solution
{
public:
    string crackSafe(int n, int k)
    {
        // 有起有落才是对的节奏。。有汽油罗才有节奏。
        // 最好去刷那个迷宫。。那个体量足够大。。。刷起来应该很舒服 啊哈哈。。
    }
};

/*
    其实稍微有点bug，应该说数据保证每次查询，一定对应唯一的出现次数最少或者最大的字符串。
    不然的话，答案可能是一个字符串集合。
*/

class AllOne
{
private:
    typedef list<pair<unordered_set<string>, int>> li;
    // 这边为什么还要套一个set 。。好诡异啊。。？？？？
    unordered_map<string, li::iterator> mp;
    //   就很好理解了。。他这里每个key 对应的不是一条链表 是指向同一条链表上的某一个节点
    // 然后 set 他存的是数量相同的字符串。。很特别的思路吧。。
    // 然后外面这个time 就是这个set 里面所有的string 都具有的个数。
    // 然后这个set 和time 放在一个结构里面。这个结构 就当做list链表的一个节点。
    // 而为什么需要list 因为 这个list 他是以这个time的数量来排序的。
    // 然后list 外面为什么还要一个mp。。而这个mp又指向什么。。
    // 这个mp他还是用string 其实对应的是自己数量的list节点。。这样就实现了 o1
    // 他其实不单单可以查前后。。还可以能实现每个单词对应的数量。
    li lis;

public:
    AllOne() {}

    void inc(string key)
    {
        if (mp.count(key))
        { // key 在链表中
            auto cur = mp[key], nxt = next(cur);
            // 这个next 应该是多1把
            if (nxt == lis.end() || nxt->second > cur->second + 1) //在链尾，或者链表下一个keys集合中每一个字符串出现的次数比当前结点至少多于2次
                mp[key] = lis.emplace(nxt, unordered_set<string>({key}), cur->second + 1);
            // 这里就是插入了一个节点放放到nxt的位置。。其实是nxt的前面。。这个emplace
            //更新hash表
            else //key在当前结点出现次数和链表下一个keys集合中每一个字符串出现的次数刚好差1，说明key应当移动到链表的下一个结点去，并且更新hash表
                nxt->first.emplace(key), mp[key] = nxt;
            cur->first.erase(key); //将key从原先结点的keys集合移除，完成从前向后的转移
            if (cur->first.empty())
                lis.erase(cur); //如果移除使得keys集合为空，直接从链表中删除此结点，提高效率
        }
        else
        {                                                           // key 不在链表中，第一次出现
            if (lis.empty() || lis.begin()->second > 1)             //链表为空，或者链表第一个keys集合中每一个字符串出现的次数>1
                lis.emplace_front(unordered_set<string>({key}), 1); //在表头新建一个出现次数为1的结点，keys={key}
            else
                lis.begin()->first.emplace(key); //链表第一个keys集合中每一个字符串出现的次数=1，直接将key加入keys
            mp[key] = lis.begin();               //更新hash表
        }
    }

    void dec(string key)
    {
        auto cur = mp[key];
        if (cur->second == 1) // key 仅出现一次，将其移出 mp，更新hash表
            mp.erase(key);
        else
        {
            auto pre = prev(cur);
            if (cur == lis.begin() || pre->second < cur->second - 1)                       //找到表头，或者链表前一个keys集合中每一个字符串出现的次数比当前结点至少少于2次
                mp[key] = lis.emplace(cur, unordered_set<string>({key}), cur->second - 1); //更新hash表
            else                                                                           //链表前一个keys集合中每一个字符串出现的次数刚好比当前结点少1次
                pre->first.emplace(key), mp[key] = pre;                                    //将key加入前一个结点，更新hash表
        }
        cur->first.erase(key); //将key从当前结点移除
        if (cur->first.empty())
            lis.erase(cur); //如果当前结点keys为空，删除当前结点
    }

    string getMaxKey()
    {
        return lis.empty() ? "" : *lis.rbegin()->first.begin(); //访问链尾
        // 这个数据结构能够实现这种 1 能统计数量 2 能随时调取最大和最小。
        // 其实如果调用频率不是特别高。。用普通的哈希表就可以了。然后要调用的时候遍历一遍就行了。
    }

    string getMinKey()
    {
        return lis.empty() ? "" : *lis.begin()->first.begin(); //访问链首
    }
};
// 每日一题刚开始是很排次的。
// 但是后来会慢慢发现。他给的题目都是很棒的。都是很有价值的题目。
// 所以。。现在反而会回头去看以前出的每日一题。
struct node
{
    unordered_set<string> s;
    int cnt;
    // 要构造函数吗。。
};

class AllOne
{
    typedef list<node> li;
    unordered_map<string, li::iterator> mp;
    li lis;
    // 这边为啥要声明个这个。额。。
public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], nxt = next(cur, 1);
            if (nxt == lis.end() || nxt->cnt > cur->cnt + 1)
            {
                mp[key] = lis.emplace(nxt, unordered_set<string>({key}), cur->cnt + 1);
                // 这个emplace 放到第一个参数的节点之前。这个api这里多次用到。
            }
            else
                mp[key] = nxt, nxt->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                lis.erase(cur); //lis竟然可以这样删。
        }
        if (lis.begin()->cnt > 1 || lis.empty())
        {
            lis.emplace_front(unordered_set<string>({key}), 1);
            //  这个emplacefront没有返回迭代器的样子。。因为前面放mp[key]接收不到
            //鼠标点上去就看的到了 返回的是void。。
        }
        lis.begin()->s.insert(key);
        mp[key] = lis.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (cur == lis.begin() || cur->cnt - 1 > pre->cnt)
        {
            mp[key] = lis.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        }
        else
            pre->s.insert(key), mp[key] = pre;
        cur->s.erase(key);
        if (cur->s.empty())
            lis.erase(cur);
    }

    string getMaxKey()
    {
        lis.empty() ? "" : *lis.rbegin()->s.begin();
    }

    string getMinKey()
    {
        lis.empty() ? "" : *lis.begin()->s.begin();
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */
// 这种数据结构。只能+1 减一 。在list上 如果我一次+10个。你就不好处理
// 所以考虑可以在数组上实现。然后对数量进行限制 很方便。
// 然后mp指向的数组的实际内存地址。里面也是放一个结构 结构里面套set 和int。。
// 可以采用数组试下。
// 这个肯定是不错的。不然他不会选。。掌握了。

// 还是比较恶心的。。弄了两个小时没弄出来。 。

struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> li;
    unordered_map<string, li::iterator> mp;
    li lis;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], nxt = next(cur, 1);
            if (nxt == lis.end() || cur->cnt + 1 < nxt->cnt)
                mp[key] = lis.emplace(nxt, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = nxt, nxt->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                lis.erase(cur);

            return;
        }
        if (lis.empty() || lis.begin()->cnt != 1)
            lis.emplace_front(unordered_set<string>({key}), 1);
        else
            lis.begin()->s.insert(key);
        mp[key] = lis.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (cur->cnt == 1)
            mp.erase(key);
        // 后期再统一处理 lis删除 这里先mp删除
        else if (cur == lis.begin() || pre->cnt < cur->cnt - 1)
            mp[key] = lis.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            lis.erase(cur);
    }

    string getMaxKey()
    {
        return lis.empty() ? "" : *lis.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return lis.empty() ? "" : *lis.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> li;
    unordered_map<string, li::iterator> mp;
    li lis;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], nxt = next(cur, 1);
            if (nxt == lis.end() || nxt->cnt > cur->cnt + 1)
                mp[key] = lis.emplace(nxt, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = nxt, nxt->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                lis.erase(cur);
            return;
        }
        if (mp.empty() || lis.begin()->cnt != 1)
            lis.emplace_front(unordered_set<string>({key}), 1);
        else
            lis.begin()->s.insert(key);
        mp[key] = lis.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (cur->cnt == 1)
            mp.erase(key);
        else if (cur == lis.begin() || pre->cnt < cur->cnt - 1)
            mp[key] = lis.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            lis.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *lis.rbegin()->s.begin();
        // 这边就是迭代器的巧用了。。
        // 设计到 一个很细节的点 为什么不用end。。
        // 因为迭代器设计 end是开区间。r系列的迭代器会把他变成闭区间。
        // 所以这边取到的司机上是  --lis.end()
    }

    string getMinKey()
    {
        return mp.empty() ? "" : *lis.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : cnt(cnt), s(s){};
};
class AllOne
{
    typedef list<node> lis;
    unordered_map<string, lis::iterator> mp;
    lis li;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            // 起名字前两个 不要挑单词。。这样增加学习成本。。
            // ne就比nxt来的好。
            if (ne == li.end() || ne->cnt > cur->cnt + 1)
                mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (cur->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt < cur->cnt - 1)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return mp.empty() ? "" : *li.begin()->s.begin();
    }
};
// 这个可以刷的。。体量也有。。保持这个维度的思维体量很好的。。
// 就单单这个嵌套关系。。估计leetcode么有比这个更复杂的结构了
// 算是数据结构复杂度的一个标杆了。一个维度的标杆了。。。
// 昨天那个也算是数据复杂度可以了。。。这些题型刷习惯了。。挺好的。。。
// 提升应该不小 多刷。。
// 这里千山万水  外面平静如水。。又有这种感觉了。
// 这里千山万水  外面平静如水。。又有这种感觉了。
// 这里千山万水  外面平静如水。。又有这种感觉了。
struct node
{
    int cnt;
    unordered_set<string> s;
    node(unordered_set<string> s, int cnt) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    unordered_map<string, lis::iterator> mp;
    lis li;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || ne->cnt > cur->cnt + 1)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (mp.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (cur->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt < cur->cnt - 1)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return mp.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    int cnt;
    unordered_set<string> s;
    node(unordered_set<string> s, int cnt) : cnt(cnt), s(s){};
};
class AllOne
{
    typedef list<node> lis;
    unordered_map<string, lis::iterator> mp;
    lis li;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || ne->cnt > cur->cnt + 1)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (cur->cnt == 1)
            mp.erase(key);
        else if (li.begin() == cur || pre->cnt < cur->cnt - 1)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return mp.empty() ? "" : *li.begin()->s.begin();
    }
};

// 这种大体量的 可以多刷。。。
//
struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : cnt(cnt), s(s){};
};
class AllOne
{
public:
    typedef list<node> lis;

    unordered_map<string, lis::iterator> mp;
    lis li;
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            // 这个emplace 函数参数的顺序。是先节点位置，然后才节点内容。
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            // 这边要判空。。？？？如果啥都没有。。也就没有任何迭代器。会越界。下面是默认有。。就不用
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        // 这个prev函数
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt < cur->cnt - 1)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
// 三四个细节。。不过还是能实现的。
// 主要是大概的数据结构还记得 。。如果这个数据结构忘记。。也是写不出来。
// 树的也可以回头写题解。。因为复习。所以思路会更加有概括性。
// 然后就多写题解。多写题解。。写题解首先是自己爽。然后多想怎么给别人提供帮助
// 至少值得那个点击的票价。。。这才是可持续的。不能让别人看到你的题解就想走 那不行。
// 然后下面是自己爽了。。
struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : s(s), cnt(cnt){};
};
class AllOne
{
public:
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || ne->cnt > cur->cnt + 1)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt < cur->cnt - 1)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};

class AllOne
{
public:
    AllOne()
    {
    }

    void inc(string key)
    {
    }

    void dec(string key)
    {
    }

    string getMaxKey()
    {
    }

    string getMinKey()
    {
    }
};

struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt > 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt < cur->cnt - 1)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
public:
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            //    有这个ide 现在学编程真的好舒服的。。
            // 写代码简直就是一种享受。。
            // 他让排版颜色。啥的。。非常的舒服
            if (ne == li.end() || ne->cnt > cur->cnt + 1)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt > 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur->cnt > pre->cnt + 1 || cur == li.begin())
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : cnt(cnt), s(s){};
};
class AllOne
{
    list<node> li;
    unordered_map<string, list<node>::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
        }
        if (li.empty() || li.begin()->cnt > 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt + 1 < cur->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : cnt(cnt), s(s){};
};
class AllOne
{
public:
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return mp.empty() ? "" : *li.begin()->s.begin();
    }
};
// unordered_map unordered_map unordered_map
// unordered_map unordered_map unordered_map
// unordered_map unordered_map unordered_map
// unordered_map unordered_map  unordered_map
// unordered_map unordered_map unordered_map
// unordered_map unordered_map unordered_map
// 删除和添加操作在这个结构里面是类似的。
// 他就是删除局势在list 上往左移动一个节点而已。
// 添加就是把key那个string 往右移动一个节点而已。
// 整个大框架是一样的动作。
// 但是分别有两种特判别的边界情况。
// 添加。我们要处理一种特别情况就是他原来么有值。。没有相当于就不用删除而已。。也是两种情况。
// 删除的一种特别情况就是 往左移动。移动到1 会mp把key给灭了。。
struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : cnt(cnt), s(s){};
};
class AllOne
{
public:
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt > 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur->cnt - 1 > pre->cnt || cur == li.begin())
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
// 遍数 成长的捷径 也是毕竟之路。。。
// 遍数 成长的捷径 也是毕竟之路。。。
// 遍数 成长的捷径 也是毕竟之路。。。
// 而且远远高于预期的数量。。
// 原来觉得1000差不多了。。
// 但是现在看来 估计要1万。
// 标准是熟练。
struct node
{
    unordered_set<string> s;
    int cnt;
    node(unordered_set<string> s, int cnt) : cnt(cnt), s(s){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
// 冲一冲看看。。谁有能直到结果讷
struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
public:
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
        // 这个其实是特判。。就是当cnt=1的情况。
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt < cur->cnt - 1)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    int cnt;
    unordered_set<string> s;
    node(unordered_set<string> s, int cnt) : cnt(cnt), s(s){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
// 20分钟差不多就是200多行。。
// 也就是1000行要一个半小时。。。
// 100行对应10分钟左右
// 就是要一直刷这种大体量的题目。。对自己的思维能力有帮组。。。
// 就是要刷这种大体量的。。。。。。。
// 就是要刷这种大体量的。。。。。。。
// 就是要刷这种大体量的。。。。。。。
// 就是要刷这种大体量的。。。。。。。
// 就是要刷这种大体量的。。。。。。。
// 就是要刷这种大体量的。。。。。。。
// 就是要刷这种大体量的。。。。。。。会有效果的。当你习惯了这种大体量的。。哼哼。。
// 这是稳定ak之路。
struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || ne->cnt - 1 > cur->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || ne->cnt - 1 > cur->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
public:
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (mp.empty() || li.begin()->cnt > 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
public:
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
// 10分钟就是100行。。
// 所以这几个月我能写的代码量
// 也是大致可以估算出来在一个范围的 。。时间是有限的。请做珍贵的事情。
// 一定要加速 。。加速 加速。加速。加速。。
struct node
{
    unordered_set<string> s;
    int cnt;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    // 核心是这个mp 和这个链表的组合拳。。简直妙。。
    // 享受到了mp的光速查询。
    // 又享受到了排序的效果。
    // 这感觉是经常用到的一种大型数据结构。
    //  哈希指向链表节点。
public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        // 很难想象从这样的家庭出去的孩子。他的心灵不知道已经遍历是什么样子。
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
        // 链表的的最后一节。node里面的set的第一个。。其实里面就一个。
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    unordered_set<string> s;
    int cnt;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.insert(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 != pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
// 为什么用这个结构。。哈希+链表 各取所缺。。互补优点 很好的数据祝贺。
// 然后为什么要这样分类。。
// 其实就是从外层 往里分而已。。
// 最外层特例是0-1 因为他不需要删除所以特判。。cur也是没有所指的。所以要特判。
// 特判之后一般又要做两类分类。。
// 1 他扣去的有节点 扣去的没有节点。没有节点又分做 他是最后一个 ne无效。
// ne有效 但是ne不符合条件。
// 然后删除cur 上的key 又要分类。。就是特判如果已经key无了。。就删掉cur这个list节点。
// 组层的往里分类而已。。
// 主要是特判比较多。所以看起来有点乱。。但是这已经是叫简洁的分类方式了。
// 因为是自顶向下的 条理已经很清晰了。
// 因为是自顶向下的 条理已经很清晰了。
// 因为是自顶向下的 条理已经很清晰了。
// 哈希+链表。为什么 为什么 为什么 多问为什么 多思考 从0-1
// 多理解 就减轻记忆负担。

struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;
    // 哈希表本质上就是数组。可以想象成数组就可以了。。实体。
public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt + 1 < cur->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return mp.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};

struct node
{
    int cnt;
    unordered_set<string> s;
    node(unordered_set<string> s, int cnt) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || ne->cnt - 1 > cur->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || pre->cnt + 1 < cur->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};

struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.insert(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};
class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            // 平常心，让过程成为目的之一，
            // 延迟满足。也就是要有耐心。。过程就是目的之一。。
            // 你看那个大牛 他有钱了之后 还不是回头弄这些科学。。说明说明。
            if (ne == li.end() || cur->cnt + 1 > ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.insert(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};

class AllOne
{
    typedef list<node> lis;
    lis li;
    unordered_map<string, lis::iterator> mp;

public:
    AllOne()
    {
    }

    void inc(string key)
    {
        if (mp.count(key))
        {
            auto cur = mp[key], ne = next(cur, 1);
            if (ne == li.end() || cur->cnt + 1 < ne->cnt)
                mp[key] = li.emplace(ne, unordered_set<string>({key}), cur->cnt + 1);
            else
                mp[key] = ne, ne->s.insert(key);
            cur->s.erase(key);
            if (cur->s.empty())
                li.erase(cur);
            return;
        }
        if (li.empty() || li.begin()->cnt != 1)
            li.emplace_front(unordered_set<string>({key}), 1);
        else
            li.begin()->s.insert(key);
        mp[key] = li.begin();
    }

    void dec(string key)
    {
        auto cur = mp[key], pre = prev(cur, 1);
        if (mp[key]->cnt == 1)
            mp.erase(key);
        else if (cur == li.begin() || cur->cnt - 1 > pre->cnt)
            mp[key] = li.emplace(cur, unordered_set<string>({key}), cur->cnt - 1);
        else
            mp[key] = pre, pre->s.insert(key);
        cur->s.erase(key);
        if (cur->s.empty())
            li.erase(cur);
    }

    string getMaxKey()
    {
        return li.empty() ? "" : *li.rbegin()->s.begin();
    }

    string getMinKey()
    {
        return li.empty() ? "" : *li.begin()->s.begin();
    }
};
struct node
{
    int cnt;
    unordered_set<string> s;
    node(int cnt, unordered_set<string> s) : s(s), cnt(cnt){};
};

class AllOne
{
public:
    AllOne()
    {
    }

    void inc(string key)
    {
    }

    void dec(string key)
    {
    }

    string getMaxKey()
    {
    }

    string getMinKey()
    {
    }
};
