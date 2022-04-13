#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
class Solution
{
public:
    bool judgePoint24(vector<int> &nums)
    {
        vector<double> res;
        for (int num : nums)
        {
            res.push_back((double)num);
        }
        return dfs(res);
    }

    bool dfs(vector<double> res)
    {
        int n = res.size();
        if (n == 1)
        {
            return abs(res[0] - 24) < 0.001;
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                vector<double> cur;
                for (int k = 0; k < n; k++)
                {
                    if (k == i || k == j)
                        continue;
                    cur.push_back(res[k]);
                }
                // 标识变量isflag初始为 false，默认会执行||后面的递归。
                // 一旦某个递归返回真，isflag就变为真，由于||的短路特性，后面的递归不会执行
                // 直接在递归前面写ifflag return
                bool flag = false;
                // 加法
                cur.push_back(res[i] + res[j]);
                flag = flag || dfs(cur);
                cur.pop_back();
                // 减法
                cur.push_back(res[i] - res[j]);
                flag = flag || dfs(cur);
                cur.pop_back();
                cur.push_back(res[j] - res[i]);
                flag = flag || dfs(cur);
                cur.pop_back();
                // 乘法
                cur.push_back(res[i] * res[j]);
                flag = flag || dfs(cur);
                cur.pop_back();
                // 除法
                if (res[j] != 0)
                {
                    cur.push_back(res[i] / res[j]);
                    flag = flag || dfs(cur);
                    cur.pop_back();
                }
                if (res[i] != 0)
                {
                    cur.push_back(res[j] / res[i]);
                    flag = flag || dfs(cur);
                    cur.pop_back();
                }
                if (flag)
                    return true;
            }
        }
        return false;
    }
};
// 他用组合的方式 手动两遍 实现了排列的效果。 排列就是在乎顺序
class Solution
{
public:
    bool judgePoint24(vector<int> &nums)
    {
        vector<double> l;
        for (const int &num : nums)
        {
            l.emplace_back(static_cast<double>(num));
        }
        return dfs(l);
    }

    bool dfs(vector<double> &l)
    {
        if (l.size() == 0)
        {
            return false;
        }
        if (l.size() == 1)
        {
            return abs(l[0] - 24) < 0.001;
        }
        int size = l.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i != j)
                {
                    vector<double> cur;
                    for (int k = 0; k < size; k++)
                    {
                        if (k != i && k != j)
                        {
                            cur.emplace_back(l[k]);
                        }
                    }
                    for (int k = 0; k < 4; k++)
                    {
                        //i>j是排除4，1和1，4的重复。
                        if (k < 2 && i > j)
                        {
                            continue;
                        }
                        if (k == 0)
                        {
                            cur.emplace_back(l[i] + l[j]);
                        }
                        else if (k == 1)
                        {
                            cur.emplace_back(l[i] * l[j]);
                        }
                        else if (k == 2)
                        {
                            cur.emplace_back(l[i] - l[j]);
                        }
                        else if (k == 3)
                        {
                            if (abs(l[j]) < 0.001)
                            {
                                continue;
                            }
                            cur.emplace_back(l[i] / l[j]);
                        }
                        if (dfs(cur))
                        {
                            return true;
                        }
                        cur.pop_back();
                    }
                }
            }
        }
        return false;
    }
};
// 数组直接叫a b就好了。。应为使用太多频率了。。
class Solution
{
public:
    bool judgePoint24(vector<int> &nums)
    {
        vector<double> a;
        for (int n : nums)
            a.push_back(n);
        return dfs(a);
    }
    bool dfs(vector<double> &a)
    {
        if (a.size() == 1)
            return abs(a[0] - 24) < 0.001;
        int n = a.size();
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (i != j)
                {
                    vector<double> b;
                    for (int k = 0; k < n; k++)
                        if (k != i && k != j)
                            b.push_back(a[k]);

                    for (int k = 0; k < 4; ++k)
                    {
                        if (k < 2 && i > j)
                            continue;
                        if (k == 0)
                            b.push_back(a[i] + a[j]);
                        else if (k == 1)
                            b.push_back(a[i] * a[j]);
                        else if (k == 2)
                            b.push_back(a[i] - a[j]);
                        else if (k == 3 && j != 0)
                            b.push_back(a[i] / a[j]);
                        if (dfs(b))
                            return true;
                        b.pop_back();
                    }
                }
        return false;
    }
};

class Solution
{
public:
    bool judgePoint24(vector<int> &nums)
    {
        vector<double> a;
        for (int n : nums)
            a.push_back(n);
        return dfs(a);
    }
    bool dfs(vector<double> &a)
    {
        int n = a.size();
        if (n == 1)
            return abs(a[0] - 24) < 0.001;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (i != j)
                {
                    vector<double> b;
                    for (int k = 0; k < n; ++k)
                        if (k != j && k != i)
                            b.push_back(a[k]);
                    for (int k = 0; k < 4; ++k)
                    {
                        if (k < 2 && i > j)
                            continue;
                        if (k == 0)
                            b.push_back(a[i] + a[j]);
                        else if (k == 1)
                            b.push_back(a[i] * a[j]);
                        else if (k == 2)
                            b.push_back(a[i] - a[j]);
                        else if (k == 3 && a[j] != 0)
                            b.push_back(a[i] / a[j]);
                        if (dfs(b))
                            return true;
                        b.pop_back();
                    }
                }
        return false;
    }
};
bool soso(vector<int> &nums)
{
    vector<double> a;
    for (int n : nums)
        a.push_back(n);
    return dfs(a);
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(a[0] - 24) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != j && k != i)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i > j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool soso(vector<int> &nums)
{
    vector<double> a;
    for (int n : nums)
        a.push_back(n);
    return dfs(a);
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i > j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool soso(vector<int> &nums)
{
    vector<double> a;
    for (int n : nums)
        a.push_back(n);
    return dfs(a);
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != j && k != i)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i > j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool soso(vector<int> &nums)
{
    vector<double> a;
    for (int n : nums)
        a.push_back(n);
    return dfs(a);
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != j && k != i)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i > j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 3)
                        b.push_back(a[i] - a[j]);
                    else if (k == 2 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool soso(vector<int> &nums)
{
    vector<double> a;
    for (int n : nums)
        a.push_back(n);
    return dfs(a);
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < 4; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 3 && i > j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && i < j)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
//这个for里面的设计其实很巧妙。既保证了相对独立性 又享受到了 代码简化的福利。。
// 在这个for循环里面 分离和统一 并存。。
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != j && k != i)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] * a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != j && k != i)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != j && k != i)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] * a[j]);
                    else if (k == 1)
                        b.push_back(a[i] + a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
    // 多写难题。好处多多。收益多多。。坚持。。不是谁都能做到 就没价值了。
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < 4; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}

bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != j && k != i)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != j && k != i)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
                return true;
            }
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return true;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
bool dfs(vector<double> &a)
{
    int n = a.size();
    if (n == 1)
        return abs(24 - a[0]) < 0.001;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
            {
                vector<double> b;
                for (int k = 0; k < n; ++k)
                    if (k != i && k != j)
                        b.push_back(a[k]);
                for (int k = 0; k < 4; ++k)
                {
                    if (k < 2 && i < j)
                        continue;
                    if (k == 0)
                        b.push_back(a[i] + a[j]);
                    else if (k == 1)
                        b.push_back(a[i] * a[j]);
                    else if (k == 2)
                        b.push_back(a[i] - a[j]);
                    else if (k == 3 && a[j] != 0)
                        b.push_back(a[i] / a[j]);
                    if (dfs(b))
                        return true;
                    b.pop_back();
                }
            }
    return false;
}
// 重复加速。。。 冲冲冲 最快的速度给我放开了冲。。
// 1000 只是打底。。后期还是要巩固的