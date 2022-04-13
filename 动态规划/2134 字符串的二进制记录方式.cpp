#include <all.h>
using namespace std;
class Solution
{
public:
    int wordCount(vector<string> &a, vector<string> &b)
    {
        int n = a.size();
        int m = b.size();
        set<int> s;
        for (auto c : a)
        {
            int mask = 0;
            for (char k : c)
            {
                mask |= 1 << (k - 'a');
            }
            s.insert(mask);
        }
        int count = 0;
        for (auto c : b)
        {
            int mask = 0;
            for (char k : c)
            {
                mask |= 1 << (k - 'a');
            }
            for (char k : c)
            {
                if (s.count(mask ^ 1 << (k - 'a')))
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
// 举个栗子非常有帮助。。理解。
// s.count(mask ^ 1 << (k - 'a')) 比如这里 要不要mast^=1。。你就举个count（1+2）
// 这样就可以了嘛 。。不用去改变量。。
int soso(vector<string> &a, vector<string> &b)
{
    unordered_set<int> s;
    for (string k : a)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        s.insert(mask);
    }
    int count = 0;
    for (string k : b)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        for (char c : k)
            if (s.count(mask ^ 1 << (c - 'a')))
            {
                count++;
                break;
            }
    }
    return count;
}
vector<string> a;
vector<string> b;
int soso()
{
    unordered_set<int> s;
    for (string k : a)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        s.insert(mask);
    }
    int cnt = 0;
    for (string k : b)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        for (char c : k)
            if (s.count(mask ^= 1 << (c - 'a')))
            {
                cnt++;
                break;
            }
    }
    return cnt;
}
int soso()
{
    unordered_set<int> s;
    for (string k : a)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        s.insert(mask);
    }
    int res = 0;
    for (string k : b)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        for (char c : k)
            if (s.count(mask ^= 1 << (c - 'a')))
            {
                res++;
                break;
            }
    }
    return res;
}
int soso()
{
    unordered_set<int> s;
    for (string k : a)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        s.insert(mask);
    }
    int res = 0;
    for (string k : b)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        for (char c : k)
            if (s.count(mask ^= 1 << (c - 'a')))
            {
                res++;
                break;
            }
    }
    return res;
}
int soso()
{
    unordered_set<int> s;
    for (string k : a)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        s.insert(mask);
    }
    int ans = 0;
    for (string k : b)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        for (char c : k)
            if (s.count(mask ^= 1 << (c - 'a')))
            {
                ans++;
                break;
            }
    }
    return ans;
}
int soso()
{
    unordered_set<int> s;
    for (string k : a)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        s.insert(mask);
    }
    int ans = 0;
    for (string k : b)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        for (char c : k)
            if (s.count(mask ^= 1 << (c - 'a')))
            {
                ans++;
                break;
            }
    }
    return ans;
}
// 使用范围不是很广。。当时字符的题型非常多了。。
// 所以值得刷的。
int soso()
{
    unordered_set<int> s;
    for (string k : a)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        s.insert(mask);
    }
    int ans = 0;
    for (string k : b)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        for (char c : k)
            if (s.count(mask ^ 1 << (c - 'a')))
            {
                ans++;
                break;
            }
    }
    return ans;
}
int soso()
{
    unordered_set<int> s;
    for (string k : a)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        s.insert(mask);
    }
    int ans = 0;
    for (string k : b)
    {
        int mask = 0;
        for (char c : k)
            mask |= 1 << (c - 'a');
        for (char c : k)
            if (s.count(mask ^ 1 << (c - 'a')))
            {
                ans++;
                break;
            }
    }
    return ans;
}
//  非常不错的记录的方式。。
// 值得刷。。
// 思路为王 手刷不动  就脑子刷思路。。