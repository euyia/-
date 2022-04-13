#include <all.h>
using namespace std;
// 主要是很巧妙的设计。。和这个fast
auto fast = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution
{
public:
    int maxSubArray(vector<int> &s)
    {
        int res = -1000000, sum = 0;
        for (auto &i : s)
        {
            sum = sum < 0 ? i : sum + i;
            res = max(res, sum);
        }
        return res;
    }
};
class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        vector<string> res;
        for (int n : nums)
            res.push_back(to_string(n));
        sort(res.begin(), res.end(), [&](string x, string y)
             { return x + y > y + x; });
        string t;
        for (string r : res)
            t += r;
        return t;
    }
};
