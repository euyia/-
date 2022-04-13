#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。

// 这题是  主要是一个解法比较新颖 记录一下。
// 输入：s1 = "ab" s2 = "eidbaooo"
// 输出：true
// 解释：s2 包含 s1 的排列之一 ("ba").
class Solution
{
public:
    bool checkInclusion(string a, string b)
    {
        if (a.size() > b.size())
            return false;
        int mask = 0;
        for (char c : a)
            mask |= 1 << c;
        int m = 0;
        int i = 0;
        for (; i < a.size(); ++i)
            m |= 1 << b[i];
        for (; i < b.size(); ++i)
        {
            if (mask == m)
                return true;
            m ^= 1 << b[i];
            m ^= 1 << b[i - a.size()];
        }
        return false;
    }
};
// 二进制。。保存不了 abbc 和 azzc akkc。。。这种。因为两次就
// 他是用vector==vector 来做的。vector从这个角度 也算一级公民了。。

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int> cnt(26);
        for (int i = 0; i < s1.length(); i++)
            cnt[s1[i] - 'a']++;
        int l = 0, r;
        for (r = 0; r < s2.length(); r++)
        {
            --cnt[s2[r] - 'a'];
            while (cnt[s2[r] - 'a'] < 0)
                cnt[s2[l++] - 'a']++;
            if (r - l + 1 == s1.length())
                return true;
        }
        return false;
    }
};