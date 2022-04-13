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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct Node
{
    char val;
    Node *left;
    Node *right;
    Node() : val(' '), left(nullptr), right(nullptr) {}
    Node(char x) : val(x), left(nullptr), right(nullptr) {}
    Node(char x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
class NestedInteger
{
public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};
// 比较牛逼的是是先了。。这样的一种迭代处理的结果。。
// 另外就是这个数据结构  他能给你int 也能给你list 。。。很神奇
// 还有个用递归深度搜索 做这题以后有条件了再回头看吧。。现在能吃饱就行。。就不吃好了。
class NestedIterator
{
public:
    NestedIterator(vector<NestedInteger> &nestedList)
    {
        for (int i = nestedList.size() - 1; i >= 0; --i)
        {
            st.push(nestedList[i]);
        }
    }

    int next()
    {
        NestedInteger cur = st.top();
        st.pop();
        return cur.getInteger();
    }

    bool hasNext()
    {
        while (!st.empty())
        {
            NestedInteger cur = st.top();
            if (cur.isInteger())
            {
                return true;
            }
            st.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
            {
                st.push(cur.getList()[i]);
            }
        }
        return false;
    }

private:
    stack<NestedInteger> st;
};

class NestedIterator
{
public:
    stack<NestedInteger> s;
    NestedIterator(vector<NestedInteger> &nestedList)
    {
        for (int i = nestedList.size() - 1; i >= 0; i--)
            s.push(nestedList[i]);
    }

    int next()
    {
        NestedInteger cur = s.top();
        s.pop();
        return cur.getInteger();
    }

    bool hasNext()
    {
        while (!s.empty())
        {
            NestedInteger cur = s.top();
            if (cur.isInteger())
                return true;
            else
            {
                s.pop();
                for (int i = cur.getList().size() - 1; i >= 0; i--)
                    s.push(cur.getList()[i]);
            }
        }
        return false;
    }
};
stack<NestedInteger> s;
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            for (int i = cur.getList().size() - 1; i >= 0; i--)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            for (int i = cur.getList().size(); --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
// 比较牛逼的是是先了。。这样的一种迭代处理的结果。。
// 另外就是这个数据结构  他能给你int 也能给你list 。。。很神奇
// 还有个用递归深度搜索 做这题以后有条件了再回头看吧。。现在能吃饱就行。。就不吃好了。
// 要充分的拉伸基础。。困难题是自然而然的。。
// 就像唱高音，基础打开 ，高音自然很轻松的。。而不是可以追求高音。。。
// 这个观念很重要。。你想要跳的高。不是意识努力。而是基础 下盘 用力。。
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
}
int next()
{
    NestedInteger cur = s.top();
    s.pop();
    return cur.getInteger();
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
// 没啥牛人。你也可以！！！
// 人和人基本没区别的。就是刷的多少而已。高度公路就可以看出来了。
// 那些看起来很牛的。你也可以的。。
// 为什么你现在觉得很遥远。因为人家是从小就开始跑。。你是睡了20年。
// 你要刷到这题好像就是你想出来的一样。。。这就站上去了。。巨人的肩膀。。
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return true;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool has_next()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
        }
    }
}
bool hasnext()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return true;
}
bool hasnext()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool hasnext()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
bool hasnext()
{
    NestedInteger cur = s.top();
    while (!s.empty())
    {
        if (cur.isInteger())
            return true;
        else
        {
            s.pop();
            for (int i = cur.getList().size() - 1; i >= 0; --i)
                s.push(cur.getList()[i]);
        }
    }
    return false;
}
// 倒叙写。。