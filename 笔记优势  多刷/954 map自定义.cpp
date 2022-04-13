#include <all.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
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
// 即使不会。。抄下来也是非常值得。
// 来学 学学 做题的 心态要放好。不然会很不舒服的。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 一步一步的攀登上去。
// struct cmp
// {
//     bool operator()(pair<int, int> const &a, pair<int, int> const &b) const
//     {
//         return (a.first < 0 && b.first < 0) ? a.first > b.first : a.first < b.first;
//     }
// };
// 这边是对key排序 所以只需要传进来int作为参数就可以了。不用传pair
struct cmp
{
    bool operator()(int const &x, int const &y) const
    {
        return (x < 0 && y < 0) ? x > y : x < y;
        // return abs(x)<abs(y);这样按理应该也是可以的
        // 因为只要相对小的在前面就行了。
        // 但是不知道为啥 -1 2 这个例子过不去？？？？？？？
    };
};
class Solution
{
public:
    bool canReorderDoubled(vector<int> &a)
    {
        map<int, int> mp;
        for (int a : a)
            mp[a]++;
        // if(mp[0]%2)
        // return false;
        // 因为改变了判合法的方式，所以这边不需要判0了。因为我们是直接扣掉。不影响。
        for (auto [x, y] : mp)
        {
            if (y == 0)
                continue;
            //这边要去除0 的 不然mp[x*2] 会触发默认的构建，一直往后建map新元素，就循环没完没了了
            if (y <= mp[x * 2])
                mp[x * 2] -= y;
            else
                return false;
        }
        return true;
    }
};
// 这题折腾了三个小时左右。。
// 也不能说不值得吧。
// 一直有在思考。。
// 但是现在欠缺刷 要补下。

struct cmp
{
    bool operator()(int const &x, int const &y) const
    {
        return abs(x) < abs(y);
    };
};
class Solution
{
public:
    bool canReorderDoubled(vector<int> &a)
    {
        map<int, int, cmp> mp;
        for (int a : a)
            mp[a]++;
        // if(mp[0]%2)
        // return false;
        for (auto [x, y] : mp)
        {
            if (y == 0)
                continue;
            if (mp.count(x * 2))
            {
                mp[x * 2] -= y;
                if (mp[x * 2] < 0)
                    return false;
            }
            else
                return false;
        }
        return true;
    }
};

// 非常的离奇事件。。
// -1，2 这个例子。。跑起来不知道为什么。。会那样子。。