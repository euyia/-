
#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<string> letters(string nums)
    {
        vector<string> s;
        if (nums.empty())
        {
            return s;
        }
        unordered_map<char, string> mp{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}};
        string str;
        backtrack(s, mp, nums, 0, str);
        return s;
    }

    void backtrack(vector<string> &s, const unordered_map<char, string> &mp, const string &nums, int index, string &str)
    {
        if (index == nums.length())
        {
            s.push_back(str);
        }
        else
        {
            char digit = nums[index];
            const string &letters = mp.at(digit);
            for (const char &letter : letters)
            {
                str.push_back(letter);
                backtrack(s, mp, nums, index + 1, str);
                str.pop_back();
            }
        }
    }
};
