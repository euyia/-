#include <all.h>
using namespace std;
// 刷变强才是培养自信正道。
// 而不是去做简单题。
// 去刷难的。让难题对你来说变简单。。但是对别人来说还是难的。
// 这才有意义。
class Solution
{
public:
    int findTheWinner(int n, int m)
    {
        if (n == 1)
            return n;
        return (findTheWinner(n - 1, m) + m - 1) % n + 1;
    }
};
class Solution
{
public:
    bool isStraight(vector<int> &_nums)
    {
        vector<int> nums(_nums);
        sort(nums.begin(), nums.end());
        int joker = 0;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] == 0)
                joker++;
            if (nums[i] == nums[i + 1])
                return false;
        }
        return nums[4] - nums[joker] < 5;
    }
};
class Solution
{
public:
    string reverseLeftWords(string s, int n)
    {
        int k = s.size();
        for (int i = 0; i < n; ++i)
            s.push_back(s[i]);
        return s.substr(n, k);
    }
};

class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        int c = 0;
        int vis[501]{0};
        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j < k; ++j)
            {
                if (++c > n)
                    c = 1;
                if (vis[c])
                    j--;
            }
            vis[c] = 1;
        }
        return c;
    }
};