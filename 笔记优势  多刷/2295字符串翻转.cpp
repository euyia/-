#include <all.h>
using namespace std;
// 这个是把字符串逆向。然后消除多余的空格。。
// 消除其实不好消。。这边他就采用 重建的方式。。更简单。
// 这题亮点在于逆序遍历+重建  取代题目要求的消除空格。
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.size(), l, r = n - 1;
        string ret;
        while (r >= 0)
        {
            while (r >= 0 && s[r] == ' ')
                --r; // clear spaces
            if (r < 0)
                break;
            for (l = r; l >= 0 && s[l] != ' '; --l)
                ; // fetch word
            ret += (s.substr(l + 1, r - l) + " ");
            r = l;
        }
        if (ret.size())
            ret.pop_back();
        return ret;
    }
};
class Solution
{
public:
    string reverseWords(string s)
    {
        string res;
        int n = s.size(), r = n - 1;
        int l;
        while (r >= 0)
        {
            while (r >= 0 && s[r] == ' ')
                --r;
            l = r;
            while (r >= 0 && s[r] != ' ')
                --r;
            res += (s.substr(r + 1, l - r) + " ");
        }
        while (res.back() == ' ')
            res.pop_back();
        return res;
    }
};
// 这个解法妙在双指针的使用。和后序的一个指针迭代
// 然后用res从新收集而不是在s上面改。。
// 这种选择上。