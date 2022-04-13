#include <all.h>
using namespace std;
//  这题是有*号的括号匹配。。没什么好说的。。
// 就是在原来括号匹配 基础上加了星号
// 1 有右括号 要先匹配。以右括号是否能处理完 为判断标准
// 2 要存序列号。。。序列号的位置 后期 右括号和*号的相对位置 也是判断标准之一。。

// 这个解法。。是贪心 。去计算左括号需要匹配数。。
// 但是我自己写的是单纯计算数量 是不行 的。
// 他这边。。回头有兴趣再研究把。。
// 这个不是通用解法。。现在都吃不饱了。就不追求这些了。
class Solution
{
public:
    bool checkValidString(string s)
    {
        int minCount = 0, maxCount = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == '(')
            {
                minCount++;
                maxCount++;
            }
            else if (c == ')')
            {
                minCount = max(minCount - 1, 0);
                maxCount--;
                if (maxCount < 0)
                {
                    return false;
                }
            }
            else
            {
                minCount = max(minCount - 1, 0);
                maxCount++;
            }
        }
        return minCount == 0;
    }
};

class Solution
{
public:
    bool checkValidString(string s)
    {
        stack<int> left;
        stack<int> star;
        int n = s.size();
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '(')
                left.push(i);
            else if (s[i] == '*')
                star.push(i);
            else
            {
                if (!left.empty())
                    left.pop();
                else if (!star.empty())
                    star.pop();
                else
                    return false;
            }
        }
        while (!star.empty())
        {
            if (left.empty())
                return true;
            int l = left.top();
            int st = star.top();
            if (l > st)
                return false;
            left.pop();
            star.pop();
        }
        return left.empty();
    }
};

// 下面这个不行。
class Solution
{
public:
    bool checkValidString(string s)
    {
        int minCount = 0, maxCount = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == '(')
            {
                minCount++;
                maxCount++;
            }
            else if (c == ')')
            {
                minCount = max(minCount - 1, 0);
                maxCount--;
                if (maxCount < 0)
                {
                    return false;
                }
            }
            else
            {
                minCount = max(minCount - 1, 0);
                maxCount++;
            }
        }
        return minCount == 0;
    }
};
