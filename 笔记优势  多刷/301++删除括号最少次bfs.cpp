#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
// 感觉思路没问题。就是 去删多的那些。用回溯的方法去删。删完之后检查字符的有效性。
// 是没毛病。。
// 但是它这里的要求不单单是这样。。就是括号数量一样的时候也可能是错的。也要处理。
// 这样如果给的四个都是错的。那么我这样删就不行。。了。

class Solution
{
public:
    bool isValid(string str)
    {
        int count = 0;

        for (char c : str)
        {
            if (c == '(')
            {
                count++;
            }
            else if (c == ')')
            {
                count--;
                if (count < 0)
                {
                    return false;
                }
            }
        }

        return count == 0;
    }

    vector<string> removeInvalidParentheses(string s)
    {
        vector<string> res;
        unordered_set<string> cur;
        cur.insert(s);
        while (true)
        {
            for (auto &str : cur)
            {
                if (isValid(str))
                    res.emplace_back(str);
            }
            if (res.size() > 0)
            {
                return res;
            }
            unordered_set<string> next;
            for (auto &str : cur)
            {
                for (int i = 0; i < str.size(); i++)
                {
                    if (i > 0 && str[i] == str[i - 1])
                    {
                        continue;
                    }
                    if (str[i] == '(' || str[i] == ')')
                    {
                        next.insert(str.substr(0, i) + str.substr(i + 1, str.size()));
                        //这边后半部分直接用s.size()；竟然可以。。可能默认识别长度了吧。反正iwork
                    }
                }
            }
            cur = next;
        }
    }
};

class Solution
{
public:
    vector<string> removeInvalidParentheses(string s)
    {

        vector<string> res;
        unordered_set<string> q;
        q.insert(s);
        while (!q.empty())
        {
            // 这个出口方式。挺适合bfs的。。bfs竟然可以解这种题型。。
            //就是按层展开的回溯算法。。以前没这个方向想过。。
            //就是按层展开的回溯算法。。以前没这个方向想过。。
            //就是按层展开的回溯算法。。以前没这个方向想过。。bfs还能这么用。
            // 他其实都不算回溯。因为是不回头的。他只不过是保证了能遍历到全部。。
            //在同层的是回溯的。。
            for (auto n : q)
                if (isok(n))
                    res.push_back(n);
            if (res.size())
                return res;
            unordered_set<string> next;
            for (string r : q)
            {
                for (int i = 0; i < r.size(); ++i)
                {
                    if (i > 0 && s[i] == s[i - 1])
                        continue;
                    string t = r;
                    t.erase(t.begin() + i);
                    next.insert(t);
                }
            }
            q = next;
        }
        return res;
    }
    bool isok(string s)
    {
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(')
                cnt++;
            else if (s[i] == ')')
                cnt--;
            if (cnt < 0)
                return false;
        }
        return cnt == 0;
    }
};

// 这是bfs解法。。效率不高。回头看下另外的 。。这题先过了。。