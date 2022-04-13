#include <all.h>
using namespace std;
// 你已被移出这个世界。
class Solution
{
public:
    string decodeString(string s)
    {
        stack<string> a;
        stack<int> b;
        string k;
        for (int i = 0; i < s.size(); ++i)
        {

            int res = 0;
            while (isdigit(s[i]))
            {
                res = res * 10 + s[i] - '0';
                ++i;
            }
            b.push(res);
            res = 0;
            if (s[i] == '[')
            {
                string l;
                l.push_back(s[i]);
                a.push(l);
            }
            while (isalpha(s[i]))
            {
                k += s[i];
            }
            a.push(k);
            k = "";
            if (s[i] == ']')
            {
                string l = a.top();
                a.pop();
                a.pop();
                int last = b.top();
                b.pop();
                while (last--)
                {
                    l += l;
                }
                if (a.top() != "[")
                    a.top() += l;
            }
        }
    }
};
class Solution
{
public:
    string decodeString(string s)
    {
        //两个栈分别压int res和用pair
        stack<pair<int, string>> sta;
        int num = 0;
        string res = "";
        //循环检查字符串
        for (int i = 0; i < s.size(); i++)
        {
            //遇到数字则存入num
            if (s[i] >= '0' && s[i] <= '9')
            {
                num *= 10;
                num += (s[i] - '0'); //这里括号是否需要
            }
            else if (s[i] == '[')
            { //遇到[压栈数字和字符串，置零置空
                sta.push(make_pair(num, res));
                num = 0;
                res = "";
            }
            else if (s[i] == ']')
            {                            //遇到]出栈数字和字符串，组装
                int n = sta.top().first; //n指示的是res的循环次数，不是a的
                string a = sta.top().second;
                sta.pop();
                for (int i = 0; i < n; i++)
                    a = a + res; //循环n次
                res = a;
            }
            else
            { //遇到字符存入字符
                res += s[i];
            }
        }
        return res;
    }
};
// 主要两个点 1  他用pair 让数字和对应括号的字符串11 对应了。
// 不会有我担心的 另外栈存数字 。出现的乱序的情况
// 因为有些括号外面是可以么有数字的。
// 2 是它这里对于节奏的控制。。什么时候放入栈。。什么之后保持在外面。。
// 以碰到[为界限 放入栈。。

class Solution
{
public:
    stack<pair<int, string>> st;
    string decodeString(string s)
    {
        string t;
        int res = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (isdigit(s[i]))
                res = 10 * res + s[i] - '0';
            else if (s[i] == '[')
            {
                st.push({res, t});
                t = "";
                res = 0;
            }
            else if (s[i] == ']')
            {
                int num = st.top().first;
                string last = st.top().second;
                st.pop();
                for (int i = 0; i < num; ++i)
                    last += t;
                t = last;
            }
            else
                t += s[i];
        }
        return t;
    }
};
string soso(string s)
{
    stack<pair<int, string>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string top = st.top().second;
            while (n--)
                top += t;
            t = top;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<string, int>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({t, res});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().second;
            string top = st.top().first;
            while (n--)
                top += t;
            t = top;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<string, int>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({t, res});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().second;
            string top = st.top().first;
            st.pop();
            while (n--)
                top += t;
            t = top;
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<int, string>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string top = st.top().second;
            while (n--)
                top += t;
            t = top;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
class Solution
{
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<int> nums;
    int t, cnt;
    vector<vector<int>> combinationSum2(vector<int> &_nums, int _t)
    {
        nums = _nums, t = _t;
        sort(nums.begin(), nums.end());
        dfs(0, 0);
        return res;
    }
    void dfs(int l, int maxt)
    {
        if (maxt == t)
        {
            res.push_back(path);
            return;
        }
        for (int i = l; i < nums.size(); ++i)
        {
            if (nums[i] + maxt > t)
                break;
            dfs(i + 1, maxt + nums[i]);
        }
    }
};
// 肯定是减枝。。。怎么减枝呢。。
// 1111111111111111111
string soso(string s)
{
    stack<pair<string, int>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({t, res});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().second;
            string last = st.top().first;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<string, int>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({t, res});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().second;
            string last = st.top().first;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<string, int>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({t, res});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().second;
            string last = st.top().first;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<string, int>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({t, res});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().second;
            string last = st.top().first;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<int, string>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string last = st.top().second;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<string, int>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({t, res});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().second;
            string last = st.top().first;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<int, string>> st;
    int res = 0;
    string t;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string last = st.top().second;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    stack<pair<int, string>> st;
    string t;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string last = st.top().second;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
// 至少要500的 不然根本都没温度。没有熟练度感觉。。
// 500 左右就开始顺手了。。
string soso(string s)
{
    int n = s.size();
    stack<pair<int, string>> st;
    string t;
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string last = st.top().second;
            while (n--)
                last += t;
            t = last;
            st.pop();
        }
        else
        {
            t += s[i];
        }
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            res = 0;
            t = "";
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            res = 0;
            t = "";
        }
        else if (s[i] == '[')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            res = 0;
            t = "";
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            res = 0;
            t = "";
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
// 28号就续费了。、、
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
        {
            t += s[i];
        }
    }
    return t;
}
// 马云的亲戚小气不小气关不关马云事？？？
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == '[')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    stack<pair<int, string>> st;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
//  人是很善变的。动物
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] + '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
// 思路才是王者。。。所以舍弃对于定义长度是正确的。
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '[')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ']')
        {
            int n = st.top().first;
            string la = st.top().second;
            while (n--)
                la += t;
            t = la;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
// ...jiayou
// 这个其实和那个三指针 a  b 各存一个指定的变量有点像。
// 就是这里放入栈的时机。。很精髓。。放入栈和重置。。
// 因为要把括号里面的和外面的分开 里面的都用t来存。
// 到时候都是用t来乘。。所以遇到【的时候要重置。。
// 知道了。。他是怎么分类的了。
// 就是当前括号内的。存在临时变量。// 外层括号 存在stack里面。
// 就是当前括号内的。存在临时变量。// 外层括号 存在stack里面。
// 就是当前括号内的。存在临时变量。// 外层括号 存在stack里面。
// 就是当前括号内的。存在临时变量。// 外层括号 存在stack里面。
// 思路为王 其他都妥协 变量起名尽量短 不要耗费多余的精力。把所有注意力都放在思路上
// 当前 内层括号  string t     和         其他外层括号。。stack

string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] = '(')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ')')
        {
            int l = st.top().first;
            string r = st.top().second;
            while (l--)
                r += t;
            t = r;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    int res = 0;
    string t;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '(')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ')')
        {
            int l = st.top().first;
            string r = st.top().second;
            while (l--)
                r += t;
            t = r;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    int res = 0;
    string t;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '(')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ')')
        {
            int l = st.top().first;
            string r = st.top().second;
            while (l--)
                r += t;
            t = r;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    int res = 0;
    string t;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '(')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ')')
        {
            int l = st.top().first;
            string r = st.top().second;
            while (l--)
                r += t;
            t = r;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    string t;
    int res = 0;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '(')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ')')
        {
            int l = st.top().first;
            string r = st.top().second;
            while (l--)
                r += t;
            t = r;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
string soso(string s)
{
    int res = 0;
    string t;
    stack<pair<int, string>> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
            res = 10 * res + s[i] - '0';
        else if (s[i] == '(')
        {
            st.push({res, t});
            t = "";
            res = 0;
        }
        else if (s[i] == ')')
        {
            int l = st.top().first;
            string r = st.top().second;
            while (l--)
                r += t;
            t = r;
            st.pop();
        }
        else
            t += s[i];
    }
    return t;
}
// 反复冲 多次冲。。。核心 冲冲冲。。