#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。

class Solution
{
public:
    string smallestSubsequence(string s)
    {
        vector<int> nums(128);
        for (char c : s)
            nums[c - 'a']++;
        string stk;
        for (char c : s)
        {
            if (stk.find(c) == -1)
            {
                while (!stk.empty() && c < stk.back() && nums[c - 'a'] > 0)
                    stk.pop_back();
                stk.push_back(c);
            }
            nums[c - 'a']--;
        }
        return stk;
    }
};