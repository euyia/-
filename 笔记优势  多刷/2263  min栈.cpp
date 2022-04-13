#include <all.h>
using namespace std;
// 每个有效元素中间都穿插放一个min
// 。。。有点仙啊。。这是。。
// 这个和改树结构 为了答案一样的。。
// 会污染数据结构。。
// 之前比较笨的是用multiset做的。
class MinStack
{
public:
    /** initialize your data structure here. */
    int min_ = 2147483647;
    stack<int> st;
    MinStack()
    {
    }

    void push(int x)
    {
        st.push(min_);
        if (x < min_)
            min_ = x;
        st.push(x);
    }

    void pop()
    {
        st.pop();
        min_ = st.top();
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int min()
    {
        return min_;
    }
};

class MinStack
{
public:
    /** initialize your data structure here. */
    stack<int> a;
    stack<int> b;
    MinStack()
    {
    }

    void push(int x)
    {
        a.push(x);
        if (b.empty())
            b.push(x);
        else if (x <= b.top())
            b.push(x);
    }

    void pop()
    {
        int res = a.top();
        a.pop();
        if (res == b.top())
            b.pop();
    }

    int top()
    {
        return a.top();
    }

    int min()
    {
        return b.top();
    }
};
// 都是动态保留了当前栈高的最小。。手法不一样而已。