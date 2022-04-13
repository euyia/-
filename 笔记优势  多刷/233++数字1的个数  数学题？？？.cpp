#include <all.h>
using namespace std;
int countDigitOne(int n)
{
    string t = to_string(n);
    int k = t.size();
    if (k = 1 && n != 0)
        return 1;
    if (n == 0)
        return 0;
    int res = 0;
    for (int i = 0; i < k; ++i)
    {
        string s = t.substr(0, i);
        int pre = stoi(s);
        string b = t.substr(i + 1);
        int back = stoi(b);
        int cur = s[i] - '0';
        if (cur == 0)
            res += pre * b.size();
        else if (cur == 1)
            res += pre * back;
        else
            res += pre * b.size() + pow(10, b.size());
    }
    return res;
}
// 这题没写完。。数字的。。挺有意思的。虽然很多人不喜欢 。但是我喜欢。
// 我觉得这种题 很有价值。
// 还有一些边界情况没处理好。。前后是0的。。。
// 主题思路有了。。