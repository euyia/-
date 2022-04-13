#include <all.h>
using namespace std;
class MonotonicQueue
{
private:
    deque<int> q;

public:
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }

    int max() { return q.front(); }

    void pop(int n)
    {
        if (!q.empty() && q.front() == n)
            q.pop_front();
    }
};

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    MonotonicQueue window;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i < k - 1)
        { //先填满窗口的前 k - 1
            window.push(nums[i]);
        }
        else
        { // 窗口向前滑动
            window.push(nums[i]);
            res.push_back(window.max());
            window.pop(nums[i - k + 1]);
        }
    }
    return res;
}

class Solution
{
private:
    deque<int> d;
    int j = -1;
    // 这个j记录的是窗口的左手第一个元素。移动之后的。
    void push(int i, vector<int> &nums)
    {
        // 这个i记录的是刚要进来的。
        while (!d.empty() && nums[i] > nums[d.back()])
            d.pop_back();
        d.push_back(i);
    }
    int pop(vector<int> &nums)
    {
        if (j - 1 != d.front())
            return nums[d.front()];
        else
        {
            d.pop_front();
            return nums[d.front()];
        }
    }

public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> res;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {

            if (i < k - 1)
                push(i, nums);
            else
            {
                ++j;
                push(i, nums);
                res.push_back(pop(nums));
            }
        }
        return res;
    }
};
// 找好度量的角度和区域。。
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() != n)
            q.pop_front();
    }
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() != n)
            q.pop_front();
    }
    vector<int> soso(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() == n)
            q.pop_back();
    }
    vector<int> soso(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() == n)
            q.pop_back();
    }
    vector<int> soso(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() == n)
            q.pop_back();
    }
    vector<int> soso(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() == n)
            q.pop_back();
    }
    vector<int> soso(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() == n)
            q.pop_back();
    }
    vector<int> soso(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() == n)
            q.pop_back();
    }
    vector<int> soso(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};
class Solution
{
public:
    deque<int> q;
    void push(int n)
    {
        while (!q.empty() && q.back() < n)
            q.pop_back();
        q.push_back(n);
    }
    int max()
    {
        return q.front();
    }
    void pop(int n)
    {
        if (!q.empty() && q.front() == n)
            q.pop_back();
    }
    vector<int> soso(vector<int> &nums, int k)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < k - 1)
                push(nums[i]);
            else
            {
                push(nums[i]);
                res.push_back(max());
                pop(nums[i - k + 1]);
            }
        }
        return res;
    }
};

deque<int> q;
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}
void push(int n)
{
    while (!q.empty() && q.back() < n)
        q.pop_back();
    q.push_back(n);
}