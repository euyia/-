#include <all.h>
// https://leetcode-cn.com/problems/longest-substring-of-one-repeating-character/submissions/
using namespace std;
const int N = 100010;
string str;
struct Node
{
    int l, r, lmost, rmost, mmost;
    char cl, cr, cm;
} tr[N * 4];

void pushup(Node &p, Node &l, Node &r)
{
    p.lmost = l.lmost, p.cl = l.cl;
    if (l.lmost == l.r - l.l + 1 && l.cl == r.cl)
        p.lmost = l.lmost + r.lmost;
    p.rmost = r.rmost, p.cr = r.cr;
    if (r.rmost == r.r - r.l + 1 && r.cr == l.cr)
        p.rmost = r.rmost + l.rmost;
    p.mmost = l.mmost, p.cm = l.cm;
    if (r.mmost > l.mmost)
        p.mmost = r.mmost, p.cm = r.cm;
    if (l.cr == r.cl && r.lmost + l.rmost > p.mmost)
        p.mmost = r.lmost + l.rmost, p.cm = l.cr;
}

void pushup(int u)
{
    pushup(tr[u], tr[u << 1], tr[u << 1 | 1]);
}

void build(int u, int l, int r)
{
    if (l == r)
    {
        tr[u] = {l, r, 1, 1, 1, str[l], str[r], str[l]};
        return;
    }
    tr[u].l = l, tr[u].r = r;
    int mid = l + r >> 1;
    build(u << 1, l, mid), build(u << 1 | 1, mid + 1, r);
    pushup(u);
}

void modify(int u, int x, char v)
{
    if (tr[u].l == x && tr[u].r == x)
        tr[u] = {x, x, 1, 1, 1, v, v, v};
    else
    {
        int mid = tr[u].l + tr[u].r >> 1;
        if (x <= mid)
            modify(u << 1, x, v);
        else
            modify(u << 1 | 1, x, v);
        pushup(u);
    }
}

Node query(int u, int l, int r)
{
    if (tr[u].l >= l && tr[u].r <= r)
        return tr[u];
    int mid = tr[u].l + tr[u].r >> 1;
    if (r <= mid)
        return query(u << 1, l, r);
    else if (l >= mid)
        return query(u << 1 | 1, l, r);
    else
    {
        Node res;
        auto left = query(u << 1, l, r), right = query(u << 1 | 1, l, r);
        pushup(res, left, right);
        return res;
    }
}
class Solution
{
public:
    vector<int> longestRepeating(string s, string sq, vector<int> &q)
    {
        memset(tr, 0, sizeof tr);
        str = ' ' + s;
        int n = s.size();
        build(1, 1, n);
        vector<int> res(q.size(), 0);
        for (int i = 0; i < q.size(); ++i)
        {
            int idx = q[i];
            char ch = sq[i];
            modify(1, idx + 1, ch);
            Node p = query(1, 1, n);
            res[i] = max(p.lmost, max(p.mmost, p.rmost));
        }
        return res;
    }
};
// 线段树。。。一个小课题吧。。只要和树有关的 都是xiaoks。。
// 回头弄你。先刷去了。。今天早上都还没有刷。
// leetcode 出acm压轴题给你你做的出来吗。出题还不简单。
// 新知识点而已。。有什么了不起的。。还第一次在leetcode写线段树。。。哼。
// 我看你们能嘚瑟的知识点有多少。。我一个个给他吃下来。。
// 让你在我面前帮门农夫。