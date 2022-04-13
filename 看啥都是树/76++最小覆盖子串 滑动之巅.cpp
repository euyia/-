#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {
        vector<int> need(128, 0); //vector<int> map(128,0) 代替 unordered_map<char,int> map
        // 可打印字符一般都在0 ~ 127的范围内，所以用vector<int> map(128,0)是可以存储的，不会越界
        int count = 0;
        for (char c : t)
        {
            need[c]++;
        }
        count = t.length();
        int l = 0, r = 0, start = 0, size = INT_MAX;
        // SW问题常定义的变量：左边界、右边界、起始位置、字串大小
        while (r < s.length())
        {
            char c = s[r];
            if (need[c] > 0)
            {
                count--;
            }
            need[c]--; //先把右边的字符加入窗口
            if (count == 0)
            { //窗口中已经包含所需的全部字符，移动左右边界获得最小字符串
                while (l < r && need[s[l]] < 0)
                { // 缩减窗口
                    need[s[l++]]++;
                    // 等价
                    // need[s[l]]++;
                    // l++;
                }
                // 此时窗口符合要求
                if (r - l + 1 < size)
                { // 更新答案
                    size = r - l + 1;
                    start = l;
                }
                need[s[l]]++; //！！！！！//左边界右移之前需要释放need[s[l]]
                // 先将l位置的字符计数重新加1，因为要l++了，字串中丢掉了当前s[l]，所以need[s[l]]要+1
                l++;
                count++;
            }
            r++;
        }
        return size == INT_MAX ? "" : s.substr(start, size);
    }
};
class Solution
{
public:
    string minWindow(string s, string t)
    {
        vector<int> need(128, 0);
        int n = t.length();
        for (char c : t)
        {
            need[c]++;
        }
        // 用++记录右边的字符情况 用-- 记录左边的字符情况 用n记录一个==0 窗口里面的元素数量等于右边。
        // 用++记录右边的字符情况 用-- 记录左边的字符情况 用n记录一个==0 窗口里面的元素数量等于右边。
        // 用++记录右边的字符情况 用-- 记录左边的字符情况 用n记录一个==0 窗口里面的元素数量等于右边。
        int l = 0, r = 0, start = 0, size = INT_MAX;
        while (r < s.length())
        {
            char c = s[r];
            if (need[c] > 0)
                n--;
            need[c]--;  //先把右边的字符加入窗口
            if (n == 0) //窗口中已经包含所需的全部字符
            {
                while (l < r && need[s[l]] < 0) //缩减窗口
                {
                    need[s[l++]]++;
                }                     //此时窗口符合要求
                if (r - l + 1 < size) //更新答案
                {
                    size = r - l + 1;
                    start = l;
                }
                need[s[l]]++; //左边界右移之前需要释放need[s[l]]
                l++;
                n++;
            }
            r++;
        }
        return size == INT_MAX ? "" : s.substr(start, size);
    }
};
string soso(string s, string t)
{
    int n = t.size();
    vector<int> res(128, 0);
    for (char c : t)
        ++res[c];
    int l, r, start, size;
    l = r = 0;
    size = INT_MAX;
    while (r < s.size())
    {
        if (res[s[r]] > 0)
            n--;
        res[s[r]]--;
        if (n == 0)
        {
            while (l < r && res[s[l]] < 0)
                res[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            res[s[l]]++;
            l++;
            n++;
        }

        ++r;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    vector<int> res(128, 0);
    for (char c : t)
        ++res[c];
    int l, r, start, size;
    l = r = 0;
    size = INT_MAX;
    while (r < s.size())
    {
        if (res[s[r]] > 0)
            n--;
        res[s[r]]--;
        if (n == 0)
        {
            while (l < r && res[s[l]] < 0)
            {
                res[s[l++]]++;
            }
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            res[s[l]]++;
            ++l;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string ssoso(string s, string t)
{

    int n = s.size();
    vector<int> res(128, 0);
    for (char c : t)
        ++res[c];
    int l, r, start, size;
    l = r = 0;
    size = INT_MAX;
    while (r < s.size())
    {
        if (res[s[r]] > 0)
            n--;
        res[s[r]]--;
        if (n == 0)
        {
            while (l < r && res[s[l]] < 0)
                res[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            res[s[l]]++;
            ++l;
            ++n;
        }
        ++r;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = s.size();
    vector<int> res(128, 0);
    for (char c : t)
        ++res[c];
    int l, r, start, size;
    l = r = 0;
    size = INT_MAX;
    while (r < s.size())
    {
        if (res[s[r]] > 0)
            n--;
        res[s[r]]--;
        if (n == 0)
        {
            while (l < r && res[s[l]] < 0)
                res[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            res[s[l]]++;
            l++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    vector<int> res(128, 0);
    for (char c : t)
        ++res[c];
    int l, r, start, size;
    l = r = 0;
    size = INT_MAX;
    while (r < s.size())
    {
        if (res[s[r]] > 0)
            n--;
        res[s[r]]--;
        if (n == 0)
        {
            while (l < r && res[s[l]] < 0)
                res[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            res[s[l]]++;
            l++;
            n++;
        }
        ++r;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<int> res(128, 0);
    for (char c : t)
        ++res[c];
    int n = t.size();
    int l, r, start, size;
    l = r = 0;
    size = INT_MAX;
    while (r < s.size())
    {
        if (res[s[r]] > 0)
            n--;
        res[s[r]]--;
        if (n == 0)
        {
            while (l < r && res[s[l]] < 0)
                res[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            res[s[l]]++;
            ++l;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    vector<int> res(128, 0);
    for (char c : t)
        ++res[c];
    int l, r, start, size;
    l = r = 0;
    size = INT_MAX;
    while (r < s.size())
    {
        if (res[s[r]] > 0)
            n--;
        res[s[r]]--;
        if (n == 0)
        {
            while (l < r && res[s[l]] < 0)
                res[s[l++]]++;
            if (size > r - l + 1)
            {
                size = r - l + 1;
                start = l;
            }
            res[s[l++]]++;
            n++;
        }
        ++r;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}

class Solution
{
public:
    string minWindow(string s, string t)
    {
        vector<int> need(128, 0);
        for (char c : t)
            need[c]++;
        int n = t.size();
        int l = 0, r = 0, start = 0, size = INT_MAX;
        while (r < s.size())
        {
            int c = s[r];
            if (need[c] > 0)
                n--;
            need[c]--;
            if (n == 0)
            {
                while (need[s[l]] < 0)
                    need[s[l++]]++;
                if (r - l + 1 < size)
                {
                    size = r - l + 1;
                    // 比如banc  例子。。这时候l是指向b r指向c的
                    // r-l是3  这里长度应该是4 的。。所以+1；
                    // 都是指向当前有效元素。所以长度要+1；
                    // 都是指向当前有效元素。所以长度要+1；
                    // 都是指向当前有效元素。所以长度要+1；
                    start = l;
                }
                need[s[l]]++;
                l++;
                n++;
            }
            r++;
        }
        return size == INT_MAX ? "" : s.substr(start, size);
    }
};
string soso(string s, string t)
{
    vector<int> need(128, 0);
    int n = t.size();
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start = 0, size = INT_MIN;
    while (r < s.size())
    {
        char c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            // 可以这样写 说明是外层的先++；
            // 因为这里的逻辑就是需要need当前值先++；

            if (r - l + 1 < size)
            {
                start = l;
                size = r - l + 1;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<char> need(128, 0);
    int n = t.size();
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        char c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<char> need(128, 0);
    int n = t.size();
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        char c = s[r];
        if (need[c] >= 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
// 这题核心是t里面有的 ++
// 然后s里面的放进去是-- 拿出来是++。。然后t里面的元素才有可能>0。。
// 所以用》0 来作为判断依据  用n来作为记录。。
// 而且关键可以正反用。简直了。。
string soso(string s, string t)
{
    vector<char> need(128, 0);
    int n = t.size();
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        char c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<char> need(128, 0);
    int n = t.size();
    for (char c : t)
        need[c]++;
    int r = 0, l = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        char c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<char> res(128, 0);
    int n = t.size();
    for (char c : t)
        res[c]++;
    int r = 0, l = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        char c = s[r];
        if (res[c] > 0)
            n--;
        res[c]--;
        if (n == 0)
        {
            while (res[s[l]] < 0)
                res[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            res[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<int> need(128, 0);
    int n = t.size();
    for (int c : t)
        need[c]++;
    int r = 0, l = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] < 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<int> need(128, 0);
    int n = t.size();
    for (int c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<int> need(128, 0);
    int n = t.size();
    for (int c : t)
        need[c]++;
    int r = 0, l = 0, size = INT_MAX, start;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<int> need(128, 0);
    int n = t.size();
    for (int c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        need[c]--;
        if (need[c] > 0)
            n--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<int> need(12, 0);
    int n = t.size();
    for (int c : t)
        need[c]++;
    int r = 0, l = 0, size = INT_MAX, start;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    vector<int> need(128, 0);
    int n = t.size();
    for (int c : t)
        need[c]++;
    int r = 0, l = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
// 一个刷就多刷点。一次刷熟练点 下次刷就很舒服。。
// 不会又好像重新见面。。

class Solution
{
public:
    string minWindow(string s, string t)
    {
        int n = t.size();
        int need[128];
        for (auto c : t)
            need[c]++;
        int l = 0, start = 0, size = INT_MAX, r = 0;
        while (r < s.size())
        {
            int c = s[r];
            if (need[c] > 0)
                n--;
            need[c]--;
            if (n == 0)
            {
                while (need[s[l]] < 0)
                    need[s[l++]]++;
                if (r - l + 1 < size)
                {
                    size = r - l + 1;
                    start = l;
                }
                need[s[l++]]++;
                n++;
            }
            r++;
        }
        if (size == INT_MAX)
            return "";
        else
            return s.substr(start, size);
    }
};
string soso(string s, string t)
{
    int n = t.size();
    int need[128]{0};
    for (auto c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    if (size == INT_MAX)
        return "";
    return s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    int need[128]{0};
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}

string soso(string s, string t)
{
    int n = t.size();
    int need[128]{0};
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    int need[128]{0};
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    int need[128]{0};
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    int need[128]{0};
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    int need[128]{0};
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        if (need[c] > 0)
            n--;
        need[c]--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size == r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    int need[18]{0};
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        need[c]--;
        if (need[c] > 0)
            n--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}
string soso(string s, string t)
{
    int n = t.size();
    int need[128]{0};
    for (char c : t)
        need[c]++;
    int l = 0, r = 0, start, size = INT_MAX;
    while (r < s.size())
    {
        int c = s[r];
        need[c]--;
        if (need[c] > 0)
            n--;
        if (n == 0)
        {
            while (need[s[l]] < 0)
                need[s[l++]]++;
            if (r - l + 1 < size)
            {
                size = r - l + 1;
                start = l;
            }
            need[s[l++]]++;
            n++;
        }
        r++;
    }
    return size == INT_MAX ? "" : s.substr(start, size);
}