#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ========================
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int maxans = 0;
        stack<int> res;
        res.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                res.push(i);
            }
            else
            {
                res.pop();
                if (res.empty())
                {
                    res.push(i);
                }
                else
                {
                    maxans = max(maxans, i - res.top());
                }
            }
        }
        return maxans;
    }
};
int longestValidParentheses(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int lognglong(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int lsossl(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
            {

                maxx = max(maxx, i - res.top() - 1);
                res.push(i);
            }
        }
    }
    return maxx;
}
int sosos(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int sosos(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int ssoso(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int soso(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int soso(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int sosos(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int sosos(string s)
{
    int maxx = 0;
    stack<int> res;
    res.push(-1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            res.push(i);
        else
        {
            res.pop();
            if (res.empty())
                res.push(i);
            else
                maxx = max(maxx, i - res.top());
        }
    }
    return maxx;
}
int soso(string s)
{
    int maxx=0;
    stack<int>res;
    res.push(-1);
    for(int i=0;i<s.size();++i)
    {
        
    }
}
// 分割子集 这题看下。然后 把这两个刷了。。